/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ocr/model/RecognizeRussiaIdentityCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeRussiaIdentityCardResult::RecognizeRussiaIdentityCardResult() :
	ServiceResult()
{}

RecognizeRussiaIdentityCardResult::RecognizeRussiaIdentityCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeRussiaIdentityCardResult::~RecognizeRussiaIdentityCardResult()
{}

void RecognizeRussiaIdentityCardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto birthDateNode = dataNode["BirthDate"];
	if(!birthDateNode["Text"].isNull())
		data_.birthDate.text = birthDateNode["Text"].asString();
	if(!birthDateNode["Score"].isNull())
		data_.birthDate.score = std::stof(birthDateNode["Score"].asString());
	auto allKeyPointsNode = birthDateNode["KeyPoints"]["keyPointsItem"];
	for (auto birthDateNodeKeyPointskeyPointsItem : allKeyPointsNode)
	{
		Data::BirthDate::KeyPointsItem keyPointsItemObject;
		if(!birthDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItemObject.x = std::stof(birthDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItemObject.y = std::stof(birthDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthDate.keyPoints.push_back(keyPointsItemObject);
	}
	auto birthPlaceFirstLineNode = dataNode["BirthPlaceFirstLine"];
	if(!birthPlaceFirstLineNode["Text"].isNull())
		data_.birthPlaceFirstLine.text = birthPlaceFirstLineNode["Text"].asString();
	if(!birthPlaceFirstLineNode["Score"].isNull())
		data_.birthPlaceFirstLine.score = std::stof(birthPlaceFirstLineNode["Score"].asString());
	auto allKeyPoints1Node = birthPlaceFirstLineNode["KeyPoints"]["keyPointsItem"];
	for (auto birthPlaceFirstLineNodeKeyPointskeyPointsItem : allKeyPoints1Node)
	{
		Data::BirthPlaceFirstLine::KeyPointsItem2 keyPointsItem2Object;
		if(!birthPlaceFirstLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem2Object.x = std::stof(birthPlaceFirstLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthPlaceFirstLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem2Object.y = std::stof(birthPlaceFirstLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthPlaceFirstLine.keyPoints1.push_back(keyPointsItem2Object);
	}
	auto birthPlaceSecondLineNode = dataNode["BirthPlaceSecondLine"];
	if(!birthPlaceSecondLineNode["Text"].isNull())
		data_.birthPlaceSecondLine.text = birthPlaceSecondLineNode["Text"].asString();
	if(!birthPlaceSecondLineNode["Score"].isNull())
		data_.birthPlaceSecondLine.score = std::stof(birthPlaceSecondLineNode["Score"].asString());
	auto allKeyPoints3Node = birthPlaceSecondLineNode["KeyPoints"]["keyPointsItem"];
	for (auto birthPlaceSecondLineNodeKeyPointskeyPointsItem : allKeyPoints3Node)
	{
		Data::BirthPlaceSecondLine::KeyPointsItem4 keyPointsItem4Object;
		if(!birthPlaceSecondLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem4Object.x = std::stof(birthPlaceSecondLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthPlaceSecondLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem4Object.y = std::stof(birthPlaceSecondLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthPlaceSecondLine.keyPoints3.push_back(keyPointsItem4Object);
	}
	auto birthPlaceThirdLineNode = dataNode["BirthPlaceThirdLine"];
	if(!birthPlaceThirdLineNode["Text"].isNull())
		data_.birthPlaceThirdLine.text = birthPlaceThirdLineNode["Text"].asString();
	if(!birthPlaceThirdLineNode["Score"].isNull())
		data_.birthPlaceThirdLine.score = std::stof(birthPlaceThirdLineNode["Score"].asString());
	auto allKeyPoints5Node = birthPlaceThirdLineNode["KeyPoints"]["keyPointsItem"];
	for (auto birthPlaceThirdLineNodeKeyPointskeyPointsItem : allKeyPoints5Node)
	{
		Data::BirthPlaceThirdLine::KeyPointsItem6 keyPointsItem6Object;
		if(!birthPlaceThirdLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem6Object.x = std::stof(birthPlaceThirdLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthPlaceThirdLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem6Object.y = std::stof(birthPlaceThirdLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthPlaceThirdLine.keyPoints5.push_back(keyPointsItem6Object);
	}
	auto cardBoxNode = dataNode["CardBox"];
	if(!cardBoxNode["Text"].isNull())
		data_.cardBox.text = cardBoxNode["Text"].asString();
	if(!cardBoxNode["Score"].isNull())
		data_.cardBox.score = cardBoxNode["Score"].asString();
	auto allKeyPoints7Node = cardBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto cardBoxNodeKeyPointskeyPointsItem : allKeyPoints7Node)
	{
		Data::CardBox::KeyPointsItem8 keyPointsItem8Object;
		if(!cardBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem8Object.x = std::stof(cardBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!cardBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem8Object.y = std::stof(cardBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.cardBox.keyPoints7.push_back(keyPointsItem8Object);
	}
	auto givenNameNode = dataNode["GivenName"];
	if(!givenNameNode["Text"].isNull())
		data_.givenName.text = givenNameNode["Text"].asString();
	if(!givenNameNode["Score"].isNull())
		data_.givenName.score = givenNameNode["Score"].asString();
	auto allKeyPoints9Node = givenNameNode["KeyPoints"]["keyPointsItem"];
	for (auto givenNameNodeKeyPointskeyPointsItem : allKeyPoints9Node)
	{
		Data::GivenName::KeyPointsItem10 keyPointsItem10Object;
		if(!givenNameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem10Object.x = std::stof(givenNameNodeKeyPointskeyPointsItem["X"].asString());
		if(!givenNameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem10Object.y = std::stof(givenNameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.givenName.keyPoints9.push_back(keyPointsItem10Object);
	}
	auto idNumberNode = dataNode["IdNumber"];
	if(!idNumberNode["Text"].isNull())
		data_.idNumber.text = idNumberNode["Text"].asString();
	if(!idNumberNode["Score"].isNull())
		data_.idNumber.score = idNumberNode["Score"].asString();
	auto allKeyPoints11Node = idNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto idNumberNodeKeyPointskeyPointsItem : allKeyPoints11Node)
	{
		Data::IdNumber::KeyPointsItem12 keyPointsItem12Object;
		if(!idNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem12Object.x = std::stof(idNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!idNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem12Object.y = std::stof(idNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.idNumber.keyPoints11.push_back(keyPointsItem12Object);
	}
	auto paternalNameNode = dataNode["PaternalName"];
	if(!paternalNameNode["Text"].isNull())
		data_.paternalName.text = paternalNameNode["Text"].asString();
	if(!paternalNameNode["Score"].isNull())
		data_.paternalName.score = paternalNameNode["Score"].asString();
	auto allKeyPoints13Node = paternalNameNode["KeyPoints"]["keyPointsItem"];
	for (auto paternalNameNodeKeyPointskeyPointsItem : allKeyPoints13Node)
	{
		Data::PaternalName::KeyPointsItem14 keyPointsItem14Object;
		if(!paternalNameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem14Object.x = std::stof(paternalNameNodeKeyPointskeyPointsItem["X"].asString());
		if(!paternalNameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem14Object.y = std::stof(paternalNameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.paternalName.keyPoints13.push_back(keyPointsItem14Object);
	}
	auto portraitBoxNode = dataNode["PortraitBox"];
	if(!portraitBoxNode["Text"].isNull())
		data_.portraitBox.text = portraitBoxNode["Text"].asString();
	if(!portraitBoxNode["Score"].isNull())
		data_.portraitBox.score = portraitBoxNode["Score"].asString();
	auto allKeyPoints15Node = portraitBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto portraitBoxNodeKeyPointskeyPointsItem : allKeyPoints15Node)
	{
		Data::PortraitBox::KeyPointsItem16 keyPointsItem16Object;
		if(!portraitBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem16Object.x = std::stof(portraitBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!portraitBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem16Object.y = std::stof(portraitBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.portraitBox.keyPoints15.push_back(keyPointsItem16Object);
	}
	auto sexNode = dataNode["Sex"];
	if(!sexNode["Text"].isNull())
		data_.sex.text = sexNode["Text"].asString();
	if(!sexNode["Score"].isNull())
		data_.sex.score = sexNode["Score"].asString();
	auto allKeyPoints17Node = sexNode["KeyPoints"]["keyPointsItem"];
	for (auto sexNodeKeyPointskeyPointsItem : allKeyPoints17Node)
	{
		Data::Sex::KeyPointsItem18 keyPointsItem18Object;
		if(!sexNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem18Object.x = std::stof(sexNodeKeyPointskeyPointsItem["X"].asString());
		if(!sexNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem18Object.y = std::stof(sexNodeKeyPointskeyPointsItem["Y"].asString());
		data_.sex.keyPoints17.push_back(keyPointsItem18Object);
	}
	auto surnameFirstLineNode = dataNode["SurnameFirstLine"];
	if(!surnameFirstLineNode["Text"].isNull())
		data_.surnameFirstLine.text = surnameFirstLineNode["Text"].asString();
	if(!surnameFirstLineNode["Score"].isNull())
		data_.surnameFirstLine.score = surnameFirstLineNode["Score"].asString();
	auto allKeyPoints19Node = surnameFirstLineNode["KeyPoints"]["keyPointsItem"];
	for (auto surnameFirstLineNodeKeyPointskeyPointsItem : allKeyPoints19Node)
	{
		Data::SurnameFirstLine::KeyPointsItem20 keyPointsItem20Object;
		if(!surnameFirstLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem20Object.x = std::stof(surnameFirstLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!surnameFirstLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem20Object.y = std::stof(surnameFirstLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.surnameFirstLine.keyPoints19.push_back(keyPointsItem20Object);
	}
	auto surnameSecondLineNode = dataNode["SurnameSecondLine"];
	if(!surnameSecondLineNode["Text"].isNull())
		data_.surnameSecondLine.text = surnameSecondLineNode["Text"].asString();
	if(!surnameSecondLineNode["Score"].isNull())
		data_.surnameSecondLine.score = surnameSecondLineNode["Score"].asString();
	auto allKeyPoints21Node = surnameSecondLineNode["KeyPoints"]["keyPointsItem"];
	for (auto surnameSecondLineNodeKeyPointskeyPointsItem : allKeyPoints21Node)
	{
		Data::SurnameSecondLine::KeyPointsItem22 keyPointsItem22Object;
		if(!surnameSecondLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem22Object.x = std::stof(surnameSecondLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!surnameSecondLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem22Object.y = std::stof(surnameSecondLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.surnameSecondLine.keyPoints21.push_back(keyPointsItem22Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeRussiaIdentityCardResult::getMessage()const
{
	return message_;
}

RecognizeRussiaIdentityCardResult::Data RecognizeRussiaIdentityCardResult::getData()const
{
	return data_;
}

std::string RecognizeRussiaIdentityCardResult::getCode()const
{
	return code_;
}

