int m,n;
	cin >> m >> n;
	int prod = m*n;
	int count = 0;
	while(prod > 1){
			count++;
			prod = prod - 2;
	}
	cout << count;
