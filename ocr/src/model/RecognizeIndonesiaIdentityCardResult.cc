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

#include <alibabacloud/ocr/model/RecognizeIndonesiaIdentityCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeIndonesiaIdentityCardResult::RecognizeIndonesiaIdentityCardResult() :
	ServiceResult()
{}

RecognizeIndonesiaIdentityCardResult::RecognizeIndonesiaIdentityCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeIndonesiaIdentityCardResult::~RecognizeIndonesiaIdentityCardResult()
{}

void RecognizeIndonesiaIdentityCardResult::parse(const std::string &payload)
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
	auto birthDateNode = dataNode["BirthDate"];
	if(!birthDateNode["Text"].isNull())
		data_.birthDate.text = birthDateNode["Text"].asString();
	if(!birthDateNode["Score"].isNull())
		data_.birthDate.score = birthDateNode["Score"].asString();
	auto allKeyPoints9Node = birthDateNode["KeyPoints"]["keyPointsItem"];
	for (auto birthDateNodeKeyPointskeyPointsItem : allKeyPoints9Node)
	{
		Data::BirthDate::KeyPointsItem10 keyPointsItem10Object;
		if(!birthDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem10Object.x = std::stof(birthDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem10Object.y = std::stof(birthDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthDate.keyPoints9.push_back(keyPointsItem10Object);
	}
	auto birthPlaceNode = dataNode["BirthPlace"];
	if(!birthPlaceNode["Text"].isNull())
		data_.birthPlace.text = birthPlaceNode["Text"].asString();
	if(!birthPlaceNode["Score"].isNull())
		data_.birthPlace.score = birthPlaceNode["Score"].asString();
	auto allKeyPoints11Node = birthPlaceNode["KeyPoints"]["keyPointsItem"];
	for (auto birthPlaceNodeKeyPointskeyPointsItem : allKeyPoints11Node)
	{
		Data::BirthPlace::KeyPointsItem12 keyPointsItem12Object;
		if(!birthPlaceNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem12Object.x = std::stof(birthPlaceNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthPlaceNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem12Object.y = std::stof(birthPlaceNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthPlace.keyPoints11.push_back(keyPointsItem12Object);
	}
	auto cardBoxNode = dataNode["CardBox"];
	if(!cardBoxNode["Text"].isNull())
		data_.cardBox.text = cardBoxNode["Text"].asString();
	if(!cardBoxNode["Score"].isNull())
		data_.cardBox.score = cardBoxNode["Score"].asString();
	auto allKeyPoints13Node = cardBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto cardBoxNodeKeyPointskeyPointsItem : allKeyPoints13Node)
	{
		Data::CardBox::KeyPointsItem14 keyPointsItem14Object;
		if(!cardBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem14Object.x = std::stof(cardBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!cardBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem14Object.y = std::stof(cardBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.cardBox.keyPoints13.push_back(keyPointsItem14Object);
	}
	auto expiryDateNode = dataNode["ExpiryDate"];
	if(!expiryDateNode["Text"].isNull())
		data_.expiryDate.text = expiryDateNode["Text"].asString();
	if(!expiryDateNode["Score"].isNull())
		data_.expiryDate.score = expiryDateNode["Score"].asString();
	auto allKeyPoints15Node = expiryDateNode["KeyPoints"]["keyPointsItem"];
	for (auto expiryDateNodeKeyPointskeyPointsItem : allKeyPoints15Node)
	{
		Data::ExpiryDate::KeyPointsItem16 keyPointsItem16Object;
		if(!expiryDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem16Object.x = std::stof(expiryDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!expiryDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem16Object.y = std::stof(expiryDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.expiryDate.keyPoints15.push_back(keyPointsItem16Object);
	}
	auto genderNode = dataNode["Gender"];
	if(!genderNode["Text"].isNull())
		data_.gender.text = genderNode["Text"].asString();
	if(!genderNode["Score"].isNull())
		data_.gender.score = genderNode["Score"].asString();
	auto allKeyPoints17Node = genderNode["KeyPoints"]["keyPointsItem"];
	for (auto genderNodeKeyPointskeyPointsItem : allKeyPoints17Node)
	{
		Data::Gender::KeyPointsItem18 keyPointsItem18Object;
		if(!genderNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem18Object.x = std::stof(genderNodeKeyPointskeyPointsItem["X"].asString());
		if(!genderNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem18Object.y = std::stof(genderNodeKeyPointskeyPointsItem["Y"].asString());
		data_.gender.keyPoints17.push_back(keyPointsItem18Object);
	}
	auto heightNode = dataNode["Height"];
	if(!heightNode["Text"].isNull())
		data_.height.text = heightNode["Text"].asString();
	if(!heightNode["Score"].isNull())
		data_.height.score = heightNode["Score"].asString();
	auto allKeyPoints19Node = heightNode["KeyPoints"]["keyPointsItem"];
	for (auto heightNodeKeyPointskeyPointsItem : allKeyPoints19Node)
	{
		Data::Height::KeyPointsItem20 keyPointsItem20Object;
		if(!heightNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem20Object.x = std::stof(heightNodeKeyPointskeyPointsItem["X"].asString());
		if(!heightNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem20Object.y = std::stof(heightNodeKeyPointskeyPointsItem["Y"].asString());
		data_.height.keyPoints19.push_back(keyPointsItem20Object);
	}
	auto idNumberNode = dataNode["IdNumber"];
	if(!idNumberNode["Text"].isNull())
		data_.idNumber.text = idNumberNode["Text"].asString();
	if(!idNumberNode["Score"].isNull())
		data_.idNumber.score = idNumberNode["Score"].asString();
	auto allKeyPoints21Node = idNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto idNumberNodeKeyPointskeyPointsItem : allKeyPoints21Node)
	{
		Data::IdNumber::KeyPointsItem22 keyPointsItem22Object;
		if(!idNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem22Object.x = std::stof(idNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!idNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem22Object.y = std::stof(idNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.idNumber.keyPoints21.push_back(keyPointsItem22Object);
	}
	auto licenseNumberNode = dataNode["LicenseNumber"];
	if(!licenseNumberNode["Text"].isNull())
		data_.licenseNumber.text = licenseNumberNode["Text"].asString();
	if(!licenseNumberNode["Score"].isNull())
		data_.licenseNumber.score = licenseNumberNode["Score"].asString();
	auto allKeyPoints23Node = licenseNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto licenseNumberNodeKeyPointskeyPointsItem : allKeyPoints23Node)
	{
		Data::LicenseNumber::KeyPointsItem24 keyPointsItem24Object;
		if(!licenseNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem24Object.x = std::stof(licenseNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!licenseNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem24Object.y = std::stof(licenseNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.licenseNumber.keyPoints23.push_back(keyPointsItem24Object);
	}
	auto maritalStatusNode = dataNode["MaritalStatus"];
	if(!maritalStatusNode["Text"].isNull())
		data_.maritalStatus.text = maritalStatusNode["Text"].asString();
	if(!maritalStatusNode["Score"].isNull())
		data_.maritalStatus.score = maritalStatusNode["Score"].asString();
	auto allKeyPoints25Node = maritalStatusNode["KeyPoints"]["keyPointsItem"];
	for (auto maritalStatusNodeKeyPointskeyPointsItem : allKeyPoints25Node)
	{
		Data::MaritalStatus::KeyPointsItem26 keyPointsItem26Object;
		if(!maritalStatusNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem26Object.x = std::stof(maritalStatusNodeKeyPointskeyPointsItem["X"].asString());
		if(!maritalStatusNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem26Object.y = std::stof(maritalStatusNodeKeyPointskeyPointsItem["Y"].asString());
		data_.maritalStatus.keyPoints25.push_back(keyPointsItem26Object);
	}
	auto nameFirstLineNode = dataNode["NameFirstLine"];
	if(!nameFirstLineNode["Text"].isNull())
		data_.nameFirstLine.text = nameFirstLineNode["Text"].asString();
	if(!nameFirstLineNode["Score"].isNull())
		data_.nameFirstLine.score = nameFirstLineNode["Score"].asString();
	auto allKeyPoints27Node = nameFirstLineNode["KeyPoints"]["keyPointsItem"];
	for (auto nameFirstLineNodeKeyPointskeyPointsItem : allKeyPoints27Node)
	{
		Data::NameFirstLine::KeyPointsItem28 keyPointsItem28Object;
		if(!nameFirstLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem28Object.x = std::stof(nameFirstLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!nameFirstLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem28Object.y = std::stof(nameFirstLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nameFirstLine.keyPoints27.push_back(keyPointsItem28Object);
	}
	auto nameSecondLineNode = dataNode["NameSecondLine"];
	if(!nameSecondLineNode["Text"].isNull())
		data_.nameSecondLine.text = nameSecondLineNode["Text"].asString();
	if(!nameSecondLineNode["Score"].isNull())
		data_.nameSecondLine.score = nameSecondLineNode["Score"].asString();
	auto allKeyPoints29Node = nameSecondLineNode["KeyPoints"]["keyPointsItem"];
	for (auto nameSecondLineNodeKeyPointskeyPointsItem : allKeyPoints29Node)
	{
		Data::NameSecondLine::KeyPointsItem30 keyPointsItem30Object;
		if(!nameSecondLineNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem30Object.x = std::stof(nameSecondLineNodeKeyPointskeyPointsItem["X"].asString());
		if(!nameSecondLineNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem30Object.y = std::stof(nameSecondLineNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nameSecondLine.keyPoints29.push_back(keyPointsItem30Object);
	}
	auto nationalityNode = dataNode["Nationality"];
	if(!nationalityNode["Text"].isNull())
		data_.nationality.text = nationalityNode["Text"].asString();
	if(!nationalityNode["Score"].isNull())
		data_.nationality.score = nationalityNode["Score"].asString();
	auto allKeyPoints31Node = nationalityNode["KeyPoints"]["keyPointsItem"];
	for (auto nationalityNodeKeyPointskeyPointsItem : allKeyPoints31Node)
	{
		Data::Nationality::KeyPointsItem32 keyPointsItem32Object;
		if(!nationalityNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem32Object.x = std::stof(nationalityNodeKeyPointskeyPointsItem["X"].asString());
		if(!nationalityNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem32Object.y = std::stof(nationalityNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nationality.keyPoints31.push_back(keyPointsItem32Object);
	}
	auto occupationNode = dataNode["Occupation"];
	if(!occupationNode["Text"].isNull())
		data_.occupation.text = occupationNode["Text"].asString();
	if(!occupationNode["Score"].isNull())
		data_.occupation.score = occupationNode["Score"].asString();
	auto allKeyPoints33Node = occupationNode["KeyPoints"]["keyPointsItem"];
	for (auto occupationNodeKeyPointskeyPointsItem : allKeyPoints33Node)
	{
		Data::Occupation::KeyPointsItem34 keyPointsItem34Object;
		if(!occupationNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem34Object.x = std::stof(occupationNodeKeyPointskeyPointsItem["X"].asString());
		if(!occupationNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem34Object.y = std::stof(occupationNodeKeyPointskeyPointsItem["Y"].asString());
		data_.occupation.keyPoints33.push_back(keyPointsItem34Object);
	}
	auto portraitBoxNode = dataNode["PortraitBox"];
	if(!portraitBoxNode["Text"].isNull())
		data_.portraitBox.text = portraitBoxNode["Text"].asString();
	if(!portraitBoxNode["Score"].isNull())
		data_.portraitBox.score = portraitBoxNode["Score"].asString();
	auto allKeyPoints35Node = portraitBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto portraitBoxNodeKeyPointskeyPointsItem : allKeyPoints35Node)
	{
		Data::PortraitBox::KeyPointsItem36 keyPointsItem36Object;
		if(!portraitBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem36Object.x = std::stof(portraitBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!portraitBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem36Object.y = std::stof(portraitBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.portraitBox.keyPoints35.push_back(keyPointsItem36Object);
	}
	auto provinceNode = dataNode["Province"];
	if(!provinceNode["Text"].isNull())
		data_.province.text = provinceNode["Text"].asString();
	if(!provinceNode["Score"].isNull())
		data_.province.score = provinceNode["Score"].asString();
	auto allKeyPoints37Node = provinceNode["KeyPoints"]["keyPointsItem"];
	for (auto provinceNodeKeyPointskeyPointsItem : allKeyPoints37Node)
	{
		Data::Province::KeyPointsItem38 keyPointsItem38Object;
		if(!provinceNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem38Object.x = std::stof(provinceNodeKeyPointskeyPointsItem["X"].asString());
		if(!provinceNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem38Object.y = std::stof(provinceNodeKeyPointskeyPointsItem["Y"].asString());
		data_.province.keyPoints37.push_back(keyPointsItem38Object);
	}
	auto religionNode = dataNode["Religion"];
	if(!religionNode["Text"].isNull())
		data_.religion.text = religionNode["Text"].asString();
	if(!religionNode["Score"].isNull())
		data_.religion.score = religionNode["Score"].asString();
	auto allKeyPoints39Node = religionNode["KeyPoints"]["keyPointsItem"];
	for (auto religionNodeKeyPointskeyPointsItem : allKeyPoints39Node)
	{
		Data::Religion::KeyPointsItem40 keyPointsItem40Object;
		if(!religionNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem40Object.x = std::stof(religionNodeKeyPointskeyPointsItem["X"].asString());
		if(!religionNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem40Object.y = std::stof(religionNodeKeyPointskeyPointsItem["Y"].asString());
		data_.religion.keyPoints39.push_back(keyPointsItem40Object);
	}
	auto sexNode = dataNode["Sex"];
	if(!sexNode["Text"].isNull())
		data_.sex.text = sexNode["Text"].asString();
	if(!sexNode["Score"].isNull())
		data_.sex.score = sexNode["Score"].asString();
	auto allKeyPoints41Node = sexNode["KeyPoints"]["keyPointsItem"];
	for (auto sexNodeKeyPointskeyPointsItem : allKeyPoints41Node)
	{
		Data::Sex::KeyPointsItem42 keyPointsItem42Object;
		if(!sexNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem42Object.x = std::stof(sexNodeKeyPointskeyPointsItem["X"].asString());
		if(!sexNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem42Object.y = std::stof(sexNodeKeyPointskeyPointsItem["Y"].asString());
		data_.sex.keyPoints41.push_back(keyPointsItem42Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeIndonesiaIdentityCardResult::getMessage()const
{
	return message_;
}

RecognizeIndonesiaIdentityCardResult::Data RecognizeIndonesiaIdentityCardResult::getData()const
{
	return data_;
}

std::string RecognizeIndonesiaIdentityCardResult::getCode()const
{
	return code_;
}

