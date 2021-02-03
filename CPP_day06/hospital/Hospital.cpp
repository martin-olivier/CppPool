/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Hospital.hpp"

Hospital::Hospital()
{
    m_sick_list = new SickKoalaList(nullptr);
    m_nurse_list = new KoalaNurseList(nullptr);
    m_doctor_list = new KoalaDoctorList(nullptr);
}

Hospital::~Hospital()
{
    delete m_sick_list;
    delete m_nurse_list;
    delete m_doctor_list;
}

void Hospital::addDoctor(KoalaDoctorList *list)
{
    KoalaDoctorList *tmp = this->m_doctor_list;

    while (tmp->isEnd() == false) {
        if (list == tmp)
            return;
        tmp = tmp->getNext();
    }

    if (list == tmp)
        return;

    m_doctor_list->append(list);
    std::cout << "[HOSPITAL] Doctor " << list->getContent()->getName() << " just arrived!" << std::endl;
    list->getContent()->timeCheck();
}

void Hospital::addSick(SickKoalaList *list)
{
    SickKoalaList *tmp = this->m_sick_list;

    while (tmp->isEnd() == false) {
        if (list == tmp)
            return;
        tmp = tmp->getNext();
    }
    if (list == tmp)
        return;
    
    m_sick_list->append(list);
    std::cout << "[HOSPITAL] Patient " << list->getContent()->getName() << " just arrived!" << std::endl;
}

void Hospital::addNurse(KoalaNurseList *list)
{
    KoalaNurseList *tmp = this->m_nurse_list;

    while (tmp->isEnd() == false) {
        if (list == tmp)
            return;
        tmp = tmp->getNext();
    }
    if (list == tmp)
        return;

    m_nurse_list->append(list);
    std::cout << "[HOSPITAL] Nurse " << list->getContent()->getID() << " just arrived!" << std::endl;
    list->getContent()->timeCheck();
}

int Hospital::get_doc_len(void)
{
    int doc_tab_size = 0;
    KoalaDoctorList *tmp = m_doctor_list->getNext();

    for (; tmp->isEnd() == false; doc_tab_size++)
        tmp = tmp->getNext();
    return doc_tab_size + 1;
}

int Hospital::get_nur_len(void)
{
    int doc_tab_size = 0;
    KoalaNurseList *tmp = m_nurse_list->getNext();

    for (; tmp->isEnd() == false; doc_tab_size++)
        tmp = tmp->getNext();
    return doc_tab_size + 1;
}

int Hospital::get_sic_len(void)
{
    int doc_tab_size = 0;
    SickKoalaList *tmp = m_sick_list->getNext();

    for (; tmp->isEnd() == false; doc_tab_size++)
        tmp = tmp->getNext();
    return doc_tab_size + 1;
}

void Hospital::run(void)
{
    int doc_tab_size = get_doc_len();
    int nur_tab_size = get_nur_len();
    int sic_tab_size = get_sic_len();
    KoalaDoctorList *ptr_doc = m_doctor_list->getNext();
    KoalaNurseList *ptr_nur = m_nurse_list->getNext();
    SickKoalaList *ptr_sic = m_sick_list->getNext();
    int doc_pos = 0;
    int nur_pos = 0;
    int sic_pos = 0;

    std::cout << "[HOSPITAL] Work starting with:" << std::endl;
    m_doctor_list->getNext()->dump();
    m_nurse_list->getNext()->dump();
    m_sick_list->getNext()->dump();
    std::cout << std::endl;

    while (sic_pos != get_sic_len()) {
        if (doc_pos == doc_tab_size) {
            doc_pos = 0;
            ptr_doc = m_doctor_list->getNext();
        }
        if (nur_pos == nur_tab_size) {
            nur_pos = 0;
            ptr_nur = m_nurse_list->getNext();
        }
        ptr_doc->getContent()->diagnose(ptr_sic->getContent());
        ptr_nur->getContent()->giveDrug(ptr_nur->getContent()->readReport(ptr_sic->getContent()->getName() += ".report"), ptr_sic->getContent());

        ptr_doc = ptr_doc->getNext();
        ptr_nur = ptr_nur->getNext();
        ptr_sic = ptr_sic->getNext();
        doc_pos++;
        nur_pos++;
        sic_pos++;
    }
    ptr_doc = m_doctor_list->getNext();
    ptr_nur = m_nurse_list->getNext();
    while (ptr_nur->isEnd() == false) {
        ptr_nur->getContent()->timeCheck();
        ptr_nur = ptr_nur->getNext();
    }
    ptr_nur->getContent()->timeCheck();
    while (ptr_doc->isEnd() == false) {
        ptr_doc->getContent()->timeCheck();
        ptr_doc = ptr_doc->getNext();
    }
    ptr_doc->getContent()->timeCheck();

    for (int i = 0; i < doc_tab_size; i++)
        m_doctor_list->erease_first();
    for (int i = 0; i < nur_tab_size; i++)
        m_nurse_list->erease_first();
    for (int i = 0; i < sic_tab_size; i++)
        m_sick_list->erease_first();
}