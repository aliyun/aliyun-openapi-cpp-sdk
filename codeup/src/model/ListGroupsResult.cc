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

#include <alibabacloud/codeup/model/ListGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListGroupsResult::ListGroupsResult() :
	ServiceResult()
{}

ListGroupsResult::ListGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupsResult::~ListGroupsResult()
{}

void ListGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["CreatedAt"].isNull())
			resultObject.createdAt = valueResultResultItem["CreatedAt"].asString();
		if(!valueResultResultItem["UpdatedAt"].isNull())
			resultObject.updatedAt = valueResultResultItem["UpdatedAt"].asString();
		if(!valueResultResultItem["AccessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueResultResultItem["AccessLevel"].asString());
		if(!valueResultResultItem["Description"].isNull())
			resultObject.description = valueResultResultItem["Description"].asString();
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["NameWithNamespace"].isNull())
			resultObject.nameWithNamespace = valueResultResultItem["NameWithNamespace"].asString();
		if(!valueResultResultItem["OwnerId"].isNull())
			resultObject.ownerId = std::stol(valueResultResultItem["OwnerId"].asString());
		if(!valueResultResultItem["ParentId"].isNull())
			resultObject.parentId = std::stol(valueResultResultItem["ParentId"].asString());
		if(!valueResultResultItem["Path"].isNull())
			resultObject.path = valueResultResultItem["Path"].asString();
		if(!valueResultResultItem["PathWithNamespace"].isNull())
			resultObject.pathWithNamespace = valueResultResultItem["PathWithNamespace"].asString();
		if(!valueResultResultItem["Type"].isNull())
			resultObject.type = valueResultResultItem["Type"].asString();
		if(!valueResultResultItem["VisibilityLevel"].isNull())
			resultObject.visibilityLevel = valueResultResultItem["VisibilityLevel"].asString();
		if(!valueResultResultItem["WebUrl"].isNull())
			resultObject.webUrl = valueResultResultItem["WebUrl"].asString();
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListGroupsResult::getTotal()const
{
	return total_;
}

std::string ListGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGroupsResult::getSuccess()const
{
	return success_;
}

std::vector<ListGroupsResult::ResultItem> ListGroupsResult::getResult()const
{
	return result_;
}

