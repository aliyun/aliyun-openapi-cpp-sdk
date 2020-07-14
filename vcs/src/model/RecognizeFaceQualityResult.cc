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

#include <alibabacloud/vcs/model/RecognizeFaceQualityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

RecognizeFaceQualityResult::RecognizeFaceQualityResult() :
	ServiceResult()
{}

RecognizeFaceQualityResult::RecognizeFaceQualityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeFaceQualityResult::~RecognizeFaceQualityResult()
{}

void RecognizeFaceQualityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["QualityScore"].isNull())
		data_.qualityScore = dataNode["QualityScore"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	auto attributesNode = dataNode["Attributes"];
	if(!attributesNode["LeftTopX"].isNull())
		data_.attributes.leftTopX = std::stoi(attributesNode["LeftTopX"].asString());
	if(!attributesNode["LeftTopY"].isNull())
		data_.attributes.leftTopY = std::stoi(attributesNode["LeftTopY"].asString());
	if(!attributesNode["RightBottomX"].isNull())
		data_.attributes.rightBottomX = std::stoi(attributesNode["RightBottomX"].asString());
	if(!attributesNode["RightBottomY"].isNull())
		data_.attributes.rightBottomY = std::stoi(attributesNode["RightBottomY"].asString());
	if(!attributesNode["TargetImageStoragePath"].isNull())
		data_.attributes.targetImageStoragePath = attributesNode["TargetImageStoragePath"].asString();
	if(!attributesNode["FaceStyle"].isNull())
		data_.attributes.faceStyle = attributesNode["FaceStyle"].asString();
	if(!attributesNode["FaceQuality"].isNull())
		data_.attributes.faceQuality = attributesNode["FaceQuality"].asString();
	if(!attributesNode["FaceScore"].isNull())
		data_.attributes.faceScore = attributesNode["FaceScore"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeFaceQualityResult::getMessage()const
{
	return message_;
}

RecognizeFaceQualityResult::Data RecognizeFaceQualityResult::getData()const
{
	return data_;
}

std::string RecognizeFaceQualityResult::getCode()const
{
	return code_;
}

