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

#include <alibabacloud/resourcemanager/model/ListResourceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListResourceGroupsResult::ListResourceGroupsResult() :
	ServiceResult()
{}

ListResourceGroupsResult::ListResourceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceGroupsResult::~ListResourceGroupsResult()
{}

void ListResourceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceGroupsNode = value["ResourceGroups"]["ResourceGroup"];
	for (auto valueResourceGroupsResourceGroup : allResourceGroupsNode)
	{
		ResourceGroup resourceGroupsObject;
		if(!valueResourceGroupsResourceGroup["DisplayName"].isNull())
			resourceGroupsObject.displayName = valueResourceGroupsResourceGroup["DisplayName"].asString();
		if(!valueResourceGroupsResourceGroup["Status"].isNull())
			resourceGroupsObject.status = valueResourceGroupsResourceGroup["Status"].asString();
		if(!valueResourceGroupsResourceGroup["AccountId"].isNull())
			resourceGroupsObject.accountId = valueResourceGroupsResourceGroup["AccountId"].asString();
		if(!valueResourceGroupsResourceGroup["Name"].isNull())
			resourceGroupsObject.name = valueResourceGroupsResourceGroup["Name"].asString();
		if(!valueResourceGroupsResourceGroup["CreateDate"].isNull())
			resourceGroupsObject.createDate = valueResourceGroupsResourceGroup["CreateDate"].asString();
		if(!valueResourceGroupsResourceGroup["Id"].isNull())
			resourceGroupsObject.id = valueResourceGroupsResourceGroup["Id"].asString();
		auto allTagsNode = valueResourceGroupsResourceGroup["Tags"]["Tag"];
		for (auto valueResourceGroupsResourceGroupTagsTag : allTagsNode)
		{
			ResourceGroup::Tag tagsObject;
			if(!valueResourceGroupsResourceGroupTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueResourceGroupsResourceGroupTagsTag["TagKey"].asString();
			if(!valueResourceGroupsResourceGroupTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueResourceGroupsResourceGroupTagsTag["TagValue"].asString();
			resourceGroupsObject.tags.push_back(tagsObject);
		}
		resourceGroups_.push_back(resourceGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ResourceGroupListAclMode"].isNull())
		resourceGroupListAclMode_ = value["ResourceGroupListAclMode"].asString();

}

int ListResourceGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int ListResourceGroupsResult::getPageSize()const
{
	return pageSize_;
}

int ListResourceGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListResourceGroupsResult::ResourceGroup> ListResourceGroupsResult::getResourceGroups()const
{
	return resourceGroups_;
}

std::string ListResourceGroupsResult::getResourceGroupListAclMode()const
{
	return resourceGroupListAclMode_;
}

