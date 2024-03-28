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

#include <alibabacloud/devops/model/ListRepositoryGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListRepositoryGroupsResult::ListRepositoryGroupsResult() :
	ServiceResult()
{}

ListRepositoryGroupsResult::ListRepositoryGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryGroupsResult::~ListRepositoryGroupsResult()
{}

void ListRepositoryGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["path"].isNull())
			resultObject.path = valueresultresultItem["path"].asString();
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["nameWithNamespace"].isNull())
			resultObject.nameWithNamespace = valueresultresultItem["nameWithNamespace"].asString();
		if(!valueresultresultItem["pathWithNamespace"].isNull())
			resultObject.pathWithNamespace = valueresultresultItem["pathWithNamespace"].asString();
		if(!valueresultresultItem["visibilityLevel"].isNull())
			resultObject.visibilityLevel = std::stoi(valueresultresultItem["visibilityLevel"].asString());
		if(!valueresultresultItem["avatarUrl"].isNull())
			resultObject.avatarUrl = valueresultresultItem["avatarUrl"].asString();
		if(!valueresultresultItem["webUrl"].isNull())
			resultObject.webUrl = valueresultresultItem["webUrl"].asString();
		if(!valueresultresultItem["type"].isNull())
			resultObject.type = valueresultresultItem["type"].asString();
		if(!valueresultresultItem["description"].isNull())
			resultObject.description = valueresultresultItem["description"].asString();
		if(!valueresultresultItem["parentId"].isNull())
			resultObject.parentId = std::stol(valueresultresultItem["parentId"].asString());
		if(!valueresultresultItem["ownerId"].isNull())
			resultObject.ownerId = std::stol(valueresultresultItem["ownerId"].asString());
		if(!valueresultresultItem["accessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueresultresultItem["accessLevel"].asString());
		if(!valueresultresultItem["projectCount"].isNull())
			resultObject.projectCount = std::stol(valueresultresultItem["projectCount"].asString());
		if(!valueresultresultItem["groupCount"].isNull())
			resultObject.groupCount = std::stol(valueresultresultItem["groupCount"].asString());
		if(!valueresultresultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultresultItem["createdAt"].asString();
		if(!valueresultresultItem["updatedAt"].isNull())
			resultObject.updatedAt = valueresultresultItem["updatedAt"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListRepositoryGroupsResult::ResultItem> ListRepositoryGroupsResult::getresult()const
{
	return result_;
}

std::string ListRepositoryGroupsResult::getRequestId()const
{
	return requestId_;
}

long ListRepositoryGroupsResult::getTotal()const
{
	return total_;
}

std::string ListRepositoryGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryGroupsResult::getSuccess()const
{
	return success_;
}

