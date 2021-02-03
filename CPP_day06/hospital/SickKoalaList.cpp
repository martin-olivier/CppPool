/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *patient)
{
    m_patient = patient;
    m_next = nullptr;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd(void)
{
    if (this->m_next == nullptr)
        return true;
    return false;
}

void SickKoalaList::append(SickKoalaList *list)
{
    SickKoalaList *tmp = this;

    if (list == nullptr)
        return;
    if (list->m_patient == nullptr) {
        while (tmp->isEnd() == false)
            tmp = tmp->getNext();
        tmp->m_next = list;
        return;
    }
    if (list->m_patient) {
        if (this->getFromName(list->m_patient->getName()) != nullptr)
            return;
    }

    while (tmp->isEnd() == false) {
        tmp = tmp->getNext();
    }
    tmp->m_next = list;
}

SickKoala *SickKoalaList::getFromName(std::string name)
{
    SickKoalaList *tmp = this;

    while (tmp->m_next != nullptr) {
        if (tmp->m_patient != nullptr) {
            if (tmp->m_patient->getName() == name)
                return tmp->m_patient;
        }
        else {
            if ("[nullptr]" == name);
                return tmp->m_patient;
        }
        tmp = tmp->getNext();
    }
    if (tmp->m_patient != nullptr) {
        if (tmp->m_patient->getName() == name)
            return tmp->m_patient;
    }
    else {
        if ("[nullptr]" == name);
            return tmp->m_patient;
    }
    return nullptr;
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *list)
{
    SickKoalaList *ptr = this;
	SickKoalaList *rew = nullptr;

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

SickKoalaList *SickKoalaList::removeFromName(std::string name)
{
    SickKoalaList *tmp = this;

    while (tmp->isEnd() == false) {
        if (tmp->m_patient) {
            if (tmp->m_patient->getName() == name) {
                return remove(tmp);
            }
        }
        else {
            if ("[nullptr]" == name);
                return remove(tmp);
        }
        tmp = tmp->getNext();
    }
    if (tmp->m_patient) {
        if (tmp->m_patient->getName() == name) {
            tmp = nullptr;
            return this;
        }
    }
    else {
        if ("[nullptr]" == name);
            tmp = nullptr;
            return this;
    }

    return this;
}

SickKoala *SickKoalaList::getContent(void)
{
    return m_patient;
}

SickKoalaList *SickKoalaList::getNext(void)
{
    return m_next;
}

void SickKoalaList::dump(void)
{
    SickKoalaList *tmp = this;

    std::cout << "Patients:";

    while (tmp->isEnd() == false) {
        if (tmp->m_patient != nullptr)
            std::cout << " " << tmp->m_patient->getName() << ",";
        else
            std::cout << " [nullptr],";
        tmp = tmp->getNext();
    }
    if (tmp->m_patient != nullptr)
        std::cout << " " << tmp->m_patient->getName() << ".";
    else
        std::cout << " [nullptr].";
    std::cout << std::endl;
}

void SickKoalaList::erease_first(void)
{
    SickKoalaList *cur = this->m_next;
	SickKoalaList *prev = this;

    prev->m_next = cur->m_next;
    cur->m_next = NULL;
}