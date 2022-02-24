void read_file(vector <string> &commands, string &path)     //чтение файла
{
	ifstream file;
	string str;

	file.open(path);
	if (file.is_open()) {
		while (getline(file, str))
			commands.push_back(str);
	}
	else {
		cout << "Error: Operation file corrupted" << endl;
		return;
	}
	file.close();
}

vector <string> split(string a)
{
	vector <string> out;
	string temp;
	for (int i = 0; i < len(a); i++)
	{
		if (a[i] == ' ')
		{
			out.push_back(temp);
			temp = "";
		}
		else
		{
			temp += a[i];
		}
	}
	out.push_back(temp);
	return out;
}
