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

#include <alibabacloud/emr/model/ListUserGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListUserGroupsResult::ListUserGroupsResult() :
	ServiceResult()
{}

ListUserGroupsResult::ListUserGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserGroupsResult::~ListUserGroupsResult()
{}

void ListUserGroupsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["groupDTO"];
	for (auto value : allData)
	{
		GroupDTO dataObject;
		if(!value["Id"].isNull())
			dataObject.id = std::stol(value["Id"].asString());
		if(!value["Type"].isNull())
			dataObject.type = value["Type"].asString();
		if(!value["Name"].isNull())
			dataObject.name = value["Name"].asString();
		if(!value["GmtCreate"].isNull())
			dataObject.gmtCreate = value["GmtCreate"].asString();
		auto allRoleDTOList = value["RoleDTOList"]["RoleDTO"];
		for (auto value : allRoleDTOList)
		{
			GroupDTO::RoleDTO roleDTOListObject;
			if(!value["Id"].isNull())
				roleDTOListObject.id = std::stol(value["Id"].asString());
			if(!value["Name"].isNull())
				roleDTOListObject.name = value["Name"].asString();
			if(!value["ResourceType"].isNull())
				roleDTOListObject.resourceType = value["ResourceType"].asString();
			if(!value["GmtCreate"].isNull())
				roleDTOListObject.gmtCreate = value["GmtCreate"].asString();
			if(!value["GmtModified"].isNull())
				roleDTOListObject.gmtModified = value["GmtModified"].asString();
			if(!value["Description"].isNull())
				roleDTOListObject.description = value["Description"].asString();
			dataObject.roleDTOList.push_back(roleDTOListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";

}

bool ListUserGroupsResult::getPaging()const
{
	return paging_;
}

std::vector<ListUserGroupsResult::GroupDTO> ListUserGroupsResult::getData()const
{
	return data_;
}

