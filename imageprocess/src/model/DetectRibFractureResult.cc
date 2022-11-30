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

#include <alibabacloud/imageprocess/model/DetectRibFractureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

DetectRibFractureResult::DetectRibFractureResult() :
	ServiceResult()
{}

DetectRibFractureResult::DetectRibFractureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectRibFractureResult::~DetectRibFractureResult()
{}

void DetectRibFractureResult::parse(const std::string &payload)
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
		if(!dataNodeDetectionsDetectionsItem["FractureId"].isNull())
			detectionsItemObject.fractureId = std::stoi(dataNodeDetectionsDetectionsItem["FractureId"].asString());
		if(!dataNodeDetectionsDetectionsItem["FractureConfidence"].isNull())
			detectionsItemObject.fractureConfidence = std::stof(dataNodeDetectionsDetectionsItem["FractureConfidence"].asString());
		if(!dataNodeDetectionsDetectionsItem["FractureCategory"].isNull())
			detectionsItemObject.fractureCategory = dataNodeDetectionsDetectionsItem["FractureCategory"].asString();
		if(!dataNodeDetectionsDetectionsItem["FractureLocation"].isNull())
			detectionsItemObject.fractureLocation = dataNodeDetectionsDetectionsItem["FractureLocation"].asString();
		if(!dataNodeDetectionsDetectionsItem["FractureSegment"].isNull())
			detectionsItemObject.fractureSegment = std::stol(dataNodeDetectionsDetectionsItem["FractureSegment"].asString());
		if(!dataNodeDetectionsDetectionsItem["FracSOPInstanceUID"].isNull())
			detectionsItemObject.fracSOPInstanceUID = dataNodeDetectionsDetectionsItem["FracSOPInstanceUID"].asString();
		auto allCoordinates = value["Coordinates"]["Coordinates"];
		for (auto value : allCoordinates)
			detectionsItemObject.coordinates.push_back(value.asString());
		auto allCoordinateImage = value["CoordinateImage"]["CoordinateImage"];
		for (auto value : allCoordinateImage)
			detectionsItemObject.coordinateImage.push_back(value.asString());
		data_.detections.push_back(detectionsItemObject);
	}
		auto allOrigin = dataNode["Origin"]["Origin"];
		for (auto value : allOrigin)
			data_.origin.push_back(value.asString());
		auto allSpacing = dataNode["Spacing"]["Spacing"];
		for (auto value : allSpacing)
			data_.spacing.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectRibFractureResult::getMessage()const
{
	return message_;
}

DetectRibFractureResult::Data DetectRibFractureResult::getData()const
{
	return data_;
}

std::string DetectRibFractureResult::getCode()const
{
	return code_;
}

