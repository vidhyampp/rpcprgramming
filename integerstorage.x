struct IntegerArray{
	int arr[8]; 	/* to store the eight input value from the command-line argument */
};

program INTEGER_STORAGE{
	version INT_STORAGE_VERS{
		void APPEND(IntegerArray) = 1;
		int QUERY(int)=2;
		void REMOVE(int)=3;
	} = 1;
} = 0x56473856;