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

#include <alibabacloud/imageprocess/model/CalcBMDResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

CalcBMDResult::CalcBMDResult() :
	ServiceResult()
{}

CalcBMDResult::CalcBMDResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CalcBMDResult::~CalcBMDResult()
{}

void CalcBMDResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ResultURL"].isNull())
		data_.resultURL = dataNode["ResultURL"].asString();
	auto allDetectionsNode = dataNode["Detections"]["DetectionsItem"];
	for (auto dataNodeDetectionsDetectionsItem : allDetectionsNode)
	{
		Data::DetectionsItem detectionsItemObject;
		if(!dataNodeDetectionsDetectionsItem["VertId"].isNull())
			detectionsItemObject.vertId = dataNodeDetectionsDetectionsItem["VertId"].asString();
		if(!dataNodeDetectionsDetectionsItem["VertBMD"].isNull())
			detectionsItemObject.vertBMD = std::stof(dataNodeDetectionsDetectionsItem["VertBMD"].asString());
		if(!dataNodeDetectionsDetectionsItem["VertTScore"].isNull())
			detectionsItemObject.vertTScore = std::stof(dataNodeDetectionsDetectionsItem["VertTScore"].asString());
		if(!dataNodeDetectionsDetectionsItem["VertZScore"].isNull())
			detectionsItemObject.vertZScore = std::stof(dataNodeDetectionsDetectionsItem["VertZScore"].asString());
		if(!dataNodeDetectionsDetectionsItem["VertCategory"].isNull())
			detectionsItemObject.vertCategory = std::stof(dataNodeDetectionsDetectionsItem["VertCategory"].asString());
		data_.detections.push_back(detectionsItemObject);
	}
		auto allSpacing = dataNode["Spacing"]["Spacing"];
		for (auto value : allSpacing)
			data_.spacing.push_back(value.asString());
		auto allOrigin = dataNode["Origin"]["Origin"];
		for (auto value : allOrigin)
			data_.origin.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CalcBMDResult::getMessage()const
{
	return message_;
}

CalcBMDResult::Data CalcBMDResult::getData()const
{
	return data_;
}

std::string CalcBMDResult::getCode()const
{
	return code_;
}

