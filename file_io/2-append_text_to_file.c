#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	/*Vérifier si le nom du fichier ou le contenu du texte est NULL*/
	if (filename == NULL || text_content == NULL)
		return (-1);

	/**
	 * Ouvrir le fichier en écriture, en ajoutant à
	 * la fin (O_WRONLY | O_APPEND)
	 * fd = open(filename, O_WRONLY | O_APPEND)
	 */

	if (fd == -1)
		return (-1); /*Échec de l'ouverture du fichier*/

	/*Écrire le texte dans le fichier*/
	bytes_written = write(fd, text_content, strlen(text_content));

	/*Fermer le fichier après écriture*/
	close(fd);

	if (bytes_written == -1)
		return (-1); /*Échec de l'écriture du texte dans le fichier*/

	return (1); /*Succès*/
}
