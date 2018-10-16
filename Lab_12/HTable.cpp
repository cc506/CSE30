#include <iostream>
#include <HTable.h>
using namespace std;

HTable::HTable() {
	max_size = 23; numel = 0;
	dt = new data[max_size]; 
	for(int i=0 ; i<max_size ; i++) {
		dt[i].key = -1; dt[i].value = "N/A";
	}
}
HTable::HTable(int t_size) {
	max_size = t_size;
	numel = 0;
	dt = new data[max_size];
	for(int i=0 ; i<max_size ; i++) {
		dt[i].key = -1; dt[i].value = "N/A";
	}
}
int HTable::hash(int &k) {
	int index = k % max_size;
	return index;
}
int HTable::rehash(int &k) {
	int index = (k+1) % max_size; 
	return index;
}
int HTable::add(data &d) {
	if( numel == max_size ) {
		return -1;
	} else {
		if(if(dt[index].key == -1){
				dt[index] = d;
				return 0;
		}else{
			int i = 0;
			while(i <= max_size){
				index = rehash(index);
				if(dt[index].key == -1){
					dt[index] = d;
					return 0;
				}else if(i == max_size){
					return -1;
				}
			i++;
			}
		}
	}
}
int HTable::remove(data &d) {
	if( numel == 0 ) {
		return -1;
	} else {
		if(dt[index].key == d.key){
			dt[index].key = -1;
			dt[index].value = "N/A";
			numel--;
			return 0;
		} else {
		int i = 0;
			while(i <= max_size){
				index = rehash(index);
				if(dt[index].key == d.key){
					dt[index].key = -1;
					dt[index].value = "N/A";
					numel--;
					return 0;
				}else if(i == max_size){
					return -1;
				}
			i++;
			}
			
		}
	}
}
void HTable::output(){
	for(int i = 0; i <= max_size; i++){
			cout << i << " -> " << dt[i].key << "  " <<dt[i].value << endl;
	}
}