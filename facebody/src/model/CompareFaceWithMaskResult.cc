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

#include <alibabacloud/facebody/model/CompareFaceWithMaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

CompareFaceWithMaskResult::CompareFaceWithMaskResult() :
	ServiceResult()
{}

CompareFaceWithMaskResult::CompareFaceWithMaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CompareFaceWithMaskResult::~CompareFaceWithMaskResult()
{}

void CompareFaceWithMaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Confidence"].isNull())
		data_.confidence = std::stof(dataNode["Confidence"].asString());
	if(!dataNode["IsMaskA"].isNull())
		data_.isMaskA = std::stol(dataNode["IsMaskA"].asString());
	if(!dataNode["IsMaskB"].isNull())
		data_.isMaskB = std::stol(dataNode["IsMaskB"].asString());
	if(!dataNode["QualityScoreA"].isNull())
		data_.qualityScoreA = std::stof(dataNode["QualityScoreA"].asString());
	if(!dataNode["QualityScoreB"].isNull())
		data_.qualityScoreB = std::stof(dataNode["QualityScoreB"].asString());
	if(!dataNode["MessageTips"].isNull())
		data_.messageTips = dataNode["MessageTips"].asString();
		auto allLandmarksAList = dataNode["LandmarksAList"]["landmarksAList"];
		for (auto value : allLandmarksAList)
			data_.landmarksAList.push_back(value.asString());
		auto allLandmarksBList = dataNode["LandmarksBList"]["landmarksBList"];
		for (auto value : allLandmarksBList)
			data_.landmarksBList.push_back(value.asString());
		auto allRectAList = dataNode["RectAList"]["rectAList"];
		for (auto value : allRectAList)
			data_.rectAList.push_back(value.asString());
		auto allRectBList = dataNode["RectBList"]["rectBList"];
		for (auto value : allRectBList)
			data_.rectBList.push_back(value.asString());
		auto allThresholds = dataNode["Thresholds"]["thresholds"];
		for (auto value : allThresholds)
			data_.thresholds.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CompareFaceWithMaskResult::getMessage()const
{
	return message_;
}

CompareFaceWithMaskResult::Data CompareFaceWithMaskResult::getData()const
{
	return data_;
}

std::string CompareFaceWithMaskResult::getCode()const
{
	return code_;
}

