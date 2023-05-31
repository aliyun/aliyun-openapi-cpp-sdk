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

#include <alibabacloud/imageprocess/model/ScreenLCResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

ScreenLCResult::ScreenLCResult() :
	ServiceResult()
{}

ScreenLCResult::ScreenLCResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScreenLCResult::~ScreenLCResult()
{}

void ScreenLCResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto lesionNode = dataNode["Lesion"];
	if(!lesionNode["Mask"].isNull())
		data_.lesion.mask = lesionNode["Mask"].asString();
	if(!lesionNode["LiverVolume"].isNull())
		data_.lesion.liverVolume = std::stof(lesionNode["LiverVolume"].asString());
	auto allLesionListNode = lesionNode["LesionList"]["LesionListItem"];
	for (auto lesionNodeLesionListLesionListItem : allLesionListNode)
	{
		Data::Lesion::LesionListItem lesionListItemObject;
		if(!lesionNodeLesionListLesionListItem["Type"].isNull())
			lesionListItemObject.type = lesionNodeLesionListLesionListItem["Type"].asString();
		if(!lesionNodeLesionListLesionListItem["Volume"].isNull())
			lesionListItemObject.volume = std::stof(lesionNodeLesionListLesionListItem["Volume"].asString());
		if(!lesionNodeLesionListLesionListItem["KeySlice"].isNull())
			lesionListItemObject.keySlice = std::stol(lesionNodeLesionListLesionListItem["KeySlice"].asString());
		if(!lesionNodeLesionListLesionListItem["Malignancy"].isNull())
			lesionListItemObject.malignancy = std::stof(lesionNodeLesionListLesionListItem["Malignancy"].asString());
		auto allRecistEndpoints = value["RecistEndpoints"]["RecistEndpoints"];
		for (auto value : allRecistEndpoints)
			lesionListItemObject.recistEndpoints.push_back(value.asString());
		auto allDiameter = value["Diameter"]["Diameter"];
		for (auto value : allDiameter)
			lesionListItemObject.diameter.push_back(value.asString());
		data_.lesion.lesionList.push_back(lesionListItemObject);
	}
	auto patientLevelResultNode = lesionNode["PatientLevelResult"];
	if(!patientLevelResultNode["TumorNonCystProb"].isNull())
		data_.lesion.patientLevelResult.tumorNonCystProb = std::stof(patientLevelResultNode["TumorNonCystProb"].asString());
	if(!patientLevelResultNode["HCCProb"].isNull())
		data_.lesion.patientLevelResult.hCCProb = std::stof(patientLevelResultNode["HCCProb"].asString());
	if(!patientLevelResultNode["MalignantNonHCCProb"].isNull())
		data_.lesion.patientLevelResult.malignantNonHCCProb = std::stof(patientLevelResultNode["MalignantNonHCCProb"].asString());
	if(!patientLevelResultNode["BenignNonCystProb"].isNull())
		data_.lesion.patientLevelResult.benignNonCystProb = patientLevelResultNode["BenignNonCystProb"].asString();
	if(!patientLevelResultNode["CystProb"].isNull())
		data_.lesion.patientLevelResult.cystProb = std::stof(patientLevelResultNode["CystProb"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ScreenLCResult::getMessage()const
{
	return message_;
}

ScreenLCResult::Data ScreenLCResult::getData()const
{
	return data_;
}

std::string ScreenLCResult::getCode()const
{
	return code_;
}

