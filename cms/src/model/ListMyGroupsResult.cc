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

#include <alibabacloud/cms/model/ListMyGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListMyGroupsResult::ListMyGroupsResult() :
	ServiceResult()
{}

ListMyGroupsResult::ListMyGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMyGroupsResult::~ListMyGroupsResult()
{}

void ListMyGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		Resource resourcesObject;
		if(!value["GroupId"].isNull())
			resourcesObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["GroupName"].isNull())
			resourcesObject.groupName = value["GroupName"].asString();
		if(!value["ServiceId"].isNull())
			resourcesObject.serviceId = value["ServiceId"].asString();
		if(!value["BindUrls"].isNull())
			resourcesObject.bindUrls = value["BindUrls"].asString();
		if(!value["Type"].isNull())
			resourcesObject.type = value["Type"].asString();
		if(!value["GmtModified"].isNull())
			resourcesObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["GmtCreate"].isNull())
			resourcesObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["BindUrl"].isNull())
			resourcesObject.bindUrl = value["BindUrl"].asString();
		auto allContactGroups = value["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
		{
			Resource::ContactGroup contactGroupsObject;
			if(!value["Name"].isNull())
				contactGroupsObject.name = value["Name"].asString();
			resourcesObject.contactGroups.push_back(contactGroupsObject);
		}
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListMyGroupsResult::getPageSize()const
{
	return pageSize_;
}

int ListMyGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

int ListMyGroupsResult::getTotal()const
{
	return total_;
}

std::vector<ListMyGroupsResult::Resource> ListMyGroupsResult::getResources()const
{
	return resources_;
}

int ListMyGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMyGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMyGroupsResult::getSuccess()const
{
	return success_;
}

