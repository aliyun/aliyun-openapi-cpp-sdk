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

#include <alibabacloud/ccc/model/ImportAdminsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ImportAdminsResult::ImportAdminsResult() :
	ServiceResult()
{}

ImportAdminsResult::ImportAdminsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImportAdminsResult::~ImportAdminsResult()
{}

void ImportAdminsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["User"];
	for (auto valueDataUser : allDataNode)
	{
		User dataObject;
		if(!valueDataUser["InstanceId"].isNull())
			dataObject.instanceId = valueDataUser["InstanceId"].asString();
		if(!valueDataUser["UserId"].isNull())
			dataObject.userId = valueDataUser["UserId"].asString();
		if(!valueDataUser["RoleId"].isNull())
			dataObject.roleId = valueDataUser["RoleId"].asString();
		if(!valueDataUser["Extension"].isNull())
			dataObject.extension = valueDataUser["Extension"].asString();
		if(!valueDataUser["RamId"].isNull())
			dataObject.ramId = valueDataUser["RamId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ImportAdminsResult::getMessage()const
{
	return message_;
}

int ImportAdminsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ImportAdminsResult::User> ImportAdminsResult::getData()const
{
	return data_;
}

std::string ImportAdminsResult::getCode()const
{
	return code_;
}

