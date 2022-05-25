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

#include <alibabacloud/ocr/model/RecognizeTurkeyIdentityCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeTurkeyIdentityCardResult::RecognizeTurkeyIdentityCardResult() :
	ServiceResult()
{}

RecognizeTurkeyIdentityCardResult::RecognizeTurkeyIdentityCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeTurkeyIdentityCardResult::~RecognizeTurkeyIdentityCardResult()
{}

void RecognizeTurkeyIdentityCardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto auxiliaryToolsNode = dataNode["AuxiliaryTools"];
	if(!auxiliaryToolsNode["Text"].isNull())
		data_.auxiliaryTools.text = auxiliaryToolsNode["Text"].asString();
	if(!auxiliaryToolsNode["Score"].isNull())
		data_.auxiliaryTools.score = std::stof(auxiliaryToolsNode["Score"].asString());
	auto allKeyPointsNode = auxiliaryToolsNode["KeyPoints"]["keyPointsItem"];
	for (auto auxiliaryToolsNodeKeyPointskeyPointsItem : allKeyPointsNode)
	{
		Data::AuxiliaryTools::KeyPointsItem keyPointsItemObject;
		if(!auxiliaryToolsNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItemObject.x = std::stof(auxiliaryToolsNodeKeyPointskeyPointsItem["X"].asString());
		if(!auxiliaryToolsNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItemObject.y = std::stof(auxiliaryToolsNodeKeyPointskeyPointsItem["Y"].asString());
		data_.auxiliaryTools.keyPoints.push_back(keyPointsItemObject);
	}
	auto birthDateNode = dataNode["BirthDate"];
	if(!birthDateNode["Text"].isNull())
		data_.birthDate.text = birthDateNode["Text"].asString();
	if(!birthDateNode["Score"].isNull())
		data_.birthDate.score = std::stof(birthDateNode["Score"].asString());
	auto allKeyPoints1Node = birthDateNode["KeyPoints"]["keyPointsItem"];
	for (auto birthDateNodeKeyPointskeyPointsItem : allKeyPoints1Node)
	{
		Data::BirthDate::KeyPointsItem2 keyPointsItem2Object;
		if(!birthDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem2Object.x = std::stof(birthDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem2Object.y = std::stof(birthDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthDate.keyPoints1.push_back(keyPointsItem2Object);
	}
	auto birthPlaceNode = dataNode["BirthPlace"];
	if(!birthPlaceNode["Text"].isNull())
		data_.birthPlace.text = birthPlaceNode["Text"].asString();
	if(!birthPlaceNode["Score"].isNull())
		data_.birthPlace.score = std::stof(birthPlaceNode["Score"].asString());
	auto allKeyPoints3Node = birthPlaceNode["KeyPoints"]["keyPointsItem"];
	for (auto birthPlaceNodeKeyPointskeyPointsItem : allKeyPoints3Node)
	{
		Data::BirthPlace::KeyPointsItem4 keyPointsItem4Object;
		if(!birthPlaceNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem4Object.x = std::stof(birthPlaceNodeKeyPointskeyPointsItem["X"].asString());
		if(!birthPlaceNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem4Object.y = std::stof(birthPlaceNodeKeyPointskeyPointsItem["Y"].asString());
		data_.birthPlace.keyPoints3.push_back(keyPointsItem4Object);
	}
	auto bloodTypeNode = dataNode["BloodType"];
	if(!bloodTypeNode["Text"].isNull())
		data_.bloodType.text = bloodTypeNode["Text"].asString();
	if(!bloodTypeNode["Score"].isNull())
		data_.bloodType.score = std::stof(bloodTypeNode["Score"].asString());
	auto allKeyPoints5Node = bloodTypeNode["KeyPoints"]["keyPointsItem"];
	for (auto bloodTypeNodeKeyPointskeyPointsItem : allKeyPoints5Node)
	{
		Data::BloodType::KeyPointsItem6 keyPointsItem6Object;
		if(!bloodTypeNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem6Object.x = std::stof(bloodTypeNodeKeyPointskeyPointsItem["X"].asString());
		if(!bloodTypeNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem6Object.y = std::stof(bloodTypeNodeKeyPointskeyPointsItem["Y"].asString());
		data_.bloodType.keyPoints5.push_back(keyPointsItem6Object);
	}
	auto cardBoxNode = dataNode["CardBox"];
	if(!cardBoxNode["Text"].isNull())
		data_.cardBox.text = cardBoxNode["Text"].asString();
	if(!cardBoxNode["Score"].isNull())
		data_.cardBox.score = std::stof(cardBoxNode["Score"].asString());
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
	auto ciltNode = dataNode["Cilt"];
	if(!ciltNode["Text"].isNull())
		data_.cilt.text = ciltNode["Text"].asString();
	if(!ciltNode["Score"].isNull())
		data_.cilt.score = std::stof(ciltNode["Score"].asString());
	auto allKeyPoints9Node = ciltNode["KeyPoints"]["keyPointsItem"];
	for (auto ciltNodeKeyPointskeyPointsItem : allKeyPoints9Node)
	{
		Data::Cilt::KeyPointsItem10 keyPointsItem10Object;
		if(!ciltNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem10Object.x = std::stof(ciltNodeKeyPointskeyPointsItem["X"].asString());
		if(!ciltNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem10Object.y = std::stof(ciltNodeKeyPointskeyPointsItem["Y"].asString());
		data_.cilt.keyPoints9.push_back(keyPointsItem10Object);
	}
	auto documentNumberNode = dataNode["DocumentNumber"];
	if(!documentNumberNode["Text"].isNull())
		data_.documentNumber.text = documentNumberNode["Text"].asString();
	if(!documentNumberNode["Score"].isNull())
		data_.documentNumber.score = std::stof(documentNumberNode["Score"].asString());
	auto allKeyPoints11Node = documentNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto documentNumberNodeKeyPointskeyPointsItem : allKeyPoints11Node)
	{
		Data::DocumentNumber::KeyPointsItem12 keyPointsItem12Object;
		if(!documentNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem12Object.x = std::stof(documentNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!documentNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem12Object.y = std::stof(documentNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.documentNumber.keyPoints11.push_back(keyPointsItem12Object);
	}
	auto driveClassNode = dataNode["DriveClass"];
	if(!driveClassNode["Text"].isNull())
		data_.driveClass.text = driveClassNode["Text"].asString();
	if(!driveClassNode["Score"].isNull())
		data_.driveClass.score = std::stof(driveClassNode["Score"].asString());
	auto allKeyPoints13Node = driveClassNode["KeyPoints"]["keyPointsItem"];
	for (auto driveClassNodeKeyPointskeyPointsItem : allKeyPoints13Node)
	{
		Data::DriveClass::KeyPointsItem14 keyPointsItem14Object;
		if(!driveClassNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem14Object.x = std::stof(driveClassNodeKeyPointskeyPointsItem["X"].asString());
		if(!driveClassNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem14Object.y = std::stof(driveClassNodeKeyPointskeyPointsItem["Y"].asString());
		data_.driveClass.keyPoints13.push_back(keyPointsItem14Object);
	}
	auto dueDateNode = dataNode["DueDate"];
	if(!dueDateNode["Text"].isNull())
		data_.dueDate.text = dueDateNode["Text"].asString();
	if(!dueDateNode["Score"].isNull())
		data_.dueDate.score = std::stof(dueDateNode["Score"].asString());
	auto allKeyPoints15Node = dueDateNode["KeyPoints"]["keyPointsItem"];
	for (auto dueDateNodeKeyPointskeyPointsItem : allKeyPoints15Node)
	{
		Data::DueDate::KeyPointsItem16 keyPointsItem16Object;
		if(!dueDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem16Object.x = std::stof(dueDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!dueDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem16Object.y = std::stof(dueDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.dueDate.keyPoints15.push_back(keyPointsItem16Object);
	}
	auto duzenleyenNode = dataNode["Duzenleyen"];
	if(!duzenleyenNode["Text"].isNull())
		data_.duzenleyen.text = duzenleyenNode["Text"].asString();
	if(!duzenleyenNode["Score"].isNull())
		data_.duzenleyen.score = std::stof(duzenleyenNode["Score"].asString());
	auto allKeyPoints17Node = duzenleyenNode["KeyPoints"]["keyPointsItem"];
	for (auto duzenleyenNodeKeyPointskeyPointsItem : allKeyPoints17Node)
	{
		Data::Duzenleyen::KeyPointsItem18 keyPointsItem18Object;
		if(!duzenleyenNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem18Object.x = std::stof(duzenleyenNodeKeyPointskeyPointsItem["X"].asString());
		if(!duzenleyenNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem18Object.y = std::stof(duzenleyenNodeKeyPointskeyPointsItem["Y"].asString());
		data_.duzenleyen.keyPoints17.push_back(keyPointsItem18Object);
	}
	auto entryNumberNode = dataNode["EntryNumber"];
	if(!entryNumberNode["Text"].isNull())
		data_.entryNumber.text = entryNumberNode["Text"].asString();
	if(!entryNumberNode["Score"].isNull())
		data_.entryNumber.score = std::stof(entryNumberNode["Score"].asString());
	auto allKeyPoints19Node = entryNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto entryNumberNodeKeyPointskeyPointsItem : allKeyPoints19Node)
	{
		Data::EntryNumber::KeyPointsItem20 keyPointsItem20Object;
		if(!entryNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem20Object.x = std::stof(entryNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!entryNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem20Object.y = std::stof(entryNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.entryNumber.keyPoints19.push_back(keyPointsItem20Object);
	}
	auto expiryDateNode = dataNode["ExpiryDate"];
	if(!expiryDateNode["Text"].isNull())
		data_.expiryDate.text = expiryDateNode["Text"].asString();
	if(!expiryDateNode["Score"].isNull())
		data_.expiryDate.score = std::stof(expiryDateNode["Score"].asString());
	auto allKeyPoints21Node = expiryDateNode["KeyPoints"]["keyPointsItem"];
	for (auto expiryDateNodeKeyPointskeyPointsItem : allKeyPoints21Node)
	{
		Data::ExpiryDate::KeyPointsItem22 keyPointsItem22Object;
		if(!expiryDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem22Object.x = std::stof(expiryDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!expiryDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem22Object.y = std::stof(expiryDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.expiryDate.keyPoints21.push_back(keyPointsItem22Object);
	}
	auto fatherNameNode = dataNode["FatherName"];
	if(!fatherNameNode["Text"].isNull())
		data_.fatherName.text = fatherNameNode["Text"].asString();
	if(!fatherNameNode["Score"].isNull())
		data_.fatherName.score = std::stof(fatherNameNode["Score"].asString());
	auto allKeyPoints23Node = fatherNameNode["KeyPoints"]["keyPointsItem"];
	for (auto fatherNameNodeKeyPointskeyPointsItem : allKeyPoints23Node)
	{
		Data::FatherName::KeyPointsItem24 keyPointsItem24Object;
		if(!fatherNameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem24Object.x = std::stof(fatherNameNodeKeyPointskeyPointsItem["X"].asString());
		if(!fatherNameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem24Object.y = std::stof(fatherNameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.fatherName.keyPoints23.push_back(keyPointsItem24Object);
	}
	auto foreignersIdNode = dataNode["ForeignersId"];
	if(!foreignersIdNode["Text"].isNull())
		data_.foreignersId.text = foreignersIdNode["Text"].asString();
	if(!foreignersIdNode["Score"].isNull())
		data_.foreignersId.score = std::stof(foreignersIdNode["Score"].asString());
	auto allKeyPoints25Node = foreignersIdNode["KeyPoints"]["keyPointsItem"];
	for (auto foreignersIdNodeKeyPointskeyPointsItem : allKeyPoints25Node)
	{
		Data::ForeignersId::KeyPointsItem26 keyPointsItem26Object;
		if(!foreignersIdNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem26Object.x = std::stof(foreignersIdNodeKeyPointskeyPointsItem["X"].asString());
		if(!foreignersIdNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem26Object.y = std::stof(foreignersIdNodeKeyPointskeyPointsItem["Y"].asString());
		data_.foreignersId.keyPoints25.push_back(keyPointsItem26Object);
	}
	auto genderNode = dataNode["Gender"];
	if(!genderNode["Text"].isNull())
		data_.gender.text = genderNode["Text"].asString();
	if(!genderNode["Score"].isNull())
		data_.gender.score = std::stof(genderNode["Score"].asString());
	auto allKeyPoints27Node = genderNode["KeyPoints"]["keyPointsItem"];
	for (auto genderNodeKeyPointskeyPointsItem : allKeyPoints27Node)
	{
		Data::Gender::KeyPointsItem28 keyPointsItem28Object;
		if(!genderNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem28Object.x = std::stof(genderNodeKeyPointskeyPointsItem["X"].asString());
		if(!genderNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem28Object.y = std::stof(genderNodeKeyPointskeyPointsItem["Y"].asString());
		data_.gender.keyPoints27.push_back(keyPointsItem28Object);
	}
	auto givenNameNode = dataNode["GivenName"];
	if(!givenNameNode["Text"].isNull())
		data_.givenName.text = givenNameNode["Text"].asString();
	if(!givenNameNode["Score"].isNull())
		data_.givenName.score = std::stof(givenNameNode["Score"].asString());
	auto allKeyPoints29Node = givenNameNode["KeyPoints"]["keyPointsItem"];
	for (auto givenNameNodeKeyPointskeyPointsItem : allKeyPoints29Node)
	{
		Data::GivenName::KeyPointsItem30 keyPointsItem30Object;
		if(!givenNameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem30Object.x = std::stof(givenNameNodeKeyPointskeyPointsItem["X"].asString());
		if(!givenNameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem30Object.y = std::stof(givenNameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.givenName.keyPoints29.push_back(keyPointsItem30Object);
	}
	auto idNumberNode = dataNode["IdNumber"];
	if(!idNumberNode["Text"].isNull())
		data_.idNumber.text = idNumberNode["Text"].asString();
	if(!idNumberNode["Score"].isNull())
		data_.idNumber.score = std::stof(idNumberNode["Score"].asString());
	auto allKeyPoints31Node = idNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto idNumberNodeKeyPointskeyPointsItem : allKeyPoints31Node)
	{
		Data::IdNumber::KeyPointsItem32 keyPointsItem32Object;
		if(!idNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem32Object.x = std::stof(idNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!idNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem32Object.y = std::stof(idNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.idNumber.keyPoints31.push_back(keyPointsItem32Object);
	}
	auto issueByNode = dataNode["IssueBy"];
	if(!issueByNode["Text"].isNull())
		data_.issueBy.text = issueByNode["Text"].asString();
	if(!issueByNode["Score"].isNull())
		data_.issueBy.score = std::stof(issueByNode["Score"].asString());
	auto allKeyPoints33Node = issueByNode["KeyPoints"]["keyPointsItem"];
	for (auto issueByNodeKeyPointskeyPointsItem : allKeyPoints33Node)
	{
		Data::IssueBy::KeyPointsItem34 keyPointsItem34Object;
		if(!issueByNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem34Object.x = std::stof(issueByNodeKeyPointskeyPointsItem["X"].asString());
		if(!issueByNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem34Object.y = std::stof(issueByNodeKeyPointskeyPointsItem["Y"].asString());
		data_.issueBy.keyPoints33.push_back(keyPointsItem34Object);
	}
	auto issueCountyNode = dataNode["IssueCounty"];
	if(!issueCountyNode["Text"].isNull())
		data_.issueCounty.text = issueCountyNode["Text"].asString();
	if(!issueCountyNode["Score"].isNull())
		data_.issueCounty.score = std::stof(issueCountyNode["Score"].asString());
	auto allKeyPoints35Node = issueCountyNode["KeyPoints"]["keyPointsItem"];
	for (auto issueCountyNodeKeyPointskeyPointsItem : allKeyPoints35Node)
	{
		Data::IssueCounty::KeyPointsItem36 keyPointsItem36Object;
		if(!issueCountyNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem36Object.x = std::stof(issueCountyNodeKeyPointskeyPointsItem["X"].asString());
		if(!issueCountyNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem36Object.y = std::stof(issueCountyNodeKeyPointskeyPointsItem["Y"].asString());
		data_.issueCounty.keyPoints35.push_back(keyPointsItem36Object);
	}
	auto issueDateNode = dataNode["IssueDate"];
	if(!issueDateNode["Text"].isNull())
		data_.issueDate.text = issueDateNode["Text"].asString();
	if(!issueDateNode["Score"].isNull())
		data_.issueDate.score = std::stof(issueDateNode["Score"].asString());
	auto allKeyPoints37Node = issueDateNode["KeyPoints"]["keyPointsItem"];
	for (auto issueDateNodeKeyPointskeyPointsItem : allKeyPoints37Node)
	{
		Data::IssueDate::KeyPointsItem38 keyPointsItem38Object;
		if(!issueDateNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem38Object.x = std::stof(issueDateNodeKeyPointskeyPointsItem["X"].asString());
		if(!issueDateNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem38Object.y = std::stof(issueDateNodeKeyPointskeyPointsItem["Y"].asString());
		data_.issueDate.keyPoints37.push_back(keyPointsItem38Object);
	}
	auto issuePlaceNode = dataNode["IssuePlace"];
	if(!issuePlaceNode["Text"].isNull())
		data_.issuePlace.text = issuePlaceNode["Text"].asString();
	if(!issuePlaceNode["Score"].isNull())
		data_.issuePlace.score = std::stof(issuePlaceNode["Score"].asString());
	auto allKeyPoints39Node = issuePlaceNode["KeyPoints"]["keyPointsItem"];
	for (auto issuePlaceNodeKeyPointskeyPointsItem : allKeyPoints39Node)
	{
		Data::IssuePlace::KeyPointsItem40 keyPointsItem40Object;
		if(!issuePlaceNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem40Object.x = std::stof(issuePlaceNodeKeyPointskeyPointsItem["X"].asString());
		if(!issuePlaceNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem40Object.y = std::stof(issuePlaceNodeKeyPointskeyPointsItem["Y"].asString());
		data_.issuePlace.keyPoints39.push_back(keyPointsItem40Object);
	}
	auto kutukNode = dataNode["Kutuk"];
	if(!kutukNode["Text"].isNull())
		data_.kutuk.text = kutukNode["Text"].asString();
	if(!kutukNode["Score"].isNull())
		data_.kutuk.score = std::stof(kutukNode["Score"].asString());
	auto allKeyPoints41Node = kutukNode["KeyPoints"]["keyPointsItem"];
	for (auto kutukNodeKeyPointskeyPointsItem : allKeyPoints41Node)
	{
		Data::Kutuk::KeyPointsItem42 keyPointsItem42Object;
		if(!kutukNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem42Object.x = std::stof(kutukNodeKeyPointskeyPointsItem["X"].asString());
		if(!kutukNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem42Object.y = std::stof(kutukNodeKeyPointskeyPointsItem["Y"].asString());
		data_.kutuk.keyPoints41.push_back(keyPointsItem42Object);
	}
	auto licenseNumberNode = dataNode["LicenseNumber"];
	if(!licenseNumberNode["Text"].isNull())
		data_.licenseNumber.text = licenseNumberNode["Text"].asString();
	if(!licenseNumberNode["Score"].isNull())
		data_.licenseNumber.score = std::stof(licenseNumberNode["Score"].asString());
	auto allKeyPoints43Node = licenseNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto licenseNumberNodeKeyPointskeyPointsItem : allKeyPoints43Node)
	{
		Data::LicenseNumber::KeyPointsItem44 keyPointsItem44Object;
		if(!licenseNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem44Object.x = std::stof(licenseNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!licenseNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem44Object.y = std::stof(licenseNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.licenseNumber.keyPoints43.push_back(keyPointsItem44Object);
	}
	auto maritalStatusNode = dataNode["MaritalStatus"];
	if(!maritalStatusNode["Text"].isNull())
		data_.maritalStatus.text = maritalStatusNode["Text"].asString();
	if(!maritalStatusNode["Score"].isNull())
		data_.maritalStatus.score = std::stof(maritalStatusNode["Score"].asString());
	auto allKeyPoints45Node = maritalStatusNode["KeyPoints"]["keyPointsItem"];
	for (auto maritalStatusNodeKeyPointskeyPointsItem : allKeyPoints45Node)
	{
		Data::MaritalStatus::KeyPointsItem46 keyPointsItem46Object;
		if(!maritalStatusNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem46Object.x = std::stof(maritalStatusNodeKeyPointskeyPointsItem["X"].asString());
		if(!maritalStatusNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem46Object.y = std::stof(maritalStatusNodeKeyPointskeyPointsItem["Y"].asString());
		data_.maritalStatus.keyPoints45.push_back(keyPointsItem46Object);
	}
	auto motherNameNode = dataNode["MotherName"];
	if(!motherNameNode["Text"].isNull())
		data_.motherName.text = motherNameNode["Text"].asString();
	if(!motherNameNode["Score"].isNull())
		data_.motherName.score = std::stof(motherNameNode["Score"].asString());
	auto allKeyPoints47Node = motherNameNode["KeyPoints"]["keyPointsItem"];
	for (auto motherNameNodeKeyPointskeyPointsItem : allKeyPoints47Node)
	{
		Data::MotherName::KeyPointsItem48 keyPointsItem48Object;
		if(!motherNameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem48Object.x = std::stof(motherNameNodeKeyPointskeyPointsItem["X"].asString());
		if(!motherNameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem48Object.y = std::stof(motherNameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.motherName.keyPoints47.push_back(keyPointsItem48Object);
	}
	auto nameNode = dataNode["Name"];
	if(!nameNode["Text"].isNull())
		data_.name.text = nameNode["Text"].asString();
	if(!nameNode["Score"].isNull())
		data_.name.score = std::stof(nameNode["Score"].asString());
	auto allKeyPoints49Node = nameNode["KeyPoints"]["keyPointsItem"];
	for (auto nameNodeKeyPointskeyPointsItem : allKeyPoints49Node)
	{
		Data::Name::KeyPointsItem50 keyPointsItem50Object;
		if(!nameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem50Object.x = std::stof(nameNodeKeyPointskeyPointsItem["X"].asString());
		if(!nameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem50Object.y = std::stof(nameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.name.keyPoints49.push_back(keyPointsItem50Object);
	}
	auto nationalityNode = dataNode["Nationality"];
	if(!nationalityNode["Text"].isNull())
		data_.nationality.text = nationalityNode["Text"].asString();
	if(!nationalityNode["Score"].isNull())
		data_.nationality.score = std::stof(nationalityNode["Score"].asString());
	auto allKeyPoints51Node = nationalityNode["KeyPoints"]["keyPointsItem"];
	for (auto nationalityNodeKeyPointskeyPointsItem : allKeyPoints51Node)
	{
		Data::Nationality::KeyPointsItem52 keyPointsItem52Object;
		if(!nationalityNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem52Object.x = std::stof(nationalityNodeKeyPointskeyPointsItem["X"].asString());
		if(!nationalityNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem52Object.y = std::stof(nationalityNodeKeyPointskeyPointsItem["Y"].asString());
		data_.nationality.keyPoints51.push_back(keyPointsItem52Object);
	}
	auto neighborhoodVillageNode = dataNode["NeighborhoodVillage"];
	if(!neighborhoodVillageNode["Text"].isNull())
		data_.neighborhoodVillage.text = neighborhoodVillageNode["Text"].asString();
	if(!neighborhoodVillageNode["Score"].isNull())
		data_.neighborhoodVillage.score = std::stof(neighborhoodVillageNode["Score"].asString());
	auto allKeyPoints53Node = neighborhoodVillageNode["KeyPoints"]["keyPointsItem"];
	for (auto neighborhoodVillageNodeKeyPointskeyPointsItem : allKeyPoints53Node)
	{
		Data::NeighborhoodVillage::KeyPointsItem54 keyPointsItem54Object;
		if(!neighborhoodVillageNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem54Object.x = std::stof(neighborhoodVillageNodeKeyPointskeyPointsItem["X"].asString());
		if(!neighborhoodVillageNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem54Object.y = std::stof(neighborhoodVillageNodeKeyPointskeyPointsItem["Y"].asString());
		data_.neighborhoodVillage.keyPoints53.push_back(keyPointsItem54Object);
	}
	auto pageNumberNode = dataNode["PageNumber"];
	if(!pageNumberNode["Text"].isNull())
		data_.pageNumber.text = pageNumberNode["Text"].asString();
	if(!pageNumberNode["Score"].isNull())
		data_.pageNumber.score = std::stof(pageNumberNode["Score"].asString());
	auto allKeyPoints55Node = pageNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto pageNumberNodeKeyPointskeyPointsItem : allKeyPoints55Node)
	{
		Data::PageNumber::KeyPointsItem56 keyPointsItem56Object;
		if(!pageNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem56Object.x = std::stof(pageNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!pageNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem56Object.y = std::stof(pageNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.pageNumber.keyPoints55.push_back(keyPointsItem56Object);
	}
	auto passportNumberNode = dataNode["PassportNumber"];
	if(!passportNumberNode["Text"].isNull())
		data_.passportNumber.text = passportNumberNode["Text"].asString();
	if(!passportNumberNode["Score"].isNull())
		data_.passportNumber.score = std::stof(passportNumberNode["Score"].asString());
	auto allKeyPoints57Node = passportNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto passportNumberNodeKeyPointskeyPointsItem : allKeyPoints57Node)
	{
		Data::PassportNumber::KeyPointsItem58 keyPointsItem58Object;
		if(!passportNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem58Object.x = std::stof(passportNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!passportNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem58Object.y = std::stof(passportNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.passportNumber.keyPoints57.push_back(keyPointsItem58Object);
	}
	auto portraitBoxNode = dataNode["PortraitBox"];
	if(!portraitBoxNode["Text"].isNull())
		data_.portraitBox.text = portraitBoxNode["Text"].asString();
	if(!portraitBoxNode["Score"].isNull())
		data_.portraitBox.score = std::stof(portraitBoxNode["Score"].asString());
	auto allKeyPoints59Node = portraitBoxNode["KeyPoints"]["keyPointsItem"];
	for (auto portraitBoxNodeKeyPointskeyPointsItem : allKeyPoints59Node)
	{
		Data::PortraitBox::KeyPointsItem60 keyPointsItem60Object;
		if(!portraitBoxNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem60Object.x = std::stof(portraitBoxNodeKeyPointskeyPointsItem["X"].asString());
		if(!portraitBoxNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem60Object.y = std::stof(portraitBoxNodeKeyPointskeyPointsItem["Y"].asString());
		data_.portraitBox.keyPoints59.push_back(keyPointsItem60Object);
	}
	auto provinceNode = dataNode["Province"];
	if(!provinceNode["Text"].isNull())
		data_.province.text = provinceNode["Text"].asString();
	if(!provinceNode["Score"].isNull())
		data_.province.score = std::stof(provinceNode["Score"].asString());
	auto allKeyPoints61Node = provinceNode["KeyPoints"]["keyPointsItem"];
	for (auto provinceNodeKeyPointskeyPointsItem : allKeyPoints61Node)
	{
		Data::Province::KeyPointsItem62 keyPointsItem62Object;
		if(!provinceNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem62Object.x = std::stof(provinceNodeKeyPointskeyPointsItem["X"].asString());
		if(!provinceNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem62Object.y = std::stof(provinceNodeKeyPointskeyPointsItem["Y"].asString());
		data_.province.keyPoints61.push_back(keyPointsItem62Object);
	}
	auto provinceOfResidenceNode = dataNode["ProvinceOfResidence"];
	if(!provinceOfResidenceNode["Text"].isNull())
		data_.provinceOfResidence.text = provinceOfResidenceNode["Text"].asString();
	if(!provinceOfResidenceNode["Score"].isNull())
		data_.provinceOfResidence.score = std::stof(provinceOfResidenceNode["Score"].asString());
	auto allKeyPoints63Node = provinceOfResidenceNode["KeyPoints"]["keyPointsItem"];
	for (auto provinceOfResidenceNodeKeyPointskeyPointsItem : allKeyPoints63Node)
	{
		Data::ProvinceOfResidence::KeyPointsItem64 keyPointsItem64Object;
		if(!provinceOfResidenceNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem64Object.x = std::stof(provinceOfResidenceNodeKeyPointskeyPointsItem["X"].asString());
		if(!provinceOfResidenceNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem64Object.y = std::stof(provinceOfResidenceNodeKeyPointskeyPointsItem["Y"].asString());
		data_.provinceOfResidence.keyPoints63.push_back(keyPointsItem64Object);
	}
	auto reasonOfIssueNode = dataNode["ReasonOfIssue"];
	if(!reasonOfIssueNode["Text"].isNull())
		data_.reasonOfIssue.text = reasonOfIssueNode["Text"].asString();
	if(!reasonOfIssueNode["Score"].isNull())
		data_.reasonOfIssue.score = std::stof(reasonOfIssueNode["Score"].asString());
	auto allKeyPoints65Node = reasonOfIssueNode["KeyPoints"]["keyPointsItem"];
	for (auto reasonOfIssueNodeKeyPointskeyPointsItem : allKeyPoints65Node)
	{
		Data::ReasonOfIssue::KeyPointsItem66 keyPointsItem66Object;
		if(!reasonOfIssueNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem66Object.x = std::stof(reasonOfIssueNodeKeyPointskeyPointsItem["X"].asString());
		if(!reasonOfIssueNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem66Object.y = std::stof(reasonOfIssueNodeKeyPointskeyPointsItem["Y"].asString());
		data_.reasonOfIssue.keyPoints65.push_back(keyPointsItem66Object);
	}
	auto registerNumberNode = dataNode["RegisterNumber"];
	if(!registerNumberNode["Text"].isNull())
		data_.registerNumber.text = registerNumberNode["Text"].asString();
	if(!registerNumberNode["Score"].isNull())
		data_.registerNumber.score = std::stof(registerNumberNode["Score"].asString());
	auto allKeyPoints67Node = registerNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto registerNumberNodeKeyPointskeyPointsItem : allKeyPoints67Node)
	{
		Data::RegisterNumber::KeyPointsItem68 keyPointsItem68Object;
		if(!registerNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem68Object.x = std::stof(registerNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!registerNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem68Object.y = std::stof(registerNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.registerNumber.keyPoints67.push_back(keyPointsItem68Object);
	}
	auto religionNode = dataNode["Religion"];
	if(!religionNode["Text"].isNull())
		data_.religion.text = religionNode["Text"].asString();
	if(!religionNode["Score"].isNull())
		data_.religion.score = std::stof(religionNode["Score"].asString());
	auto allKeyPoints69Node = religionNode["KeyPoints"]["keyPointsItem"];
	for (auto religionNodeKeyPointskeyPointsItem : allKeyPoints69Node)
	{
		Data::Religion::KeyPointsItem70 keyPointsItem70Object;
		if(!religionNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem70Object.x = std::stof(religionNodeKeyPointskeyPointsItem["X"].asString());
		if(!religionNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem70Object.y = std::stof(religionNodeKeyPointskeyPointsItem["Y"].asString());
		data_.religion.keyPoints69.push_back(keyPointsItem70Object);
	}
	auto sayfaNode = dataNode["Sayfa"];
	if(!sayfaNode["Text"].isNull())
		data_.sayfa.text = sayfaNode["Text"].asString();
	if(!sayfaNode["Score"].isNull())
		data_.sayfa.score = std::stof(sayfaNode["Score"].asString());
	auto allKeyPoints71Node = sayfaNode["KeyPoints"]["keyPointsItem"];
	for (auto sayfaNodeKeyPointskeyPointsItem : allKeyPoints71Node)
	{
		Data::Sayfa::KeyPointsItem72 keyPointsItem72Object;
		if(!sayfaNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem72Object.x = std::stof(sayfaNodeKeyPointskeyPointsItem["X"].asString());
		if(!sayfaNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem72Object.y = std::stof(sayfaNodeKeyPointskeyPointsItem["Y"].asString());
		data_.sayfa.keyPoints71.push_back(keyPointsItem72Object);
	}
	auto seriNode = dataNode["Seri"];
	if(!seriNode["Text"].isNull())
		data_.seri.text = seriNode["Text"].asString();
	if(!seriNode["Score"].isNull())
		data_.seri.score = std::stof(seriNode["Score"].asString());
	auto allKeyPoints73Node = seriNode["KeyPoints"]["keyPointsItem"];
	for (auto seriNodeKeyPointskeyPointsItem : allKeyPoints73Node)
	{
		Data::Seri::KeyPointsItem74 keyPointsItem74Object;
		if(!seriNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem74Object.x = std::stof(seriNodeKeyPointskeyPointsItem["X"].asString());
		if(!seriNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem74Object.y = std::stof(seriNodeKeyPointskeyPointsItem["Y"].asString());
		data_.seri.keyPoints73.push_back(keyPointsItem74Object);
	}
	auto surnameNode = dataNode["Surname"];
	if(!surnameNode["Text"].isNull())
		data_.surname.text = surnameNode["Text"].asString();
	if(!surnameNode["Score"].isNull())
		data_.surname.score = std::stof(surnameNode["Score"].asString());
	auto allKeyPoints75Node = surnameNode["KeyPoints"]["keyPointsItem"];
	for (auto surnameNodeKeyPointskeyPointsItem : allKeyPoints75Node)
	{
		Data::Surname::KeyPointsItem76 keyPointsItem76Object;
		if(!surnameNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem76Object.x = std::stof(surnameNodeKeyPointskeyPointsItem["X"].asString());
		if(!surnameNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem76Object.y = std::stof(surnameNodeKeyPointskeyPointsItem["Y"].asString());
		data_.surname.keyPoints75.push_back(keyPointsItem76Object);
	}
	auto typeOfResidencePermitNode = dataNode["TypeOfResidencePermit"];
	if(!typeOfResidencePermitNode["Text"].isNull())
		data_.typeOfResidencePermit.text = typeOfResidencePermitNode["Text"].asString();
	if(!typeOfResidencePermitNode["Score"].isNull())
		data_.typeOfResidencePermit.score = std::stof(typeOfResidencePermitNode["Score"].asString());
	auto allKeyPoints77Node = typeOfResidencePermitNode["KeyPoints"]["keyPointsItem"];
	for (auto typeOfResidencePermitNodeKeyPointskeyPointsItem : allKeyPoints77Node)
	{
		Data::TypeOfResidencePermit::KeyPointsItem78 keyPointsItem78Object;
		if(!typeOfResidencePermitNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem78Object.x = std::stof(typeOfResidencePermitNodeKeyPointskeyPointsItem["X"].asString());
		if(!typeOfResidencePermitNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem78Object.y = std::stof(typeOfResidencePermitNodeKeyPointskeyPointsItem["Y"].asString());
		data_.typeOfResidencePermit.keyPoints77.push_back(keyPointsItem78Object);
	}
	auto validUntilNode = dataNode["ValidUntil"];
	if(!validUntilNode["Text"].isNull())
		data_.validUntil.text = validUntilNode["Text"].asString();
	if(!validUntilNode["Score"].isNull())
		data_.validUntil.score = std::stof(validUntilNode["Score"].asString());
	auto allKeyPoints79Node = validUntilNode["KeyPoints"]["keyPointsItem"];
	for (auto validUntilNodeKeyPointskeyPointsItem : allKeyPoints79Node)
	{
		Data::ValidUntil::KeyPointsItem80 keyPointsItem80Object;
		if(!validUntilNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem80Object.x = std::stof(validUntilNodeKeyPointskeyPointsItem["X"].asString());
		if(!validUntilNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem80Object.y = std::stof(validUntilNodeKeyPointskeyPointsItem["Y"].asString());
		data_.validUntil.keyPoints79.push_back(keyPointsItem80Object);
	}
	auto villageNode = dataNode["Village"];
	if(!villageNode["Text"].isNull())
		data_.village.text = villageNode["Text"].asString();
	if(!villageNode["Score"].isNull())
		data_.village.score = std::stof(villageNode["Score"].asString());
	auto allKeyPoints81Node = villageNode["KeyPoints"]["keyPointsItem"];
	for (auto villageNodeKeyPointskeyPointsItem : allKeyPoints81Node)
	{
		Data::Village::KeyPointsItem82 keyPointsItem82Object;
		if(!villageNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem82Object.x = std::stof(villageNodeKeyPointskeyPointsItem["X"].asString());
		if(!villageNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem82Object.y = std::stof(villageNodeKeyPointskeyPointsItem["Y"].asString());
		data_.village.keyPoints81.push_back(keyPointsItem82Object);
	}
	auto volumeNumberNode = dataNode["VolumeNumber"];
	if(!volumeNumberNode["Text"].isNull())
		data_.volumeNumber.text = volumeNumberNode["Text"].asString();
	if(!volumeNumberNode["Score"].isNull())
		data_.volumeNumber.score = std::stof(volumeNumberNode["Score"].asString());
	auto allKeyPoints83Node = volumeNumberNode["KeyPoints"]["keyPointsItem"];
	for (auto volumeNumberNodeKeyPointskeyPointsItem : allKeyPoints83Node)
	{
		Data::VolumeNumber::KeyPointsItem84 keyPointsItem84Object;
		if(!volumeNumberNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem84Object.x = std::stof(volumeNumberNodeKeyPointskeyPointsItem["X"].asString());
		if(!volumeNumberNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem84Object.y = std::stof(volumeNumberNodeKeyPointskeyPointsItem["Y"].asString());
		data_.volumeNumber.keyPoints83.push_back(keyPointsItem84Object);
	}
	auto sexNode = dataNode["Sex"];
	if(!sexNode["Text"].isNull())
		data_.sex.text = sexNode["Text"].asString();
	if(!sexNode["Score"].isNull())
		data_.sex.score = std::stof(sexNode["Score"].asString());
	auto allKeyPoints85Node = sexNode["KeyPoints"]["keyPointsItem"];
	for (auto sexNodeKeyPointskeyPointsItem : allKeyPoints85Node)
	{
		Data::Sex::KeyPointsItem86 keyPointsItem86Object;
		if(!sexNodeKeyPointskeyPointsItem["X"].isNull())
			keyPointsItem86Object.x = std::stof(sexNodeKeyPointskeyPointsItem["X"].asString());
		if(!sexNodeKeyPointskeyPointsItem["Y"].isNull())
			keyPointsItem86Object.y = std::stof(sexNodeKeyPointskeyPointsItem["Y"].asString());
		data_.sex.keyPoints85.push_back(keyPointsItem86Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeTurkeyIdentityCardResult::getMessage()const
{
	return message_;
}

RecognizeTurkeyIdentityCardResult::Data RecognizeTurkeyIdentityCardResult::getData()const
{
	return data_;
}

std::string RecognizeTurkeyIdentityCardResult::getCode()const
{
	return code_;
}

