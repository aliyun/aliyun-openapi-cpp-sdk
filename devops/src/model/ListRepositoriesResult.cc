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

#include <alibabacloud/devops/model/ListRepositoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListRepositoriesResult::ListRepositoriesResult() :
	ServiceResult()
{}

ListRepositoriesResult::ListRepositoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoriesResult::~ListRepositoriesResult()
{}

void ListRepositoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["lastActivityAt"].isNull())
			resultObject.lastActivityAt = valueresultResultItem["lastActivityAt"].asString();
		if(!valueresultResultItem["namespaceId"].isNull())
			resultObject.namespaceId = std::stol(valueresultResultItem["namespaceId"].asString());
		if(!valueresultResultItem["avatarUrl"].isNull())
			resultObject.avatarUrl = valueresultResultItem["avatarUrl"].asString();
		if(!valueresultResultItem["starCount"].isNull())
			resultObject.starCount = std::stol(valueresultResultItem["starCount"].asString());
		if(!valueresultResultItem["archive"].isNull())
			resultObject.archive = valueresultResultItem["archive"].asString() == "true";
		if(!valueresultResultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultResultItem["createdAt"].asString();
		if(!valueresultResultItem["star"].isNull())
			resultObject.star = valueresultResultItem["star"].asString() == "true";
		if(!valueresultResultItem["importStatus"].isNull())
			resultObject.importStatus = valueresultResultItem["importStatus"].asString();
		if(!valueresultResultItem["webUrl"].isNull())
			resultObject.webUrl = valueresultResultItem["webUrl"].asString();
		if(!valueresultResultItem["description"].isNull())
			resultObject.description = valueresultResultItem["description"].asString();
		if(!valueresultResultItem["nameWithNamespace"].isNull())
			resultObject.nameWithNamespace = valueresultResultItem["nameWithNamespace"].asString();
		if(!valueresultResultItem["pathWithNamespace"].isNull())
			resultObject.pathWithNamespace = valueresultResultItem["pathWithNamespace"].asString();
		if(!valueresultResultItem["path"].isNull())
			resultObject.path = valueresultResultItem["path"].asString();
		if(!valueresultResultItem["visibilityLevel"].isNull())
			resultObject.visibilityLevel = valueresultResultItem["visibilityLevel"].asString();
		if(!valueresultResultItem["accessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueresultResultItem["accessLevel"].asString());
		if(!valueresultResultItem["updatedAt"].isNull())
			resultObject.updatedAt = valueresultResultItem["updatedAt"].asString();
		if(!valueresultResultItem["name"].isNull())
			resultObject.name = valueresultResultItem["name"].asString();
		if(!valueresultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueresultResultItem["Id"].asString());
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = std::stoi(value["errorCode"].asString());

}

std::vector<ListRepositoriesResult::ResultItem> ListRepositoriesResult::getresult()const
{
	return result_;
}

std::string ListRepositoriesResult::getRequestId()const
{
	return requestId_;
}

long ListRepositoriesResult::getTotal()const
{
	return total_;
}

int ListRepositoriesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoriesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoriesResult::getSuccess()const
{
	return success_;
}

