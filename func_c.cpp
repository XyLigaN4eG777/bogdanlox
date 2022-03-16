void circ(vector <vector <char>>& a, float x_coord, int y_coord, float radius, char simv)
{
	int error = 0;

	int x = 0;
	int y = radius;

	int raznica = 1 - 2 * radius;

	while (y >= 0)
	{
		a[x_coord + x][y_coord + y] = simv;
		a[x_coord + x][y_coord - y] = simv;
		a[x_coord - x][y_coord + y] = simv;
		a[x_coord - x][y_coord - y] = simv;
		error = 2 * (raznica + y) - 1;
		if ((raznica < 0) && (error <= 0))
		{
			raznica += 2 * ++x + 1;
			continue;
		}
		if ((raznica > 0) && (error > 0))
		{
			raznica -= 2 * --y + 1;
			continue;
		}
		raznica += 2 * (++x - --y);
	}
}
