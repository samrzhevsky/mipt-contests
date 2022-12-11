struct Rect *max(struct Rect *pa, struct Rect *pb)
{
	return (pa->width * pa->height) > (pb->width * pb->height) ? pa : pb;
}