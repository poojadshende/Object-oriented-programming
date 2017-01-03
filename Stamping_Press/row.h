class row 
{
  private:
    int row_var;

  public:
    row(int r);
    int get_row() const;
};

row::row(int r) 
{
  row_var = r;
}

int row::get_row() const 
{
  return row_var;
}
