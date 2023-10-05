#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 1024

/**
 * display_error - Displays an error message and exits the program.
 * @message: The error message to display.
 */
void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_magic - Displays the magic numbers of the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_magic(const Elf64_Ehdr *elf_header)
{
	printf(" Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
}

/**
 * display_class - Displays the class of the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_class(const Elf64_Ehdr *elf_header)
{
	printf(" Class: ");
	switch (elf_header->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}

/**
 * display_data - Displays the data encoding of the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_data(const Elf64_Ehdr *elf_header)
{
	printf(" Data: ");
	switch (elf_header->e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}

/**
 * display_version - Displays the version of the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_version(const Elf64_Ehdr *elf_header)
{
	printf(" Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
}

/**
 * display_osabi - Displays the OS/ABI of the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_osabi(const Elf64_Ehdr *elf_header)
{
	printf(" OS/ABI: ");
	switch (elf_header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}

/**
 * display_abiversion - Displays the ABI version of the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_abiversion(const Elf64_Ehdr *elf_header)
{
	printf(" ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
}

/**
 * display_type - Displays the type of the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_type(const Elf64_Ehdr *elf_header)
{
	printf(" Type: ");
	switch (elf_header->e_type)
	{
	case ET_NONE:
		printf("No file type\n");
		break;
	case ET_REL:

