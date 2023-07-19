#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            // Calcula o valor médio dos componentes de cor RGB
            int avg = round((pixel.rgbtRed + pixel.rgbtGreen + pixel.rgbtBlue) / 3.0);

            // Define o valor médio como o novo valor para cada componente de cor RGB
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtBlue = avg;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            // Troca os pixels entre as colunas da esquerda e direita
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // cópia temporária da imagem original
    RGBTRIPLE temp[height][width];
    memcpy(temp, image, sizeof(RGBTRIPLE) * height * width);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int count = 0;
            int sumRed = 0, sumGreen = 0, sumBlue = 0;

            // Percorre a vizinhança de cada pixel
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di;
                    int nj = j + dj;

                    // Verifica se o pixel vizinho está dentro dos limites da imagem
                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        sumRed += temp[ni][nj].rgbtRed;
                        sumGreen += temp[ni][nj].rgbtGreen;
                        sumBlue += temp[ni][nj].rgbtBlue;
                        count++;
                    }
                }
            }

            // Calcula a média dos valores dos pixels vizinhos
            image[i][j].rgbtRed = round((float)sumRed / count);
            image[i][j].rgbtGreen = round((float)sumGreen / count);
            image[i][j].rgbtBlue = round((float)sumBlue / count);
        }
    }
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
