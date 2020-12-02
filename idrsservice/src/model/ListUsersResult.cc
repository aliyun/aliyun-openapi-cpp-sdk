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

#include <alibabacloud/idrsservice/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

ListUsersResult::ListUsersResult() :
	ServiceResult()
{}

ListUsersResult::ListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersResult::~ListUsersResult()
{}

void ListUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalElements"].isNull())
		data_.totalElements = std::stol(dataNode["TotalElements"].asString());
	if(!dataNode["TotalPages"].isNull())
		data_.totalPages = std::stoi(dataNode["TotalPages"].asString());
	auto allItemsNode = dataNode["Items"]["ItemsItem"];
	for (auto dataNodeItemsItemsItem : allItemsNode)
	{
		Data::ItemsItem itemsItemObject;
		if(!dataNodeItemsItemsItem["CreatedAt"].isNull())
			itemsItemObject.createdAt = dataNodeItemsItemsItem["CreatedAt"].asString();
		if(!dataNodeItemsItemsItem["Email"].isNull())
			itemsItemObject.email = dataNodeItemsItemsItem["Email"].asString();
		if(!dataNodeItemsItemsItem["Id"].isNull())
			itemsItemObject.id = dataNodeItemsItemsItem["Id"].asString();
		if(!dataNodeItemsItemsItem["Name"].isNull())
			itemsItemObject.name = dataNodeItemsItemsItem["Name"].asString();
		if(!dataNodeItemsItemsItem["PhoneNumber"].isNull())
			itemsItemObject.phoneNumber = dataNodeItemsItemsItem["PhoneNumber"].asString();
		if(!dataNodeItemsItemsItem["RamUsername"].isNull())
			itemsItemObject.ramUsername = dataNodeItemsItemsItem["RamUsername"].asString();
		if(!dataNodeItemsItemsItem["Role"].isNull())
			itemsItemObject.role = dataNodeItemsItemsItem["Role"].asString();
		if(!dataNodeItemsItemsItem["Source"].isNull())
			itemsItemObject.source = dataNodeItemsItemsItem["Source"].asString();
		if(!dataNodeItemsItemsItem["UpdatedAt"].isNull())
			itemsItemObject.updatedAt = dataNodeItemsItemsItem["UpdatedAt"].asString();
		if(!dataNodeItemsItemsItem["Username"].isNull())
			itemsItemObject.username = dataNodeItemsItemsItem["Username"].asString();
		auto allDepartmentsNode = dataNodeItemsItemsItem["Departments"]["DepartmentsItem"];
		for (auto dataNodeItemsItemsItemDepartmentsDepartmentsItem : allDepartmentsNode)
		{
			Data::ItemsItem::DepartmentsItem departmentsObject;
			if(!dataNodeItemsItemsItemDepartmentsDepartmentsItem["CreatedAt"].isNull())
				departmentsObject.createdAt = dataNodeItemsItemsItemDepartmentsDepartmentsItem["CreatedAt"].asString();
			if(!dataNodeItemsItemsItemDepartmentsDepartmentsItem["Description"].isNull())
				departmentsObject.description = dataNodeItemsItemsItemDepartmentsDepartmentsItem["Description"].asString();
			if(!dataNodeItemsItemsItemDepartmentsDepartmentsItem["Id"].isNull())
				departmentsObject.id = dataNodeItemsItemsItemDepartmentsDepartmentsItem["Id"].asString();
			if(!dataNodeItemsItemsItemDepartmentsDepartmentsItem["Name"].isNull())
				departmentsObject.name = dataNodeItemsItemsItemDepartmentsDepartmentsItem["Name"].asString();
			if(!dataNodeItemsItemsItemDepartmentsDepartmentsItem["UpdatedAt"].isNull())
				departmentsObject.updatedAt = dataNodeItemsItemsItemDepartmentsDepartmentsItem["UpdatedAt"].asString();
			itemsItemObject.departments.push_back(departmentsObject);
		}
		data_.items.push_back(itemsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListUsersResult::getMessage()const
{
	return message_;
}

ListUsersResult::Data ListUsersResult::getData()const
{
	return data_;
}

std::string ListUsersResult::getCode()const
{
	return code_;
}

