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

#include <alibabacloud/idrsservice/model/CreateAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

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
	if(!dataNode["CreatedAt"].isNull())
		data_.createdAt = dataNode["CreatedAt"].asString();
	if(!dataNode["CreatorName"].isNull())
		data_.creatorName = dataNode["CreatorName"].asString();
	if(!dataNode["Disabled"].isNull())
		data_.disabled = dataNode["Disabled"].asString() == "true";
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateAppResult::getMessage()const
{
	return message_;
}

CreateAppResult::Data CreateAppResult::getData()const
{
	return data_;
}

std::string CreateAppResult::getCode()const
{
	return code_;
}

