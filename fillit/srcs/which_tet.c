void	which_tet(t_tet_frag tetromino)
{
	int i;
	int row;

	row = -1;
	i = -1;

	while (tetromino->array[++row][++i])
	{
		if (tetromino->array[row][i] == TET1[i])
			TET1FUNC();
		if (tetromino->array[row][i] == TET2[i])
			TET2FUNC();
		if (tetromino->array[row][i] == TET3[i])
			TET3FUNC();
		if (tetromino->array[row][i] == TET4[i])
			TET4FUNC();
		if (tetromino->array[row][i] == TET5[i])
			TET5FUNC();
		if (tetromino->array[row][i] == TET6[i])
			TET6FUNC();
		if (tetromino->array[row][i] == TET7[i])
			TET7FUNC();
		if (tetromino->array[row][i] == TET8[i])
			TET8FUNC();
		if (tetromino->array[row][i] == TET9[i])
			TET9FUNC();
		if (tetromino->array[row][i] == TET10[i])
			TET10FUNC();
		if (tetromino->array[row][i] == TET11[i])
			TET11FUNC();
		if (tetromino->array[row][i] == TET12[i])
			TET12FUNC();
		if (tetromino->array[row][i] == TET13[i])
			TET13FUNC();
		if (tetromino->array[row][i] == TET14[i])
			TET14FUNC();
		if (tetromino->array[row][i] == TET15[i])
			TET15FUNC();
		if (tetromino->array[row][i] == TET16[i])
			TET16FUNC();
		if (tetromino->array[row][i] == TET17[i])
			TET17FUNC();
		if (tetromino->array[row][i] == TET18[i])
			TET18FUNC();
		if (tetromino->array[row][i] == TET21[i])
			TET21FUNC();

	}
}