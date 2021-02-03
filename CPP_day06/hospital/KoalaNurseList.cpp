/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "KoalaNurseList.hpp"

KoalaNurseList::KoalaNurseList(KoalaNurse *nurse)
{
    m_nurse = nurse;
    m_next = nullptr;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool KoalaNurseList::isEnd(void)
{
    if (this->m_next == nullptr)
        return true;
    return false;
}

void KoalaNurseList::append(KoalaNurseList *list)
{
    KoalaNurseList *tmp = this;

    if (list == nullptr)
        return;
    if (list->m_nurse == nullptr) {
        while (tmp->isEnd() == false)
            tmp = tmp->getNext();
        tmp->m_next = list;
        return;
    }
    if (list->m_nurse) {
        if (this->getFromID(list->m_nurse->getID()) != nullptr)
            return;
    }

    while (tmp->isEnd() == false) {
        tmp = tmp->getNext();
    }
    tmp->m_next = list;
}

KoalaNurse *KoalaNurseList::getFromID(int ID)
{
    KoalaNurseList *tmp = this;

    while (tmp->m_next != nullptr) {
        if (tmp->m_nurse != nullptr) {
            if (tmp->m_nurse->getID() == ID)
                return tmp->m_nurse;
        }
        tmp = tmp->getNext();
    }
    if (tmp->m_nurse != nullptr) {
        if (tmp->m_nurse->getID() == ID)
            return tmp->m_nurse;
    }
    return nullptr;
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *list)
{
    KoalaNurseList *ptr = this;
	KoalaNurseList *rew = nullptr;

	while (ptr->isEnd() == false) {
		if (ptr == list) {
			if (rew == nullptr) {
				rew = ptr->m_next;
				ptr->m_next = nullptr;
				return (rew);
			}
			else {
                rew->m_next = ptr->m_next;
				ptr->m_next = nullptr;
				return (this);
			}
		}
		rew = ptr;
		ptr = ptr->m_next;
	}
    if (ptr == list) {
		if (rew == nullptr) {
			rew = ptr->m_next;
			ptr->m_next = nullptr;
			return (rew);
		}
		else {
            rew->m_next = ptr->m_next;
			ptr->m_next = nullptr;
			return (this);
		}
	}
	return nullptr;
}

KoalaNurseList *KoalaNurseList::removeFromID(int ID)
{
    KoalaNurseList *tmp = this;

    while (tmp->isEnd() == false) {
        if (tmp->m_nurse) {
            if (tmp->m_nurse->getID() == ID) {
                return remove(tmp);
            }
        }
        tmp = tmp->getNext();
    }
    if (tmp->m_nurse) {
        if (tmp->m_nurse->getID() == ID) {
            tmp = nullptr;
            return this;
        }
    }
    return this;
}

KoalaNurse *KoalaNurseList::getContent(void)
{
    return m_nurse;
}

KoalaNurseList *KoalaNurseList::getNext(void)
{
    return m_next;
}

void KoalaNurseList::dump(void)
{
    KoalaNurseList *tmp = this;

    std::cout << "Nurses:";

    while (tmp->isEnd() == false) {
        if (tmp->m_nurse != nullptr)
            std::cout << " " << tmp->m_nurse->getID() << ",";
        else
            std::cout << " [nullptr],";
        tmp = tmp->getNext();
    }
    if (tmp->m_nurse != nullptr)
        std::cout << " " << tmp->m_nurse->getID() << ".";
    else
        std::cout << " [nullptr].";
    std::cout << std::endl;
}

void KoalaNurseList::erease_first(void)
{
    KoalaNurseList *cur = this->m_next;
	KoalaNurseList *prev = this;

    prev->m_next = cur->m_next;
    cur->m_next = NULL;
}