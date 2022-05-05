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

#include <alibabacloud/ocr/model/RecognizeUkraineIdentityCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeUkraineIdentityCardResult::RecognizeUkraineIdentityCardResult() :
	ServiceResult()
{}

RecognizeUkraineIdentityCardResult::RecognizeUkraineIdentityCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeUkraineIdentityCardResult::~RecognizeUkraineIdentityCardResult()
{}

void RecognizeUkraineIdentityCardResult::parse(const std::string &payload)
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
	auto cardBoxNode = dataNode["CardBox"];
	if(!cardBoxNode["Text"].isNull())
		data_.cardBox.text = cardBoxNode["Text"].asString();
	if(!cardBoxNode["Score"].isNull())
		data_.cardBox.score = std::stof(cardBoxNode["Score"].asString());
	auto allKeyPoints1Node = cardBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto cardBoxNodeKeyPointskeyPointsItem : allKeyPoints1Node)
	{
		Data::CardBox::KeyPointsItem2 keyPointsItem2Object;
		if(!cardBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem2Object.x = std::stof(cardBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!cardBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem2Object.y = std::stof(cardBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.cardBox.keyPoints1.push_back(keyPointsItem2Object);
	}
	auto documentNumberNode = dataNode["DocumentNumber"];
	if(!documentNumberNode["Text"].isNull())
		data_.documentNumber.text = documentNumberNode["Text"].asString();
	if(!documentNumberNode["Score"].isNull())
		data_.documentNumber.score = std::stof(documentNumberNode["Score"].asString());
	auto allKeyPoints3Node = documentNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto documentNumberNodeKeyPointskeyPointsItem : allKeyPoints3Node)
	{
		Data::DocumentNumber::KeyPointsItem4 keyPointsItem4Object;
		if(!documentNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem4Object.x = std::stof(documentNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!documentNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem4Object.y = std::stof(documentNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.documentNumber.keyPoints3.push_back(keyPointsItem4Object);
	}
	auto expiryDateNode = dataNode["ExpiryDate"];
	if(!expiryDateNode["Text"].isNull())
		data_.expiryDate.text = expiryDateNode["Text"].asString();
	if(!expiryDateNode["Score"].isNull())
		data_.expiryDate.score = std::stof(expiryDateNode["Score"].asString());
	auto allKeyPoints5Node = expiryDateNode["KeyPoints"]["keyPointsItem"];
	for (auto expiryDateNodeKeyPointskeyPointsItem : allKeyPoints5Node)
	{
		Data::ExpiryDate::KeyPointsItem6 keyPointsItem6Object;
		if(!expiryDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem6Object.x = std::stof(expiryDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!expiryDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem6Object.y = std::stof(expiryDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.expiryDate.keyPoints5.push_back(keyPointsItem6Object);
	}
	auto nameEnglishNode = dataNode["NameEnglish"];
	if(!nameEnglishNode["Text"].isNull())
		data_.nameEnglish.text = nameEnglishNode["Text"].asString();
	if(!nameEnglishNode["Score"].isNull())
		data_.nameEnglish.score = std::stof(nameEnglishNode["Score"].asString());
	auto allKeyPoints7Node = nameEnglishNode["KeyPoints"]["keyPointsItem"];
	for (auto nameEnglishNodeKeyPointskeyPointsItem : allKeyPoints7Node)
	{
		Data::NameEnglish::KeyPointsItem8 keyPointsItem8Object;
		if(!nameEnglishNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem8Object.x = std::stof(nameEnglishNodeKeyPointskeyPointsItem["X"].asString());
		if(!nameEnglishNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem8Object.y = std::stof(nameEnglishNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nameEnglish.keyPoints7.push_back(keyPointsItem8Object);
	}
	auto nameUkraineNode = dataNode["NameUkraine"];
	if(!nameUkraineNode["Text"].isNull())
		data_.nameUkraine.text = nameUkraineNode["Text"].asString();
	if(!nameUkraineNode["Score"].isNull())
		data_.nameUkraine.score = std::stof(nameUkraineNode["Score"].asString());
	auto allKeyPoints9Node = nameUkraineNode["KeyPoints"]["keyPointsItem"];
	for (auto nameUkraineNodeKeyPointskeyPointsItem : allKeyPoints9Node)
	{
		Data::NameUkraine::KeyPointsItem10 keyPointsItem10Object;
		if(!nameUkraineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem10Object.x = std::stof(nameUkraineNodeKeyPointskeyPointsItem["X"].asString());
		if(!nameUkraineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem10Object.y = std::stof(nameUkraineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nameUkraine.keyPoints9.push_back(keyPointsItem10Object);
	}
	auto nationalityNode = dataNode["Nationality"];
	if(!nationalityNode["Text"].isNull())
		data_.nationality.text = nationalityNode["Text"].asString();
	if(!nationalityNode["Score"].isNull())
		data_.nationality.score = std::stof(nationalityNode["Score"].asString());
	auto allKeyPoints11Node = nationalityNode["KeyPoints"]["keyPointsItem"];
	for (auto nationalityNodeKeyPointskeyPointsItem : allKeyPoints11Node)
	{
		Data::Nationality::KeyPointsItem12 keyPointsItem12Object;
		if(!nationalityNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem12Object.x = std::stof(nationalityNodeKeyPointskeyPointsItem["X"].asString());
		if(!nationalityNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem12Object.y = std::stof(nationalityNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nationality.keyPoints11.push_back(keyPointsItem12Object);
	}
	auto patronymicNode = dataNode["Patronymic"];
	if(!patronymicNode["Text"].isNull())
		data_.patronymic.text = patronymicNode["Text"].asString();
	if(!patronymicNode["Score"].isNull())
		data_.patronymic.score = std::stof(patronymicNode["Score"].asString());
	auto allKeyPoints13Node = patronymicNode["KeyPoints"]["keyPointsItem"];
	for (auto patronymicNodeKeyPointskeyPointsItem : allKeyPoints13Node)
	{
		Data::Patronymic::KeyPointsItem14 keyPointsItem14Object;
		if(!patronymicNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem14Object.x = std::stof(patronymicNodeKeyPointskeyPointsItem["X"].asString());
		if(!patronymicNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem14Object.y = std::stof(patronymicNodeKeyPointskeyPointsItem["Y"].asString());
		data_.patronymic.keyPoints13.push_back(keyPointsItem14Object);
	}
	auto portraitBoxNode = dataNode["PortraitBox"];
	if(!portraitBoxNode["Text"].isNull())
		data_.portraitBox.text = portraitBoxNode["Text"].asString();
	if(!portraitBoxNode["Score"].isNull())
		data_.portraitBox.score = std::stof(portraitBoxNode["Score"].asString());
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
	auto recordNumberNode = dataNode["RecordNumber"];
	if(!recordNumberNode["Text"].isNull())
		data_.recordNumber.text = recordNumberNode["Text"].asString();
	if(!recordNumberNode["Score"].isNull())
		data_.recordNumber.score = std::stof(recordNumberNode["Score"].asString());
	auto allKeyPoints17Node = recordNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto recordNumberNodeKeyPointskeyPointsItem : allKeyPoints17Node)
	{
		Data::RecordNumber::KeyPointsItem18 keyPointsItem18Object;
		if(!recordNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem18Object.x = std::stof(recordNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!recordNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem18Object.y = std::stof(recordNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.recordNumber.keyPoints17.push_back(keyPointsItem18Object);
	}
	auto sexNode = dataNode["Sex"];
	if(!sexNode["Text"].isNull())
		data_.sex.text = sexNode["Text"].asString();
	if(!sexNode["Score"].isNull())
		data_.sex.score = std::stof(sexNode["Score"].asString());
	auto allKeyPoints19Node = sexNode["KeyPoints"]["keyPointsItem"];
	for (auto sexNodeKeyPointskeyPointsItem : allKeyPoints19Node)
	{
		Data::Sex::KeyPointsItem20 keyPointsItem20Object;
		if(!sexNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem20Object.x = std::stof(sexNodeKeyPointskeyPointsItem["X"].asString());
		if(!sexNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem20Object.y = std::stof(sexNodeKeyPointskeyPointsItem["Y"].asString());
		data_.sex.keyPoints19.push_back(keyPointsItem20Object);
	}
	auto surnameEnglishNode = dataNode["SurnameEnglish"];
	if(!surnameEnglishNode["Text"].isNull())
		data_.surnameEnglish.text = surnameEnglishNode["Text"].asString();
	if(!surnameEnglishNode["Score"].isNull())
		data_.surnameEnglish.score = std::stof(surnameEnglishNode["Score"].asString());
	auto allKeyPoints21Node = surnameEnglishNode["KeyPoints"]["keyPointsItem"];
	for (auto surnameEnglishNodeKeyPointskeyPointsItem : allKeyPoints21Node)
	{
		Data::SurnameEnglish::KeyPointsItem22 keyPointsItem22Object;
		if(!surnameEnglishNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem22Object.x = std::stof(surnameEnglishNodeKeyPointskeyPointsItem["X"].asString());
		if(!surnameEnglishNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem22Object.y = std::stof(surnameEnglishNodeKeyPointskeyPointsItem["Y"].asString());
		data_.surnameEnglish.keyPoints21.push_back(keyPointsItem22Object);
	}
	auto surnameUkraineNode = dataNode["SurnameUkraine"];
	if(!surnameUkraineNode["Text"].isNull())
		data_.surnameUkraine.text = surnameUkraineNode["Text"].asString();
	if(!surnameUkraineNode["Score"].isNull())
		data_.surnameUkraine.score = std::stof(surnameUkraineNode["Score"].asString());
	auto allKeyPoints23Node = surnameUkraineNode["KeyPoints"]["keyPointsItem"];
	for (auto surnameUkraineNodeKeyPointskeyPointsItem : allKeyPoints23Node)
	{
		Data::SurnameUkraine::KeyPointsItem24 keyPointsItem24Object;
		if(!surnameUkraineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem24Object.x = std::stof(surnameUkraineNodeKeyPointskeyPointsItem["X"].asString());
		if(!surnameUkraineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem24Object.y = std::stof(surnameUkraineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.surnameUkraine.keyPoints23.push_back(keyPointsItem24Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeUkraineIdentityCardResult::getMessage()const
{
	return message_;
}

RecognizeUkraineIdentityCardResult::Data RecognizeUkraineIdentityCardResult::getData()const
{
	return data_;
}

std::string RecognizeUkraineIdentityCardResult::getCode()const
{
	return code_;
}

