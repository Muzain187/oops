class polynomial{
	int *degCoef;
	int capacity;
	
	public:
	polynomial(){
		degCoef = new int[5];
		capacity = 5;
	}
	polynomial(polynomial const &p){
		int *temp = new int[p.capacity];
		for(int i=0; i<p.capacity; i++)
			this.temp[i] = p.degCoef[i];
		this.degCoef = temp;
	}
};
