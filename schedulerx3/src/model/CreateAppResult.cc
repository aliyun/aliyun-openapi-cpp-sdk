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

#include <alibabacloud/schedulerx3/model/CreateAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

CreateAppResult::CreateAppResult() :
	ServiceResult()
{}

CreateAppResult::CreateAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAppResult::~CreateAppResult()
{}

void CreateAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppGroupId"].isNull())
		data_.appGroupId = std::stol(dataNode["AppGroupId"].asString());
	if(!dataNode["AccessToken"].isNull())
		data_.accessToken = dataNode["AccessToken"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateAppResult::getMessage()const
{
	return message_;
}

CreateAppResult::Data CreateAppResult::getData()const
{
	return data_;
}

int CreateAppResult::getCode()const
{
	return code_;
}

bool CreateAppResult::getSuccess()const
{
	return success_;
}

