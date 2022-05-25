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

#include <alibabacloud/ocr/model/RecognizeMalaysiaIdentityCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeMalaysiaIdentityCardResult::RecognizeMalaysiaIdentityCardResult() :
	ServiceResult()
{}

RecognizeMalaysiaIdentityCardResult::RecognizeMalaysiaIdentityCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeMalaysiaIdentityCardResult::~RecognizeMalaysiaIdentityCardResult()
{}

void RecognizeMalaysiaIdentityCardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto addressFirstLineNode = dataNode["AddressFirstLine"];
	if(!addressFirstLineNode["Text"].isNull())
		data_.addressFirstLine.text = addressFirstLineNode["Text"].asString();
	if(!addressFirstLineNode["Score"].isNull())
		data_.addressFirstLine.score = std::stof(addressFirstLineNode["Score"].asString());
	auto allKeyPointsNode = addressFirstLineNode["KeyPoints"]["keyPointsItem"];
	for (auto addressFirstLineNodeKeyPointskeyPointsItem : allKeyPointsNode)
	{
		Data::AddressFirstLine::KeyPointsItem keyPointsItemObject;
		if(!addressFirstLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItemObject.x = std::stof(addressFirstLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!addressFirstLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItemObject.y = std::stof(addressFirstLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.addressFirstLine.keyPoints.push_back(keyPointsItemObject);
	}
	auto addressSecondLineNode = dataNode["AddressSecondLine"];
	if(!addressSecondLineNode["Text"].isNull())
		data_.addressSecondLine.text = addressSecondLineNode["Text"].asString();
	if(!addressSecondLineNode["Score"].isNull())
		data_.addressSecondLine.score = std::stof(addressSecondLineNode["Score"].asString());
	auto allKeyPoints1Node = addressSecondLineNode["KeyPoints"]["keyPointsItem"];
	for (auto addressSecondLineNodeKeyPointskeyPointsItem : allKeyPoints1Node)
	{
		Data::AddressSecondLine::KeyPointsItem2 keyPointsItem2Object;
		if(!addressSecondLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem2Object.x = std::stof(addressSecondLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!addressSecondLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem2Object.y = std::stof(addressSecondLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.addressSecondLine.keyPoints1.push_back(keyPointsItem2Object);
	}
	auto addressThirdLineNode = dataNode["AddressThirdLine"];
	if(!addressThirdLineNode["Text"].isNull())
		data_.addressThirdLine.text = addressThirdLineNode["Text"].asString();
	if(!addressThirdLineNode["Score"].isNull())
		data_.addressThirdLine.score = std::stof(addressThirdLineNode["Score"].asString());
	auto allKeyPoints3Node = addressThirdLineNode["KeyPoints"]["keyPointsItem"];
	for (auto addressThirdLineNodeKeyPointskeyPointsItem : allKeyPoints3Node)
	{
		Data::AddressThirdLine::KeyPointsItem4 keyPointsItem4Object;
		if(!addressThirdLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem4Object.x = std::stof(addressThirdLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!addressThirdLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem4Object.y = std::stof(addressThirdLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.addressThirdLine.keyPoints3.push_back(keyPointsItem4Object);
	}
	auto addressFourthLineNode = dataNode["AddressFourthLine"];
	if(!addressFourthLineNode["Text"].isNull())
		data_.addressFourthLine.text = addressFourthLineNode["Text"].asString();
	if(!addressFourthLineNode["Score"].isNull())
		data_.addressFourthLine.score = std::stof(addressFourthLineNode["Score"].asString());
	auto allKeyPoints5Node = addressFourthLineNode["KeyPoints"]["keyPointsItem"];
	for (auto addressFourthLineNodeKeyPointskeyPointsItem : allKeyPoints5Node)
	{
		Data::AddressFourthLine::KeyPointsItem6 keyPointsItem6Object;
		if(!addressFourthLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem6Object.x = std::stof(addressFourthLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!addressFourthLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem6Object.y = std::stof(addressFourthLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.addressFourthLine.keyPoints5.push_back(keyPointsItem6Object);
	}
	auto addressFifthLineNode = dataNode["AddressFifthLine"];
	if(!addressFifthLineNode["Text"].isNull())
		data_.addressFifthLine.text = addressFifthLineNode["Text"].asString();
	if(!addressFifthLineNode["Score"].isNull())
		data_.addressFifthLine.score = std::stof(addressFifthLineNode["Score"].asString());
	auto allKeyPoints7Node = addressFifthLineNode["KeyPoints"]["keyPointsItem"];
	for (auto addressFifthLineNodeKeyPointskeyPointsItem : allKeyPoints7Node)
	{
		Data::AddressFifthLine::KeyPointsItem8 keyPointsItem8Object;
		if(!addressFifthLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem8Object.x = std::stof(addressFifthLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!addressFifthLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem8Object.y = std::stof(addressFifthLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.addressFifthLine.keyPoints7.push_back(keyPointsItem8Object);
	}
	auto cardBoxNode = dataNode["CardBox"];
	if(!cardBoxNode["Text"].isNull())
		data_.cardBox.text = cardBoxNode["Text"].asString();
	if(!cardBoxNode["Score"].isNull())
		data_.cardBox.score = cardBoxNode["Score"].asString();
	auto allKeyPoints9Node = cardBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto cardBoxNodeKeyPointskeyPointsItem : allKeyPoints9Node)
	{
		Data::CardBox::KeyPointsItem10 keyPointsItem10Object;
		if(!cardBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem10Object.x = std::stof(cardBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!cardBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem10Object.y = std::stof(cardBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.cardBox.keyPoints9.push_back(keyPointsItem10Object);
	}
	auto driveClassNode = dataNode["DriveClass"];
	if(!driveClassNode["Text"].isNull())
		data_.driveClass.text = driveClassNode["Text"].asString();
	if(!driveClassNode["Score"].isNull())
		data_.driveClass.score = driveClassNode["Score"].asString();
	auto allKeyPoints11Node = driveClassNode["KeyPoints"]["keyPointsItem"];
	for (auto driveClassNodeKeyPointskeyPointsItem : allKeyPoints11Node)
	{
		Data::DriveClass::KeyPointsItem12 keyPointsItem12Object;
		if(!driveClassNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem12Object.x = std::stof(driveClassNodeKeyPointskeyPointsItem["X"].asString());
		if(!driveClassNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem12Object.y = std::stof(driveClassNodeKeyPointskeyPointsItem["Y"].asString());
		data_.driveClass.keyPoints11.push_back(keyPointsItem12Object);
	}
	auto expiryDateNode = dataNode["ExpiryDate"];
	if(!expiryDateNode["Text"].isNull())
		data_.expiryDate.text = expiryDateNode["Text"].asString();
	if(!expiryDateNode["Score"].isNull())
		data_.expiryDate.score = expiryDateNode["Score"].asString();
	auto allKeyPoints13Node = expiryDateNode["KeyPoints"]["keyPointsItem"];
	for (auto expiryDateNodeKeyPointskeyPointsItem : allKeyPoints13Node)
	{
		Data::ExpiryDate::KeyPointsItem14 keyPointsItem14Object;
		if(!expiryDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem14Object.x = std::stof(expiryDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!expiryDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem14Object.y = std::stof(expiryDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.expiryDate.keyPoints13.push_back(keyPointsItem14Object);
	}
	auto idNumberNode = dataNode["IdNumber"];
	if(!idNumberNode["Text"].isNull())
		data_.idNumber.text = idNumberNode["Text"].asString();
	if(!idNumberNode["Score"].isNull())
		data_.idNumber.score = idNumberNode["Score"].asString();
	auto allKeyPoints15Node = idNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto idNumberNodeKeyPointskeyPointsItem : allKeyPoints15Node)
	{
		Data::IdNumber::KeyPointsItem16 keyPointsItem16Object;
		if(!idNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem16Object.x = std::stof(idNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!idNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem16Object.y = std::stof(idNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.idNumber.keyPoints15.push_back(keyPointsItem16Object);
	}
	auto issueDateNode = dataNode["IssueDate"];
	if(!issueDateNode["Text"].isNull())
		data_.issueDate.text = issueDateNode["Text"].asString();
	if(!issueDateNode["Score"].isNull())
		data_.issueDate.score = issueDateNode["Score"].asString();
	auto allKeyPoints17Node = issueDateNode["KeyPoints"]["keyPointsItem"];
	for (auto issueDateNodeKeyPointskeyPointsItem : allKeyPoints17Node)
	{
		Data::IssueDate::KeyPointsItem18 keyPointsItem18Object;
		if(!issueDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem18Object.x = std::stof(issueDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!issueDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem18Object.y = std::stof(issueDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.issueDate.keyPoints17.push_back(keyPointsItem18Object);
	}
	auto nameFirstLineNode = dataNode["NameFirstLine"];
	if(!nameFirstLineNode["Text"].isNull())
		data_.nameFirstLine.text = nameFirstLineNode["Text"].asString();
	if(!nameFirstLineNode["Score"].isNull())
		data_.nameFirstLine.score = nameFirstLineNode["Score"].asString();
	auto allKeyPoints19Node = nameFirstLineNode["KeyPoints"]["keyPointsItem"];
	for (auto nameFirstLineNodeKeyPointskeyPointsItem : allKeyPoints19Node)
	{
		Data::NameFirstLine::KeyPointsItem20 keyPointsItem20Object;
		if(!nameFirstLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem20Object.x = std::stof(nameFirstLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!nameFirstLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem20Object.y = std::stof(nameFirstLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nameFirstLine.keyPoints19.push_back(keyPointsItem20Object);
	}
	auto nameSecondLineNode = dataNode["NameSecondLine"];
	if(!nameSecondLineNode["Text"].isNull())
		data_.nameSecondLine.text = nameSecondLineNode["Text"].asString();
	if(!nameSecondLineNode["Score"].isNull())
		data_.nameSecondLine.score = nameSecondLineNode["Score"].asString();
	auto allKeyPoints21Node = nameSecondLineNode["KeyPoints"]["keyPointsItem"];
	for (auto nameSecondLineNodeKeyPointskeyPointsItem : allKeyPoints21Node)
	{
		Data::NameSecondLine::KeyPointsItem22 keyPointsItem22Object;
		if(!nameSecondLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem22Object.x = std::stof(nameSecondLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!nameSecondLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem22Object.y = std::stof(nameSecondLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nameSecondLine.keyPoints21.push_back(keyPointsItem22Object);
	}
	auto nationalityNode = dataNode["Nationality"];
	if(!nationalityNode["Text"].isNull())
		data_.nationality.text = nationalityNode["Text"].asString();
	if(!nationalityNode["Score"].isNull())
		data_.nationality.score = nationalityNode["Score"].asString();
	auto allKeyPoints23Node = nationalityNode["KeyPoints"]["keyPointsItem"];
	for (auto nationalityNodeKeyPointskeyPointsItem : allKeyPoints23Node)
	{
		Data::Nationality::KeyPointsItem24 keyPointsItem24Object;
		if(!nationalityNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem24Object.x = std::stof(nationalityNodeKeyPointskeyPointsItem["X"].asString());
		if(!nationalityNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem24Object.y = std::stof(nationalityNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nationality.keyPoints23.push_back(keyPointsItem24Object);
	}
	auto portraitBoxNode = dataNode["PortraitBox"];
	if(!portraitBoxNode["Text"].isNull())
		data_.portraitBox.text = portraitBoxNode["Text"].asString();
	if(!portraitBoxNode["Score"].isNull())
		data_.portraitBox.score = portraitBoxNode["Score"].asString();
	auto allKeyPoints25Node = portraitBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto portraitBoxNodeKeyPointskeyPointsItem : allKeyPoints25Node)
	{
		Data::PortraitBox::KeyPointsItem26 keyPointsItem26Object;
		if(!portraitBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem26Object.x = std::stof(portraitBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!portraitBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem26Object.y = std::stof(portraitBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.portraitBox.keyPoints25.push_back(keyPointsItem26Object);
	}
	auto sexNode = dataNode["Sex"];
	if(!sexNode["Text"].isNull())
		data_.sex.text = sexNode["Text"].asString();
	if(!sexNode["Score"].isNull())
		data_.sex.score = sexNode["Score"].asString();
	auto allKeyPoints27Node = sexNode["KeyPoints"]["keyPointsItem"];
	for (auto sexNodeKeyPointskeyPointsItem : allKeyPoints27Node)
	{
		Data::Sex::KeyPointsItem28 keyPointsItem28Object;
		if(!sexNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem28Object.x = std::stof(sexNodeKeyPointskeyPointsItem["X"].asString());
		if(!sexNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem28Object.y = std::stof(sexNodeKeyPointskeyPointsItem["Y"].asString());
		data_.sex.keyPoints27.push_back(keyPointsItem28Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeMalaysiaIdentityCardResult::getMessage()const
{
	return message_;
}

RecognizeMalaysiaIdentityCardResult::Data RecognizeMalaysiaIdentityCardResult::getData()const
{
	return data_;
}

std::string RecognizeMalaysiaIdentityCardResult::getCode()const
{
	return code_;
}

