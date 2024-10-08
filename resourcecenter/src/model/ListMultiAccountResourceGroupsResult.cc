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

#include <alibabacloud/resourcecenter/model/ListMultiAccountResourceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ListMultiAccountResourceGroupsResult::ListMultiAccountResourceGroupsResult() :
	ServiceResult()
{}

ListMultiAccountResourceGroupsResult::ListMultiAccountResourceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMultiAccountResourceGroupsResult::~ListMultiAccountResourceGroupsResult()
{}

void ListMultiAccountResourceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceGroupsNode = value["ResourceGroups"]["ResourceGroup"];
	for (auto valueResourceGroupsResourceGroup : allResourceGroupsNode)
	{
		ResourceGroup resourceGroupsObject;
		if(!valueResourceGroupsResourceGroup["AccountId"].isNull())
			resourceGroupsObject.accountId = valueResourceGroupsResourceGroup["AccountId"].asString();
		if(!valueResourceGroupsResourceGroup["CreateDate"].isNull())
			resourceGroupsObject.createDate = valueResourceGroupsResourceGroup["CreateDate"].asString();
		if(!valueResourceGroupsResourceGroup["DisplayName"].isNull())
			resourceGroupsObject.displayName = valueResourceGroupsResourceGroup["DisplayName"].asString();
		if(!valueResourceGroupsResourceGroup["Id"].isNull())
			resourceGroupsObject.id = valueResourceGroupsResourceGroup["Id"].asString();
		if(!valueResourceGroupsResourceGroup["Name"].isNull())
			resourceGroupsObject.name = valueResourceGroupsResourceGroup["Name"].asString();
		if(!valueResourceGroupsResourceGroup["Status"].isNull())
			resourceGroupsObject.status = valueResourceGroupsResourceGroup["Status"].asString();
		resourceGroups_.push_back(resourceGroupsObject);
	}
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListMultiAccountResourceGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListMultiAccountResourceGroupsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<ListMultiAccountResourceGroupsResult::ResourceGroup> ListMultiAccountResourceGroupsResult::getResourceGroups()const
{
	return resourceGroups_;
}

std::string ListMultiAccountResourceGroupsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListMultiAccountResourceGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMultiAccountResourceGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMultiAccountResourceGroupsResult::getSuccess()const
{
	return success_;
}

