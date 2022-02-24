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
vector <string> read_file(char* path)
{
	ifstream file_dir;
	vector <string> out;
	file_dir.open(path);
	string line;
	file_dir >> line;
	if (line == "")
	{
		cout << "Error: file is empty";
		exit(0);
	}
	file_dir.close();
	file_dir.open(path);
	if (file_dir.is_open())
	{
		while (getline(file_dir, line))
		{
			out.push_back(line);
		}
		file_dir.close();
	}
	else
	{
		cout << "Error: can't open file";
		exit(0);
	}
	return out;
}
