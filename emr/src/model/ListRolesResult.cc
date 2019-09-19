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

#include <alibabacloud/emr/model/ListRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListRolesResult::ListRolesResult() :
	ServiceResult()
{}

ListRolesResult::ListRolesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRolesResult::~ListRolesResult()
{}

void ListRolesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["roleDTO"];
	for (auto valueDataroleDTO : allDataNode)
	{
		RoleDTO dataObject;
		if(!valueDataroleDTO["Id"].isNull())
			dataObject.id = std::stol(valueDataroleDTO["Id"].asString());
		if(!valueDataroleDTO["Name"].isNull())
			dataObject.name = valueDataroleDTO["Name"].asString();
		if(!valueDataroleDTO["ResourceType"].isNull())
			dataObject.resourceType = valueDataroleDTO["ResourceType"].asString();
		if(!valueDataroleDTO["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataroleDTO["GmtCreate"].asString();
		if(!valueDataroleDTO["GmtModified"].isNull())
			dataObject.gmtModified = valueDataroleDTO["GmtModified"].asString();
		if(!valueDataroleDTO["Description"].isNull())
			dataObject.description = valueDataroleDTO["Description"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";

}

bool ListRolesResult::getPaging()const
{
	return paging_;
}

std::vector<ListRolesResult::RoleDTO> ListRolesResult::getData()const
{
	return data_;
}

