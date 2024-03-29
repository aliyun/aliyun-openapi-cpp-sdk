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

#include <alibabacloud/schedulerx2/model/CreateAppGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

CreateAppGroupResult::CreateAppGroupResult() :
	ServiceResult()
{}

CreateAppGroupResult::CreateAppGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAppGroupResult::~CreateAppGroupResult()
{}

void CreateAppGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppGroupId"].isNull())
		data_.appGroupId = std::stol(dataNode["AppGroupId"].asString());
	if(!dataNode["AppKey"].isNull())
		data_.appKey = dataNode["AppKey"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateAppGroupResult::getMessage()const
{
	return message_;
}

CreateAppGroupResult::Data CreateAppGroupResult::getData()const
{
	return data_;
}

int CreateAppGroupResult::getCode()const
{
	return code_;
}

bool CreateAppGroupResult::getSuccess()const
{
	return success_;
}

