array_minmax_t *array_minmax_create(unsigned int length, int *input_array)
{
  array_minmax_t  *array;
  array = malloc(sizeof(array_minmax_t));
  array->int_array = input_array;
  array->length = length;
  return array;
}

void array_minmax_add(array_minmax_t *array, int number)
{
  array->int_array[array->length] = number;
  array->length++;
}

int array_minmax_get_min(array_minmax_t *array)
{
  int min;
  
  min = array->int_array[0];
  for (unsigned int i = 0; i < array->length; i++)
  {
    if (array->int_array[i] < min)
    {
      min = array->int_array[i];
    }
  }
  return min;
}

int array_minmax_get_max(array_minmax_t *array)
{
  int max;
  
  max = array->int_array[0];
  for (unsigned int i = 0; i < array->length; i++)
  {
    if (array->int_array[i] > max)
    {
      max = array->int_array[i];
    }
  }
  return max;
}

void array_minmax_destroy(array_minmax_t *array)
{
  free(array);
}
