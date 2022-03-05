void itc_empty_circle(int x_coord, int y_coord, char simv, int radius, vector<vector<char> > &arr)
{
    int error = 0;

    int x = 0;
    int y = radius;

    int raznica = 1 - 2 * radius;

   while (y >= 0)
   {
       arr[x_coord + x][y_coord + y] = simv;
       arr[x_coord + x][y_coord - y] = simv;
       arr[x_coord - x][y_coord + y] = simv;
       arr[x_coord - x][y_coord - y] = simv;
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


void itc_circle(int x_coord, int y_coord, char simv, int radius, vector<vector<char> >& arr)
{
    int counter = 0;
    bool flag = true;
    
    itc_empty_circle(x_coord, y_coord, simv, radius, arr);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 1; j < arr[0].size(); j++)
        {
            for (int k = 0; k < arr[0].size(); k++)
            {
                if (arr[i][k] == simv)
                    counter++;
            }
            if (arr[i][j - 1] == simv && arr[i][j] == arr[0][0] && counter % 2 == 0)
            {
                while (arr[i][j] == arr[0][0] && flag == 1)
                {
                    arr[i][j] = simv;
                    j++;
                }
                flag = 0;
            }
            counter = 0;
        }
        counter = 0;
        flag = 1;
    }
}

void itc_empty_rectangle(int x, int y, int w, int h, char simv, vector<vector<char> >& arr)
{
    for (int i = x; i < x + w; i++)
        arr[y][i] = simv;
    for (int i = y + 1; i < y + h - 1; i++) 
        arr[i][x] = simv;
    for (int i = y + 1; i < y + h - 1; i++) 
        arr[i][x + w - 1] = simv;
    for (int i = x; i < x + w; i++) 
        arr[y + h - 1][i] = simv;
}

void itc_rectangle(int x, int y, int w, int h, char simv, vector<vector<char> >& arr)
{
    for (int i = x; i < x + w; i++)
    {
        for (int j = y; j < y + h; j++)
        {
            arr[j][i] = simv;
        }
    }
}
