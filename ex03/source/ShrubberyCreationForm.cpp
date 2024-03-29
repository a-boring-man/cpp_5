/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:52:22 by jrinna            #+#    #+#             */
/*   Updated: 2023/07/19 11:45:16 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("PShrubberyCreationForm", 0, 145, 137), _target("NOT_SEPCIFIED") {

	cout << "DEFAULT ShrubberyCreationForm constructor called" << endl;
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm("PShrubberyCreationForm", 0, 145, 137), _target(src.getTarget()){

	cout << "COPY ShrubberyCreationForm constructor called" << endl;
	setSigned(src.getSigned());
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const string target ) : AForm("PShrubberyCreationForm", 0, 145, 137), _target(target) {

	cout << "TARGETED ShrubberyCreationForm constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() {

	cout << "PresidentialPardonForm destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		cout << "ASSIGNMENT OPERATOR CALLED" << endl;
		this->setSigned(rhs.getSigned());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & F )
{
	o << "Name : " << F.getName() << endl << "Signed status : " << F.getSigned() << endl << "Grade to signed : " << F.getGTS() << endl << "Grade to execute : " << F.getGTE() << endl << "Target : " << F.getTarget() << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {

	this->CheckExecuteCondition(executor);
	std::fstream	file ((this->getTarget() + "_shrubbery").c_str(), std::ios::out);
	file << "                                                                                                                                                                                                         " << endl <<"\
                                                                                                                                                                                                        " << endl <<"\
                                                                                                                                                                                                        " << endl <<"\
                                                                                                                                                                                                        " << endl <<"\
                                                                                                                                                                                                        " << endl <<"\
                                                                                                                                                                                                        " << endl <<"\
                                                                                                                                                                                                        " << endl <<"\
                                                                                                                                                                                                        " << endl <<"\
                                                           ,//*.*#(   ,(%.                                                     /%/.  *#* ,//*.  ,,.                                                     " << endl <<"\
                                                      ,(,.#%%%%%##%%%%*.,  . ..*,                                      ,*.. .  ...(%%%%##%%%%%/ .,                                                      " << endl <<"\
                                                .*/(,.,* ,%%%%%%%%%%%%#. .     ,* .,(/.                           *(,. ,,     .  *%%%%%%%%%%%%(.  ../(/,                                                " << endl <<"\
                                           .. ./*..(, .. .(%%%%%%%%%%/. .,..  .*  *#%#,/(.                     .,,(%#*  *.  .  ...,(%%%%%%%%%%*  .*,/,.,(,                                              " << endl <<"\
                                           **      .  ... .(%%%%%%/.  ...*,    .(#,       .                    .*.    ,#(.     ,/,. .,#%%%%%%*  ...          ..                                         " << endl <<"\
                                        .      .##,    .    ,#%%/. .#%%%%.        ,*    ...                  ...   ,, ,,.      .%%%%%, .#%%/                 **...                                      " << endl <<"\
                                       /(.  .*/#*  .**.   .,/,.*.   ,/(#. ..     ./#..##.  ,(/            /#/      .. ((,    .   ((/,   ,, ./,.     ,(* .(#*,   ,/                                      " << endl <<"\
                                    ./(*     *#%*     ..    ./    .((,   ..*%%%,.,.   ,(#     . *../(* ,. .    .%/.   .,.(%&(,..    .//.   *.    ..     .(%#.    ,(/.                                   " << endl <<"\
                                  #%%%%* .(%*           .   *,         ,%%%%%%%%%%#.   .,       .,    .,       .,    /%%%%%%%%%%(    . .(%,.*                    *%%%%#                                 " << endl <<"\
                                     ..                         ,(*#*   ,#%%%%%%%%*  ./#,    .   .(#/#*     .(%*      #%%%#%%%%/ .(#*(///.                   ./*  ..                                    " << endl <<"\
                                 ..    .  *.                   //**(    .   ,//  ..          .*   /%%%,  .#%,     /(. ,. *(*.   ..   ,#**(*                    *.  .  ..                                " << endl <<"\
                                ..   ..    *.                #%/      ..           /(*    .*#(     ./     .##,      *#(.         ...        (%/.              *,    .. ..                               " << endl <<"\
                             .#%,      ....   .##.  .#%/         /%#(,                  /%%%%(    ,,  .(%*.#%%%&,                       ,#(       ,#%*  *%/     ....    *#/                             " << endl <<"\
                             .*,. *#%%#/              .  .#%%%#%%%%%%%(.         .*/       ..     ..        .         **.           /%%%#, .**,    .        /#* ,(%%%(. ,*,.                            " << endl <<"\
                           *%%%%%%%%%%%%/ *(, .*(%#,     ,%%%%%%%%%%%#,          .//  ./,   ./#*         /%(    ,#/   //.         ./%%%%%%%%%%%%,     /%%/*. . .#%%%%%%%%%%%#.                          " << endl <<"\
                           *&#%%%%%%%%%#.    ,%%%%*       *%%%%%%%%%#. ./(,         .*(#%%%##/,          .*(##%%##(*.        ..    .#%%%%%%%%%%%,..   .#%%%/    ,%%%%%%%%%%%#.                          " << endl <<"\
                            *%%%%%%%%%*             ./,    ./%%%%%%(.*.  .  ,#(. *#%%%%%%%%%%%%%#*    .(%%%%%%%%%%%%%%(..//..*,    *,/%%%%%%%%#, .*.             .(%%%%%%%%(.                           " << endl <<"\
                              *#%%%%%,           .(#*         .*#%%.*/  ./#/.  ,#%%%%%%%%%%%%%%%%%%*.(%%%%%%%%%%%%%%%%%%(..  /#(.. ,( *%%%%%#,      .(#*       *(* /%%%%%(,                             " << endl <<"\
                                 ,(##. *%/...*#%(...    , .,      .,%,*%%%%/..*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#. .*%%#%/ #(.%#/,  ., .,    . ,#%#,....  *%#/.                                " << endl <<"\
                                    ,,.  *%%%%%%%#%%#.     ,  .*,  %%    .,/..%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%(  **.    /@..*/.  ..     ,#%%%%%%%%%#,                                       " << endl <<"\
                                ,/* .,    *#%%%%%%%%, .,.      .. ,@#    (/  /&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%.  ,(.*#**@( ..       .,, *%%%%%%%%#,   //,//.                               " << endl <<"\
                             *%%%%#.  ,(*(,  .//,.*/. .*.         (@#*/,&,*#,*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#.    %/  *@&.          ,, ,/,.*(*..,. ,/  ,%%%%#,                            " << endl <<"\
                               .,*    *#       ..                 %@# *&.,((..#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%/ *#(. %( /@@,                 ..  .*. /%   .*.                               " << endl <<"\
                              *%/     *@. ... **   ,*.           .&@%,%/  .,  .#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%/  .,.  ,&*/@@/.(#,         *,.  *, ... %%  ...                                " << endl <<"\
                                 ...  ,@(    ,(     ..           .&@&%&./%*.,*. /%%%####%%%%%%%%%%%%%%%%%%%####%%%%%%%%#, ,*. .(#,#%%@@/        .,. .*    .#. ..,@(                                     " << endl <<"\
                                   ./(*&&/##.%*....     ,.       .&@@@%. *(. *(   /###%%%%%%%%%%%%%%%%%%%%%%%##%%%%%%#,  ,/ .*/.  (@@@@*        ,/.  ..    /#.*,#@*   *%*                               " << endl <<"\
                                   .*(.#@%. *@..,  #%%%%%%(. *#/. #@@@%.  .,**    .../%%%%%%%%%%%##%%%%%%%%%%%###%(, ..   **,,,/* (@@@@,  *(, ,#%%%%%%/    .@, /@&*(*.                                  " << endl <<"\
                                  .#%%*,@@#./@,,((./%%%#%#.       /@@@&,       ...(#,   /#%%##%########%%%%%%%%#,  . .*.       . .%@@@%        ,%%%%%%, ,#/,@**@@(*%%(.                                 " << endl <<"\
                                     ...(@@#,@*     .*#%#.,  .,/,  &@@@/ .     .     ./(, ./#############%%%#*    *(,            ,@@@@*  .(,.  ,,#%#,      /@(@@%,*,                                    " << endl <<"\
                                     .,..#@@@&%. .       ,, .(%%*  *@@@@*                    ,#%#########%(.       .  ./#*       &@@@#   ,%%#. *,      .  .&@@@@, .                                     " << endl <<"\
                                         .%@@@@(     ,*. (*      ,*,(@@@@/   /%%%%%%%,., (###, ,#%#%###%/   *%##,.*./%%%%%%%,  .@@@@&.*%(.     *( ,,.    .#@@@@*                                        " << endl <<"\
                                          .%@@@@( (%%%%/ (* ,/.   . .#@@@@(  /%#%%%%,./.  *#(,...*#%#%(..(&*,#(.  ,*.(%%%%%%, *&@@@&,      ,##,/(,%%%%%..#@@@&*                                         " << endl <<"\
                                            (@@@@&...**  /#  .//,//  .%@@@@#. ./#%%. //           .(%/             (* /%%#,  /@@@@&*  *(.*/,  .%/ ,*,. #@@@@%.                                          " << endl <<"\
                                             .%@@@@&* .//*%* ,((((. (#*%@@@@&, .  . .%,   ........  ... ....       /# ..    #@@@@@*    ((/(*  /%*%(.,%@@@@@*                                            " << endl <<"\
                                               *&@@@@@(.. *&,           (@@@@@#.,*(,*%../%/......./%##*.....   *%(.*&./(, ,@@@@@&..(#.       *&*  *&@@@@@(                                              " << endl <<"\
                                                 ,@@@@@@&/ /@/ . ..      *@@@@@&*,/./&,.......*%(,.,(..,((........ *@.,/,%@@@@@(       ...  (&*,%@@@@@@(                                                " << endl <<"\
                                                   ,#@@@@@@&(@&,      ,#%#*%@@@@@#. ,&/          ,/*.//,.          (&  /@@@@@&(#%#,       ,&@&@@@@@@&*                                                  " << endl <<"\
                                                     ./@@@@@@@@@#. *%%%%%%/ /@@@@@@#.#%,.  ...../(. ,.*#,... .....*&/,&@@@@@#./%%%%%%*  ,%@@@@@@@@#.                                                    " << endl <<"\
                                                        .(@@@@@@@@%*/#%%%%/  .%@@@@@@(&%,.  .....,/((#*..(#* ... ,%&&@@@@@@*  /%%%%%/,(&@@@@@@@%,                                                       " << endl <<"\
                                                           .(@@@@@@@@&(,,**.   *&@@@@@@@%   .**,#/..,....,(. ...,@@@@@@@@(   .**,,/&@@@@@@@@%,                                                          " << endl <<"\
                                                               /&@@@@@@@@&(.,#*.,(@@@@@@@&,/%%%,., .,.  .(%%(,.*@@@@@@@%,,#/ .*%@@@@@@@@@#,                                                             " << endl <<"\
                                                                  *&@@@@@@@@@&/.  ,%@@@@@@&*  .          .   .#@@@@@@@/   ,%@@@@@@@@@&(.                                                                " << endl <<"\
                                                                     ,%@@@@@@@@@@%* ,@@@@@@@%,  ,*.        .(@@@@@@@( ,#@@@@@@@@@@&/                                                                    " << endl <<"\
                                                                        .#@@@@@@@@@@@##@@@@@@@&, . . .    (@@@@@@@&(@@@@@@@@@@@%,                                                                       " << endl <<"\
                                                                           .(@@@@@@@@@@@@@@@@@@@%,,#%%/ (@@@@@@@@@@@@@@@@@@@%,                                                                          " << endl <<"\
                                                                               #@@@@@@@@@@@@@@@@@@#.*./@@@@@@@@@@@@@@@@@@&,                                                                             " << endl <<"\
                                                                                 *&@@@@@@@@@@@@@@@@@#@@@@@@@@@@@@@@@@@@(                                                                                " << endl <<"\
                                                                                    %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,                                                                                  " << endl <<"\
                                                                                     .#@@@@@@@@@@@@@@@@@@@@@@@@@@@&,                                                                                    " << endl <<"\
                                                                                       .%@@@@@@@@@@@@@@@@@@@@@@@@*                                                                                      " << endl <<"\
                                                                                         *@@@@@@@@@@@@@@@@@@@@@#                                                                                        " << endl <<"\
                                                                                          .%@@@@@@@@@@@@@@@@@@*                                                                                         " << endl <<"\
                                                                                           ,%@@@@@@@@@@@@@@@&,                                                                                          " << endl <<"\
                                                                                           .%@@@@@@@@@@@@@@@%.                                                                                          " << endl <<"\
                                                                                           .#@@@@@@@@@@@@@@@%.                                                                                          " << endl <<"\
                                                                                            #@@@@@@@@@@@@@@@%.                                                                                          " << endl <<"\
                                                                                            #@@@@@@@@@@@@@@@%.                                                                                          " << endl <<"\
                                                                                           .#@@@@@@@@@@@@@@@%.                                                                                          " << endl <<"\
                                                                                           .%@@@@@@@@@@@@@@@%.                                                                                          " << endl <<"\
                                                                                           ,&@@@@@@@@@@@@@@@%.                                                                                          " << endl <<"\
                                                                                           /@@@@@@@@@@@@@@@@&,                                                                                          " << endl <<"\
                                                                                          .%@@@@@@@@@@@@@@@@@/                                                                                          " << endl <<"\
                                                                                          /@@@@@@@@@@@@@@@@@@&,                                                                                         " << endl <<"\
                                                                                         .@@@@@@@@@@@@@@@@@@@@%                                                                                         " << endl <<"\
                                                                                        .@@@@@@@@@@@@@@@@@@@@@@#                                                                                        " << endl <<"\
                                                                                       .%@@@@@@@@@@@@@@@@@@@@@@@#                                                                                       " << endl <<"\
                                                                                      .%@@@@@@@@@@@@@@@@@@@@@@@@@%                                                                                      " << endl <<"\
                                                                                     .%@@@@@@@@@@@@@@@@@@@@@@@@@@@%.                                                                                    " << endl <<"\
                                                                          ..........*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&*.............                                                                      " << endl <<"\
                                                        .......,,,,,,,,********////%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%////////********,,,,,,,.......                                                    " << endl <<"\
                                                  .......,,,,,,******///////(((((#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&##((((((((//////******,,,,,,.......                                              " << endl <<"\
                                                     ........,,,,,*******////////((((((((((((((#############((((((((((((((/////////*******,,,,,,........                                                ";
	file.close();
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string	ShrubberyCreationForm::getTarget( void ) const {

	return (this->_target);
}

void			ShrubberyCreationForm::setTarget( const string target ) {

	string* tmp;
	tmp = (string*)&this->_target;
	*tmp = target;
	return;
}

/* ************************************************************************** */