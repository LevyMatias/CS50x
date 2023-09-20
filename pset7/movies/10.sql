/*
    escreva uma consulta SQL para listar os nomes de todas as pessoas que dirigiram um filme
    que recebeu uma classificação de pelo menos 9,0
*/

SELECT DISTINCT p.name
FROM people AS p
JOIN directors AS d ON p.id = d.person_id
JOIN ratings AS r ON d.movie_id = r.movie_id
WHERE r.rating >= 9.0;