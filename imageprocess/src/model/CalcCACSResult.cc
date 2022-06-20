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

#include <alibabacloud/imageprocess/model/CalcCACSResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

CalcCACSResult::CalcCACSResult() :
	ServiceResult()
{}

CalcCACSResult::CalcCACSResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CalcCACSResult::~CalcCACSResult()
{}

void CalcCACSResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ResultUrl"].isNull())
		data_.resultUrl = dataNode["ResultUrl"].asString();
	if(!dataNode["Score"].isNull())
		data_.score = dataNode["Score"].asString();
	if(!dataNode["VolumeScore"].isNull())
		data_.volumeScore = dataNode["VolumeScore"].asString();
	auto allDetectionsNode = dataNode["Detections"]["detectionsItem"];
	for (auto dataNodeDetectionsdetectionsItem : allDetectionsNode)
	{
		Data::DetectionsItem detectionsItemObject;
		if(!dataNodeDetectionsdetectionsItem["CalciumId"].isNull())
			detectionsItemObject.calciumId = std::stol(dataNodeDetectionsdetectionsItem["CalciumId"].asString());
		if(!dataNodeDetectionsdetectionsItem["CalciumScore"].isNull())
			detectionsItemObject.calciumScore = std::stof(dataNodeDetectionsdetectionsItem["CalciumScore"].asString());
		if(!dataNodeDetectionsdetectionsItem["CalciumVolume"].isNull())
			detectionsItemObject.calciumVolume = std::stof(dataNodeDetectionsdetectionsItem["CalciumVolume"].asString());
		auto allCalciumCenter = value["CalciumCenter"]["calciumCenter"];
		for (auto value : allCalciumCenter)
			detectionsItemObject.calciumCenter.push_back(value.asString());
		data_.detections.push_back(detectionsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CalcCACSResult::getMessage()const
{
	return message_;
}

CalcCACSResult::Data CalcCACSResult::getData()const
{
	return data_;
}

std::string CalcCACSResult::getCode()const
{
	return code_;
}

