/*
    escreva uma consulta SQL para listar os títulos dos cinco filmes com melhor
    classificação (em ordem) que Chadwick Boseman estrelou, começando com os de maior classificação.
*/

SELECT m.title
FROM movies AS m
JOIN stars AS s ON m.id = s.movie_id
JOIN people AS p ON s.person_id = p.id
JOIN ratings AS r ON m.id = r.movie_id
WHERE p.name = 'Chadwick Boseman'
ORDER BY r.rating DESC
LIMIT 5;