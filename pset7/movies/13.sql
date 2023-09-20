/*
    escreva uma consulta SQL para listar os nomes de todas as pessoas
    que estrelaram um filme no qual Kevin Bacon também estrelou
*/

SELECT DISTINCT p.name
FROM people AS p
JOIN stars AS s1 ON p.id = s1.person_id
JOIN movies AS m1 ON s1.movie_id = m1.id
JOIN stars AS s2 ON m1.id = s2.movie_id
JOIN people AS kevin_bacon ON s2.person_id = kevin_bacon.id
WHERE kevin_bacon.name = 'Kevin Bacon' AND p.name != 'Kevin Bacon';