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

#include <alibabacloud/idrsservice/model/GetDepartmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

GetDepartmentResult::GetDepartmentResult() :
	ServiceResult()
{}

GetDepartmentResult::GetDepartmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDepartmentResult::~GetDepartmentResult()
{}

void GetDepartmentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreatedAt"].isNull())
		data_.createdAt = dataNode["CreatedAt"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["UpdatedAt"].isNull())
		data_.updatedAt = dataNode["UpdatedAt"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetDepartmentResult::getMessage()const
{
	return message_;
}

GetDepartmentResult::Data GetDepartmentResult::getData()const
{
	return data_;
}

std::string GetDepartmentResult::getCode()const
{
	return code_;
}

