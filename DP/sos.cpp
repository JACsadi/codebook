vector<int> sos(1 << n);
for (int x = 0; x < (1 << n); x++) {
	// iterate over all other sets and checks whether they're a subset of x
	for (int i = 0; i < (1 << n); i++) {
		if ((i & x) == i) { sos[x] += a[i]; }
	}
}