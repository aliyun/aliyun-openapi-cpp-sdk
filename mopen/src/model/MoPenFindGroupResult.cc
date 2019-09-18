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

#include <alibabacloud/mopen/model/MoPenFindGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MoPen;
using namespace AlibabaCloud::MoPen::Model;

MoPenFindGroupResult::MoPenFindGroupResult() :
	ServiceResult()
{}

MoPenFindGroupResult::MoPenFindGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoPenFindGroupResult::~MoPenFindGroupResult()
{}

void MoPenFindGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GroupId"].isNull())
		data_.groupId = dataNode["GroupId"].asString();
	if(!dataNode["Creator"].isNull())
		data_.creator = dataNode["Creator"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string MoPenFindGroupResult::getDescription()const
{
	return description_;
}

std::string MoPenFindGroupResult::getMessage()const
{
	return message_;
}

MoPenFindGroupResult::Data MoPenFindGroupResult::getData()const
{
	return data_;
}

int MoPenFindGroupResult::getCode()const
{
	return code_;
}

std::string MoPenFindGroupResult::getSuccess()const
{
	return success_;
}

