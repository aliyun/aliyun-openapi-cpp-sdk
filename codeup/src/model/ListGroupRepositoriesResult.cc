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

#include <alibabacloud/codeup/model/ListGroupRepositoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListGroupRepositoriesResult::ListGroupRepositoriesResult() :
	ServiceResult()
{}

ListGroupRepositoriesResult::ListGroupRepositoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupRepositoriesResult::~ListGroupRepositoriesResult()
{}

void ListGroupRepositoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Archive"].isNull())
			resultObject.archive = valueResultResultItem["Archive"].asString() == "true";
		if(!valueResultResultItem["CreatedAt"].isNull())
			resultObject.createdAt = valueResultResultItem["CreatedAt"].asString();
		if(!valueResultResultItem["UpdatedAt"].isNull())
			resultObject.updatedAt = valueResultResultItem["UpdatedAt"].asString();
		if(!valueResultResultItem["LastActivityAt"].isNull())
			resultObject.lastActivityAt = valueResultResultItem["LastActivityAt"].asString();
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["CreatorId"].isNull())
			resultObject.creatorId = std::stol(valueResultResultItem["CreatorId"].asString());
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["NameWithNamespace"].isNull())
			resultObject.nameWithNamespace = valueResultResultItem["NameWithNamespace"].asString();
		if(!valueResultResultItem["Path"].isNull())
			resultObject.path = valueResultResultItem["Path"].asString();
		if(!valueResultResultItem["PathWithNamespace"].isNull())
			resultObject.pathWithNamespace = valueResultResultItem["PathWithNamespace"].asString();
		if(!valueResultResultItem["NamespaceId"].isNull())
			resultObject.namespaceId = std::stol(valueResultResultItem["NamespaceId"].asString());
		if(!valueResultResultItem["HttpCloneUrl"].isNull())
			resultObject.httpCloneUrl = valueResultResultItem["HttpCloneUrl"].asString();
		if(!valueResultResultItem["SshCloneUrl"].isNull())
			resultObject.sshCloneUrl = valueResultResultItem["SshCloneUrl"].asString();
		if(!valueResultResultItem["VisibilityLevel"].isNull())
			resultObject.visibilityLevel = std::stoi(valueResultResultItem["VisibilityLevel"].asString());
		if(!valueResultResultItem["WebUrl"].isNull())
			resultObject.webUrl = valueResultResultItem["WebUrl"].asString();
		if(!valueResultResultItem["ImportStatus"].isNull())
			resultObject.importStatus = valueResultResultItem["ImportStatus"].asString();
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

long ListGroupRepositoriesResult::getTotal()const
{
	return total_;
}

std::string ListGroupRepositoriesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGroupRepositoriesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGroupRepositoriesResult::getSuccess()const
{
	return success_;
}

std::vector<ListGroupRepositoriesResult::ResultItem> ListGroupRepositoriesResult::getResult()const
{
	return result_;
}

