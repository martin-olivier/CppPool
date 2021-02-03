/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *doctor)
{
    m_doctor = doctor;
    m_next = nullptr;
}

KoalaDoctorList::~KoalaDoctorList()
{
}
    
bool KoalaDoctorList::isEnd(void)
{
    if (this->m_next == nullptr)
        return true;
    return false;
}

void KoalaDoctorList::append(KoalaDoctorList *list)
{
    KoalaDoctorList *tmp = this;

    if (list == nullptr)
        return;
    if (list->m_doctor == nullptr) {
        while (tmp->isEnd() == false)
            tmp = tmp->getNext();
        tmp->m_next = list;
        return;
    }
    if (list->m_doctor) {
        if (this->getFromName(list->m_doctor->getName()) != nullptr)
            return;
    }

    while (tmp->isEnd() == false) {
        tmp = tmp->getNext();
    }
    tmp->m_next = list;
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string name)
{
    KoalaDoctorList *tmp = this;

    while (tmp->m_next != nullptr) {
        if (tmp->m_doctor != nullptr) {
            if (tmp->m_doctor->getName() == name)
                return tmp->m_doctor;
        }
        else {
            if ("[nullptr]" == name);
                return tmp->m_doctor;
        }
        tmp = tmp->getNext();
    }
    if (tmp->m_doctor != nullptr) {
        if (tmp->m_doctor->getName() == name)
            return tmp->m_doctor;
    }
    else {
        if ("[nullptr]" == name);
            return tmp->m_doctor;
    }
    return nullptr;
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *list)
{
    KoalaDoctorList *ptr = this;
	KoalaDoctorList *rew = nullptr;

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

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string name)
{
    KoalaDoctorList *tmp = this;

    while (tmp->isEnd() == false) {
        if (tmp->m_doctor) {
            if (tmp->m_doctor->getName() == name) {
                return remove(tmp);
            }
        }
        else {
            if ("[nullptr]" == name);
                return remove(tmp);
        }
        tmp = tmp->getNext();
    }
    if (tmp->m_doctor) {
        if (tmp->m_doctor->getName() == name) {
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

KoalaDoctor *KoalaDoctorList::getContent(void)
{
    return m_doctor;
}

KoalaDoctorList *KoalaDoctorList::getNext(void)
{
    return m_next;
}

void KoalaDoctorList::dump(void)
{
    KoalaDoctorList *tmp = this;

    std::cout << "Doctors:";

    while (tmp->isEnd() == false) {
        if (tmp->m_doctor != nullptr)
            std::cout << " " << tmp->m_doctor->getName() << ",";
        else
            std::cout << " [nullptr],";
        tmp = tmp->getNext();
    }
    if (tmp->m_doctor != nullptr)
        std::cout << " " << tmp->m_doctor->getName() << ".";
    else
        std::cout << " [nullptr].";
    std::cout << std::endl;
}

void KoalaDoctorList::erease_first(void)
{
    KoalaDoctorList *cur = this->m_next;
	KoalaDoctorList *prev = this;

    prev->m_next = cur->m_next;
    cur->m_next = NULL;
}