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

#include <alibabacloud/idrsservice/model/GetUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

GetUserResult::GetUserResult() :
	ServiceResult()
{}

GetUserResult::GetUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserResult::~GetUserResult()
{}

void GetUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreatedAt"].isNull())
		data_.createdAt = dataNode["CreatedAt"].asString();
	if(!dataNode["Email"].isNull())
		data_.email = dataNode["Email"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["PhoneNumber"].isNull())
		data_.phoneNumber = dataNode["PhoneNumber"].asString();
	if(!dataNode["Role"].isNull())
		data_.role = dataNode["Role"].asString();
	if(!dataNode["Source"].isNull())
		data_.source = dataNode["Source"].asString();
	if(!dataNode["UpdatedAt"].isNull())
		data_.updatedAt = dataNode["UpdatedAt"].asString();
	if(!dataNode["Username"].isNull())
		data_.username = dataNode["Username"].asString();
	auto allDepartmentsNode = dataNode["Departments"]["DepartmentsItem"];
	for (auto dataNodeDepartmentsDepartmentsItem : allDepartmentsNode)
	{
		Data::DepartmentsItem departmentsItemObject;
		if(!dataNodeDepartmentsDepartmentsItem["Description"].isNull())
			departmentsItemObject.description = dataNodeDepartmentsDepartmentsItem["Description"].asString();
		if(!dataNodeDepartmentsDepartmentsItem["GmtCreate"].isNull())
			departmentsItemObject.gmtCreate = dataNodeDepartmentsDepartmentsItem["GmtCreate"].asString();
		if(!dataNodeDepartmentsDepartmentsItem["GmtModified"].isNull())
			departmentsItemObject.gmtModified = dataNodeDepartmentsDepartmentsItem["GmtModified"].asString();
		if(!dataNodeDepartmentsDepartmentsItem["Id"].isNull())
			departmentsItemObject.id = dataNodeDepartmentsDepartmentsItem["Id"].asString();
		if(!dataNodeDepartmentsDepartmentsItem["Name"].isNull())
			departmentsItemObject.name = dataNodeDepartmentsDepartmentsItem["Name"].asString();
		data_.departments.push_back(departmentsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetUserResult::getMessage()const
{
	return message_;
}

GetUserResult::Data GetUserResult::getData()const
{
	return data_;
}

std::string GetUserResult::getCode()const
{
	return code_;
}

