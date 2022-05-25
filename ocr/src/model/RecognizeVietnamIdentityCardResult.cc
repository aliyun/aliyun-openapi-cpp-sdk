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

#include <alibabacloud/ocr/model/RecognizeVietnamIdentityCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeVietnamIdentityCardResult::RecognizeVietnamIdentityCardResult() :
	ServiceResult()
{}

RecognizeVietnamIdentityCardResult::RecognizeVietnamIdentityCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeVietnamIdentityCardResult::~RecognizeVietnamIdentityCardResult()
{}

void RecognizeVietnamIdentityCardResult::parse(const std::string &payload)
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
	auto birthDateNode = dataNode["BirthDate"];
	if(!birthDateNode["Text"].isNull())
		data_.birthDate.text = birthDateNode["Text"].asString();
	if(!birthDateNode["Score"].isNull())
		data_.birthDate.score = std::stof(birthDateNode["Score"].asString());
	auto allKeyPoints3Node = birthDateNode["KeyPoints"]["keyPointsItem"];
	for (auto birthDateNodeKeyPointskeyPointsItem : allKeyPoints3Node)
	{
		Data::BirthDate::KeyPointsItem4 keyPointsItem4Object;
		if(!birthDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem4Object.x = std::stof(birthDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem4Object.y = std::stof(birthDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthDate.keyPoints3.push_back(keyPointsItem4Object);
	}
	auto cardBoxNode = dataNode["CardBox"];
	if(!cardBoxNode["Text"].isNull())
		data_.cardBox.text = cardBoxNode["Text"].asString();
	if(!cardBoxNode["Score"].isNull())
		data_.cardBox.score = cardBoxNode["Score"].asString();
	auto allKeyPoints5Node = cardBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto cardBoxNodeKeyPointskeyPointsItem : allKeyPoints5Node)
	{
		Data::CardBox::KeyPointsItem6 keyPointsItem6Object;
		if(!cardBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem6Object.x = std::stof(cardBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!cardBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem6Object.y = std::stof(cardBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.cardBox.keyPoints5.push_back(keyPointsItem6Object);
	}
	auto driveClassNode = dataNode["DriveClass"];
	if(!driveClassNode["Text"].isNull())
		data_.driveClass.text = driveClassNode["Text"].asString();
	if(!driveClassNode["Score"].isNull())
		data_.driveClass.score = driveClassNode["Score"].asString();
	auto allKeyPoints7Node = driveClassNode["KeyPoints"]["keyPointsItem"];
	for (auto driveClassNodeKeyPointskeyPointsItem : allKeyPoints7Node)
	{
		Data::DriveClass::KeyPointsItem8 keyPointsItem8Object;
		if(!driveClassNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem8Object.x = std::stof(driveClassNodeKeyPointskeyPointsItem["X"].asString());
		if(!driveClassNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem8Object.y = std::stof(driveClassNodeKeyPointskeyPointsItem["Y"].asString());
		data_.driveClass.keyPoints7.push_back(keyPointsItem8Object);
	}
	auto expiryDateNode = dataNode["ExpiryDate"];
	if(!expiryDateNode["Text"].isNull())
		data_.expiryDate.text = expiryDateNode["Text"].asString();
	if(!expiryDateNode["Score"].isNull())
		data_.expiryDate.score = expiryDateNode["Score"].asString();
	auto allKeyPoints9Node = expiryDateNode["KeyPoints"]["keyPointsItem"];
	for (auto expiryDateNodeKeyPointskeyPointsItem : allKeyPoints9Node)
	{
		Data::ExpiryDate::KeyPointsItem10 keyPointsItem10Object;
		if(!expiryDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem10Object.x = std::stof(expiryDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!expiryDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem10Object.y = std::stof(expiryDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.expiryDate.keyPoints9.push_back(keyPointsItem10Object);
	}
	auto fullNameNode = dataNode["FullName"];
	if(!fullNameNode["Text"].isNull())
		data_.fullName.text = fullNameNode["Text"].asString();
	if(!fullNameNode["Score"].isNull())
		data_.fullName.score = fullNameNode["Score"].asString();
	auto allKeyPoints11Node = fullNameNode["KeyPoints"]["keyPointsItem"];
	for (auto fullNameNodeKeyPointskeyPointsItem : allKeyPoints11Node)
	{
		Data::FullName::KeyPointsItem12 keyPointsItem12Object;
		if(!fullNameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem12Object.x = std::stof(fullNameNodeKeyPointskeyPointsItem["X"].asString());
		if(!fullNameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem12Object.y = std::stof(fullNameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.fullName.keyPoints11.push_back(keyPointsItem12Object);
	}
	auto idNumberNode = dataNode["IdNumber"];
	if(!idNumberNode["Text"].isNull())
		data_.idNumber.text = idNumberNode["Text"].asString();
	if(!idNumberNode["Score"].isNull())
		data_.idNumber.score = idNumberNode["Score"].asString();
	auto allKeyPoints13Node = idNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto idNumberNodeKeyPointskeyPointsItem : allKeyPoints13Node)
	{
		Data::IdNumber::KeyPointsItem14 keyPointsItem14Object;
		if(!idNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem14Object.x = std::stof(idNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!idNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem14Object.y = std::stof(idNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.idNumber.keyPoints13.push_back(keyPointsItem14Object);
	}
	auto nationalityNode = dataNode["Nationality"];
	if(!nationalityNode["Text"].isNull())
		data_.nationality.text = nationalityNode["Text"].asString();
	if(!nationalityNode["Score"].isNull())
		data_.nationality.score = nationalityNode["Score"].asString();
	auto allKeyPoints15Node = nationalityNode["KeyPoints"]["keyPointsItem"];
	for (auto nationalityNodeKeyPointskeyPointsItem : allKeyPoints15Node)
	{
		Data::Nationality::KeyPointsItem16 keyPointsItem16Object;
		if(!nationalityNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem16Object.x = std::stof(nationalityNodeKeyPointskeyPointsItem["X"].asString());
		if(!nationalityNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem16Object.y = std::stof(nationalityNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nationality.keyPoints15.push_back(keyPointsItem16Object);
	}
	auto originPlaceFirstLineNode = dataNode["OriginPlaceFirstLine"];
	if(!originPlaceFirstLineNode["Text"].isNull())
		data_.originPlaceFirstLine.text = originPlaceFirstLineNode["Text"].asString();
	if(!originPlaceFirstLineNode["Score"].isNull())
		data_.originPlaceFirstLine.score = originPlaceFirstLineNode["Score"].asString();
	auto allKeyPoints17Node = originPlaceFirstLineNode["KeyPoints"]["keyPointsItem"];
	for (auto originPlaceFirstLineNodeKeyPointskeyPointsItem : allKeyPoints17Node)
	{
		Data::OriginPlaceFirstLine::KeyPointsItem18 keyPointsItem18Object;
		if(!originPlaceFirstLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem18Object.x = std::stof(originPlaceFirstLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!originPlaceFirstLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem18Object.y = std::stof(originPlaceFirstLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.originPlaceFirstLine.keyPoints17.push_back(keyPointsItem18Object);
	}
	auto originPlaceSecondLineNode = dataNode["OriginPlaceSecondLine"];
	if(!originPlaceSecondLineNode["Text"].isNull())
		data_.originPlaceSecondLine.text = originPlaceSecondLineNode["Text"].asString();
	if(!originPlaceSecondLineNode["Score"].isNull())
		data_.originPlaceSecondLine.score = originPlaceSecondLineNode["Score"].asString();
	auto allKeyPoints19Node = originPlaceSecondLineNode["KeyPoints"]["keyPointsItem"];
	for (auto originPlaceSecondLineNodeKeyPointskeyPointsItem : allKeyPoints19Node)
	{
		Data::OriginPlaceSecondLine::KeyPointsItem20 keyPointsItem20Object;
		if(!originPlaceSecondLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem20Object.x = std::stof(originPlaceSecondLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!originPlaceSecondLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem20Object.y = std::stof(originPlaceSecondLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.originPlaceSecondLine.keyPoints19.push_back(keyPointsItem20Object);
	}
	auto portraitBoxNode = dataNode["PortraitBox"];
	if(!portraitBoxNode["Text"].isNull())
		data_.portraitBox.text = portraitBoxNode["Text"].asString();
	if(!portraitBoxNode["Score"].isNull())
		data_.portraitBox.score = portraitBoxNode["Score"].asString();
	auto allKeyPoints21Node = portraitBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto portraitBoxNodeKeyPointskeyPointsItem : allKeyPoints21Node)
	{
		Data::PortraitBox::KeyPointsItem22 keyPointsItem22Object;
		if(!portraitBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem22Object.x = std::stof(portraitBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!portraitBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem22Object.y = std::stof(portraitBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.portraitBox.keyPoints21.push_back(keyPointsItem22Object);
	}
	auto residencePlaceFirstLineNode = dataNode["ResidencePlaceFirstLine"];
	if(!residencePlaceFirstLineNode["Text"].isNull())
		data_.residencePlaceFirstLine.text = residencePlaceFirstLineNode["Text"].asString();
	if(!residencePlaceFirstLineNode["Score"].isNull())
		data_.residencePlaceFirstLine.score = residencePlaceFirstLineNode["Score"].asString();
	auto allKeyPoints23Node = residencePlaceFirstLineNode["KeyPoints"]["keyPointsItem"];
	for (auto residencePlaceFirstLineNodeKeyPointskeyPointsItem : allKeyPoints23Node)
	{
		Data::ResidencePlaceFirstLine::KeyPointsItem24 keyPointsItem24Object;
		if(!residencePlaceFirstLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem24Object.x = std::stof(residencePlaceFirstLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!residencePlaceFirstLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem24Object.y = std::stof(residencePlaceFirstLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.residencePlaceFirstLine.keyPoints23.push_back(keyPointsItem24Object);
	}
	auto residencePlaceSecondLineNode = dataNode["ResidencePlaceSecondLine"];
	if(!residencePlaceSecondLineNode["Text"].isNull())
		data_.residencePlaceSecondLine.text = residencePlaceSecondLineNode["Text"].asString();
	if(!residencePlaceSecondLineNode["Score"].isNull())
		data_.residencePlaceSecondLine.score = residencePlaceSecondLineNode["Score"].asString();
	auto allKeyPoints25Node = residencePlaceSecondLineNode["KeyPoints"]["keyPointsItem"];
	for (auto residencePlaceSecondLineNodeKeyPointskeyPointsItem : allKeyPoints25Node)
	{
		Data::ResidencePlaceSecondLine::KeyPointsItem26 keyPointsItem26Object;
		if(!residencePlaceSecondLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem26Object.x = std::stof(residencePlaceSecondLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!residencePlaceSecondLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem26Object.y = std::stof(residencePlaceSecondLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.residencePlaceSecondLine.keyPoints25.push_back(keyPointsItem26Object);
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

std::string RecognizeVietnamIdentityCardResult::getMessage()const
{
	return message_;
}

RecognizeVietnamIdentityCardResult::Data RecognizeVietnamIdentityCardResult::getData()const
{
	return data_;
}

std::string RecognizeVietnamIdentityCardResult::getCode()const
{
	return code_;
}

