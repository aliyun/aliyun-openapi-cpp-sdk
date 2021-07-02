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

#include <alibabacloud/imageprocess/model/AnalyzeChestVesselResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

AnalyzeChestVesselResult::AnalyzeChestVesselResult() :
	ServiceResult()
{}

AnalyzeChestVesselResult::AnalyzeChestVesselResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AnalyzeChestVesselResult::~AnalyzeChestVesselResult()
{}

void AnalyzeChestVesselResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ResultURL"].isNull())
		data_.resultURL = dataNode["ResultURL"].asString();
	auto aortaInfoNode = dataNode["AortaInfo"];
	if(!aortaInfoNode["MaxAreaIndex"].isNull())
		data_.aortaInfo.maxAreaIndex = std::stol(aortaInfoNode["MaxAreaIndex"].asString());
	if(!aortaInfoNode["MaxArea"].isNull())
		data_.aortaInfo.maxArea = std::stof(aortaInfoNode["MaxArea"].asString());
	if(!aortaInfoNode["MaxDiameter"].isNull())
		data_.aortaInfo.maxDiameter = std::stof(aortaInfoNode["MaxDiameter"].asString());
	if(!aortaInfoNode["LabelValue"].isNull())
		data_.aortaInfo.labelValue = std::stol(aortaInfoNode["LabelValue"].asString());
		auto allCoordinates = aortaInfoNode["Coordinates"]["coordinates"];
		for (auto value : allCoordinates)
			data_.aortaInfo.coordinates.push_back(value.asString());
		auto allArea = aortaInfoNode["Area"]["area"];
		for (auto value : allArea)
			data_.aortaInfo.area.push_back(value.asString());
	auto pulmonaryInfoNode = dataNode["PulmonaryInfo"];
	if(!pulmonaryInfoNode["MaxAreaIndex"].isNull())
		data_.pulmonaryInfo.maxAreaIndex = std::stol(pulmonaryInfoNode["MaxAreaIndex"].asString());
	if(!pulmonaryInfoNode["MaxArea"].isNull())
		data_.pulmonaryInfo.maxArea = std::stof(pulmonaryInfoNode["MaxArea"].asString());
	if(!pulmonaryInfoNode["MaxDiameter"].isNull())
		data_.pulmonaryInfo.maxDiameter = std::stof(pulmonaryInfoNode["MaxDiameter"].asString());
	if(!pulmonaryInfoNode["LabelValue"].isNull())
		data_.pulmonaryInfo.labelValue = std::stol(pulmonaryInfoNode["LabelValue"].asString());
	if(!pulmonaryInfoNode["NearestAortaArea"].isNull())
		data_.pulmonaryInfo.nearestAortaArea = std::stof(pulmonaryInfoNode["NearestAortaArea"].asString());
		auto allCoordinates1 = pulmonaryInfoNode["Coordinates"]["coordinates"];
		for (auto value : allCoordinates1)
			data_.pulmonaryInfo.coordinates1.push_back(value.asString());
		auto allArea2 = pulmonaryInfoNode["Area"]["area"];
		for (auto value : allArea2)
			data_.pulmonaryInfo.area2.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AnalyzeChestVesselResult::getMessage()const
{
	return message_;
}

AnalyzeChestVesselResult::Data AnalyzeChestVesselResult::getData()const
{
	return data_;
}

std::string AnalyzeChestVesselResult::getCode()const
{
	return code_;
}

