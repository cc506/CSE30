int main(){
	Queue queue;
	try {
		queue.front();
	} catch(int error) {
		if( error == 0 ) {
			cout << error.dequeue() << endl;
		} else if( error == ? ) {
			cout << error.front() << endl;
		}
	}