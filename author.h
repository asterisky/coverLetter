namespace writer{
class Author{
    public:
    void write(writer::Author* a);

    public:
    std::string letter = "";
    bool isLeadership = true;
    
    private:
    std::string boilerplate1 = "Dear Hiring Manager,\n\nI am responding to the "; 
    std::string boilerplate2 = " position which is listed on ";
    std::string leadershipBoilerplate1 = ".   As an empathetic and emotionally intelligent manager of people and projects, I seek to answer the question, “how can we do this better for our team and improve the audience experience?” in every system I encounter.  These leadership and visionary "; 
    std::string codingBoilerplate1 = ". My unique combination of interpersonal and technical ";
    std::string boilerplate3 = "skills will help me to excel as a ";
    std::string boilerplate4 = " at ";
    std::string boilerplate5 = ".  I respectfully submit my resume for consideration.\n\n";
    std::string leadershipBoilerplate2 = "As a Research Project Manager at the University of Pennsylvania, I exercised my strong writing and project management skills to consolidate 7 related technical documents into a single comprehensive collection.  This resulted in more targeted training for staff, who subsequently needed to be trained on only one protocol, fewer staff mistakes and a better administration experience.  The resulting documentation was also clearer and easier to understand for the patient audience, enabling them to make an informed decision about taking part in research, and reducing their anxiety around expected side effects of the research procedures.  By applying my vision to the product, I created a better experience for all stakeholders.\n\nAs Head Teaching Assistant of Introduction to Computer Systems I found an abundance of projects which benefitted from my ability to synthesize the practical and emotional needs of both staff and students.  I persuaded key decision makers in the instruction team to experiment with new processes and systems, resulting in clearer communication and increased collaboration.  The results: average student grades increased by up to 10% under my leadership.\n\n";
    std::string codingBoilerplate2 = "As a Research Project Manager at the University of Pennsylvania, I exercised my strong writing and problem-solving skills to consolidate 7 related technical documents into a single comprehensive protocol.  This project required me to coordinate and synthesize the needs of diverse audiences, including the ethics board, database administrator, senior management, and patients within a strict framework.  My background in research honed my ability to create new solutions to complex problems while maintaining readability and accessibility and continues to inform my programming style today.\n\nAs a Head Teaching Assistant in my Master’s of Computer and Information Technology program at the University of Pennsylvania, I deepened my technical communication, programming and debugging skills. I persuaded key decision makers in the instruction team to experiment with new processes and systems, resulting in clearer communication and increased collaboration.  The results: average student grades increased by up to 10% under my leadership and tutelage.\n\n";
    std::string boilerplate6 = "I am excited about the opportunity to bring about a magical transformation at "; 
    std::string boilerplate7 = ".  Thank you for your consideration.  I hope to hear from you soon regarding this position.  I can be reached at kpizziketti@gmail.com or 717-818-2611 (I prefer text message by phone).\n\nI developed a program to assist in writing this cover letter.  To learn more, visit github.com/asterisky/coverLetter.\n\n\nSincerely,\n\nKatie Pizziketti";

    public:
    Author(std::string company, std::string position, std::string posting, bool isLeadership){
        if (isLeadership) {
        letter = boilerplate1 + position + boilerplate2 + posting + leadershipBoilerplate1 + boilerplate3 + position + boilerplate4 + company + boilerplate5 + leadershipBoilerplate2 + boilerplate6 + company + boilerplate7;
        }
        if (!isLeadership){
        letter = boilerplate1 + position + boilerplate2 + posting + codingBoilerplate1 + boilerplate3 + position + boilerplate4 + company + boilerplate5 + codingBoilerplate2 + boilerplate6 + company + boilerplate7;
        }
    }
};
}