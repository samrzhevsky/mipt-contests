Coord getPoint()
{
    Coord a;

    cin >> a.x >> a.y;

    return a;
}

void getTri(Triangle &tri)
{
    tri.p1 = getPoint();
    tri.p2 = getPoint();
    tri.p3 = getPoint();
}

int dist(Coord a, Coord b)
{
    return pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
}

int cmp(Triangle a, Triangle b)
{
    int qa[] = {dist(a.p1, a.p2), dist(a.p1, a.p3), dist(a.p2, a.p3)};
    int qb[] = {dist(b.p1, b.p2), dist(b.p1, b.p3), dist(b.p2, b.p3)};

    return (qa[0] == qb[0] && qa[1] == qb[1] && qa[2] == qb[2]) ||
           (qa[0] == qb[0] && qa[2] == qb[1] && qa[1] == qb[2]) ||

           (qa[1] == qb[0] && qa[2] == qb[1] && qa[0] == qb[2]) ||
           (qa[1] == qb[0] && qa[0] == qb[1] && qa[2] == qb[2]) ||

           (qa[2] == qb[0] && qa[1] == qb[1] && qa[0] == qb[2]) ||
           (qa[2] == qb[0] && qa[0] == qb[1] && qa[1] == qb[2]);
}