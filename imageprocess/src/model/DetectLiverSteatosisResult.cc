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

#include <alibabacloud/imageprocess/model/DetectLiverSteatosisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

DetectLiverSteatosisResult::DetectLiverSteatosisResult() :
	ServiceResult()
{}

DetectLiverSteatosisResult::DetectLiverSteatosisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectLiverSteatosisResult::~DetectLiverSteatosisResult()
{}

void DetectLiverSteatosisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDetectionsNode = dataNode["Detections"]["DetectionsItem"];
	for (auto dataNodeDetectionsDetectionsItem : allDetectionsNode)
	{
		Data::DetectionsItem detectionsItemObject;
		if(!dataNodeDetectionsDetectionsItem["Radius"].isNull())
			detectionsItemObject.radius = std::stol(dataNodeDetectionsDetectionsItem["Radius"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverSlice"].isNull())
			detectionsItemObject.liverSlice = std::stof(dataNodeDetectionsDetectionsItem["LiverSlice"].asString());
		if(!dataNodeDetectionsDetectionsItem["SpleenSlice"].isNull())
			detectionsItemObject.spleenSlice = std::stof(dataNodeDetectionsDetectionsItem["SpleenSlice"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverVolume"].isNull())
			detectionsItemObject.liverVolume = std::stof(dataNodeDetectionsDetectionsItem["LiverVolume"].asString());
		if(!dataNodeDetectionsDetectionsItem["SpleenVolume"].isNull())
			detectionsItemObject.spleenVolume = std::stof(dataNodeDetectionsDetectionsItem["SpleenVolume"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverHU"].isNull())
			detectionsItemObject.liverHU = std::stof(dataNodeDetectionsDetectionsItem["LiverHU"].asString());
		if(!dataNodeDetectionsDetectionsItem["SpleenHU"].isNull())
			detectionsItemObject.spleenHU = std::stof(dataNodeDetectionsDetectionsItem["SpleenHU"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverROI1"].isNull())
			detectionsItemObject.liverROI1 = std::stof(dataNodeDetectionsDetectionsItem["LiverROI1"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverROI2"].isNull())
			detectionsItemObject.liverROI2 = std::stof(dataNodeDetectionsDetectionsItem["LiverROI2"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverROI3"].isNull())
			detectionsItemObject.liverROI3 = std::stof(dataNodeDetectionsDetectionsItem["LiverROI3"].asString());
		if(!dataNodeDetectionsDetectionsItem["SpleenROI"].isNull())
			detectionsItemObject.spleenROI = std::stof(dataNodeDetectionsDetectionsItem["SpleenROI"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverSpleenDifference"].isNull())
			detectionsItemObject.liverSpleenDifference = std::stof(dataNodeDetectionsDetectionsItem["LiverSpleenDifference"].asString());
		if(!dataNodeDetectionsDetectionsItem["LiverSpleenRatio"].isNull())
			detectionsItemObject.liverSpleenRatio = std::stof(dataNodeDetectionsDetectionsItem["LiverSpleenRatio"].asString());
		if(!dataNodeDetectionsDetectionsItem["Prediction"].isNull())
			detectionsItemObject.prediction = dataNodeDetectionsDetectionsItem["Prediction"].asString();
		if(!dataNodeDetectionsDetectionsItem["Probability"].isNull())
			detectionsItemObject.probability = std::stof(dataNodeDetectionsDetectionsItem["Probability"].asString());
		auto allROI1Center = value["ROI1Center"]["ROI1Center"];
		for (auto value : allROI1Center)
			detectionsItemObject.rOI1Center.push_back(value.asString());
		auto allROI2Center = value["ROI2Center"]["ROI2Center"];
		for (auto value : allROI2Center)
			detectionsItemObject.rOI2Center.push_back(value.asString());
		auto allROI3Center = value["ROI3Center"]["ROI3Center"];
		for (auto value : allROI3Center)
			detectionsItemObject.rOI3Center.push_back(value.asString());
		auto allSpleenCenter = value["SpleenCenter"]["SpleenCenter"];
		for (auto value : allSpleenCenter)
			detectionsItemObject.spleenCenter.push_back(value.asString());
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

std::string DetectLiverSteatosisResult::getMessage()const
{
	return message_;
}

DetectLiverSteatosisResult::Data DetectLiverSteatosisResult::getData()const
{
	return data_;
}

std::string DetectLiverSteatosisResult::getCode()const
{
	return code_;
}

