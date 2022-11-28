void push(stack <int> s, int temp)
{
	if (s.size() == 0 || s.top() <= temp)
	{
		s.push(temp);
		return;
	}

	int val = s.top();
	s.pop();
	push(s, temp);
	s.push(val);
	return;

}


void sort_stack(stack <int>& s)
{
	if (s.size() == 1)
	{
		return;
	}
	int temp = s.top();
	s.pop();
	sort_stack(s);
	push(s, temp);
	return;
}