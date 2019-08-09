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

#include <alibabacloud/imm/model/SearchFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

SearchFaceResult::SearchFaceResult() :
	ServiceResult()
{}

SearchFaceResult::SearchFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchFaceResult::~SearchFaceResult()
{}

void SearchFaceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allResultFaces = value["ResultFaces"]["ResultFacesItem"];
	for (auto value : allResultFaces)
	{
		ResultFacesItem resultFacesObject;
		if(!value["GroupId"].isNull())
			resultFacesObject.groupId = value["GroupId"].asString();
		if(!value["User"].isNull())
			resultFacesObject.user = value["User"].asString();
		if(!value["ImageId"].isNull())
			resultFacesObject.imageId = value["ImageId"].asString();
		if(!value["Score"].isNull())
			resultFacesObject.score = std::stof(value["Score"].asString());
		if(!value["ImageUri"].isNull())
			resultFacesObject.imageUri = value["ImageUri"].asString();
		if(!value["Glasses"].isNull())
			resultFacesObject.glasses = std::stoi(value["Glasses"].asString());
		if(!value["Hat"].isNull())
			resultFacesObject.hat = std::stoi(value["Hat"].asString());
		auto allAxis1 = value["Axis"]["Axis"];
		for (auto value : allAxis1)
			resultFacesObject.axis1.push_back(value.asString());
		resultFaces_.push_back(resultFacesObject);
	}
	auto allAxis = value["Axis"]["Axis"];
	for (const auto &item : allAxis)
		axis_.push_back(item.asString());
	if(!value["ImageUri"].isNull())
		imageUri_ = value["ImageUri"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["Glasses"].isNull())
		glasses_ = std::stoi(value["Glasses"].asString());
	if(!value["Hat"].isNull())
		hat_ = std::stoi(value["Hat"].asString());
	if(!value["Score"].isNull())
		score_ = std::stof(value["Score"].asString());

}

std::string SearchFaceResult::getGroupName()const
{
	return groupName_;
}

float SearchFaceResult::getScore()const
{
	return score_;
}

std::vector<SearchFaceResult::ResultFacesItem> SearchFaceResult::getResultFaces()const
{
	return resultFaces_;
}

int SearchFaceResult::getGlasses()const
{
	return glasses_;
}

int SearchFaceResult::getHat()const
{
	return hat_;
}

std::string SearchFaceResult::getImageUri()const
{
	return imageUri_;
}

std::vector<std::string> SearchFaceResult::getAxis()const
{
	return axis_;
}

