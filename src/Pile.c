/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copeugne <copeugne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:49:06 by copeugne          #+#    #+#             */
/*   Updated: 2022/09/11 12:58:48 by copeugne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"
 
// Fonction utilitaire pour ajouter un élément `x` à la stack
void push(t_node **top, int x)        // insère au début
{
    // alloue un nouveau noeud dans un heap
    t_node* node = NULL;
    node = (t_node*)malloc(sizeof(t_node));
 
    // vérifie si la stack (le heap) est pleine. Ensuite, l'insertion d'un élément serait
    // conduit à un débordement de stack
    if (!node)
    {
        printf("Heap Overflow\n");
        exit(-1);
    }
 
    // printf("Inserting %d\n", x);
 
    // définit les données dans le nœud alloué
    node->data = x;
 
    // définit le pointeur .next du nouveau nœud pour qu'il pointe vers le courant
    // nœud supérieur de la liste
    node->next = *top;
 
    // met à jour le pointeur supérieur
    *top = node;
}
 
// Fonction utilitaire pour vérifier si la stack est vide ou non
int isEmpty(t_node* top) {
    if (top == NULL)
	{
		printf("The stack is empty\n");
		return (1);
	}
	else
		return (0);
}
 
// Fonction utilitaire pour retourner l'élément du haut de la stack
int peek(t_node *top)
{
    // recherche une stack vide
    if (!isEmpty(top)) {
        return top->data;
    }
    else {
        printf("The stack is empty\n");
        exit(EXIT_FAILURE);
    }
}
 
// Fonction utilitaire pour faire apparaître un élément supérieur de la stack
int pop(t_node** top)        // supprimer au début
{
    t_node *node;
 
    // vérifie le sous-dépassement de la stack
    if (*top == NULL)
    {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
 
    // prend note des données du nœud supérieur
    int x = peek(*top);
 
    printf("Removing %d\n", x);
 
    node = *top;
 
    // met à jour le pointeur supérieur pour pointer vers le nœud suivant
    *top = (*top)->next;
 
 
    // libérer de la mémoire allouée
    free(node);
 
    return x;
}
 
int size(t_node *Node) {
	int	i;

	i = 0;
    while (Node)
	{
		i++;
		Node = Node->next;	
	}
	return (i);
}

void	printStack(t_node *Node)
{
	while (Node)
	{
		printf("Node->value : %d\n", Node->data);
		Node = Node->next;
	}
}

int main()
{
    t_node* top = NULL;
	t_node *last_node;

    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
 
    printf("The top element is %d\n", peek(top));
	printf("The size of the stack is %d\n", size(top));
	printf("\n");
	printStack(top);
	printf("\n");
	ft_swap(top);
	printf("Swapped\n");
	printStack(top);
	printf("\n");
	
	last_node = last_element(top);
	printf("Last Node is %d\n", last_node->data);
	printf("\n");

	printf("Rotated\n");
	rotate(top);
	printStack(top);
	printf("\n");

	isEmpty(top);
	printf("\n");

    pop(&top);
    pop(&top);
    pop(&top);
     return 0;
}