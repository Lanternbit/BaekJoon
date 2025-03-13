def solution(today, terms, privacies):
    answer = []
    
    year, month, day = map(int, today.split('.'))

    for index, p in enumerate(privacies, start=1):
        collect = p.split(' ')[0]
        py, pm, pd = map(int, collect.split('.'))

        for t in terms:
            if p.split(' ')[1] == t.split(' ')[0]:
                pm += int(t.split(' ')[1])
                py += (pm - 1) // 12
                pm = ((pm - 1) % 12) + 1
                if pd != 1:
                    pd -= 1
                else:
                    if pm != 1:
                        pm -= 1
                    else:
                        pm = 12
                        py -= 1
                    pd = 28
        print(py, pm, pd)
        if py < year:
            answer.append(index)
        elif py > year:
            continue
        elif pm < month:
            answer.append(index)
        elif pm > month:
            continue
        elif pd < day:
            answer.append(index)
        else:
            continue

    return answer