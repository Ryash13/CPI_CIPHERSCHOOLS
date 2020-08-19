string minWindow(string s, string t) {
	int size(s.size());
	int p, q, m(size + 1);
	int start(0), end(0);
	int remaining(t.size());
	int arr[128] = { 0 };

	for (auto itr = t.begin(); itr != t.end(); ++itr)
		arr[*itr]--;

	while (end < size) {
		if (arr[s[end]] < 0) remaining--;

		while (remaining == 0) {
			if (arr[s[start]] < 1) {
				remaining++;
				if (end - start < m) {
					m = end - start;
					p = start;
					q = end;
				}
			}

			arr[s[start++]]--;
		}

		arr[s[end++]]++;
	}

	return (m > size) ? "" : s.substr(p, q - p + 1);
}
