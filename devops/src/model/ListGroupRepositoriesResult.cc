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

#include <alibabacloud/devops/model/ListGroupRepositoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

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
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["path"].isNull())
			resultObject.path = valueresultresultItem["path"].asString();
		if(!valueresultresultItem["nameWithNamespace"].isNull())
			resultObject.nameWithNamespace = valueresultresultItem["nameWithNamespace"].asString();
		if(!valueresultresultItem["pathWithNamespace"].isNull())
			resultObject.pathWithNamespace = valueresultresultItem["pathWithNamespace"].asString();
		if(!valueresultresultItem["lastActivityAt"].isNull())
			resultObject.lastActivityAt = valueresultresultItem["lastActivityAt"].asString();
		if(!valueresultresultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultresultItem["createdAt"].asString();
		if(!valueresultresultItem["updatedAt"].isNull())
			resultObject.updatedAt = valueresultresultItem["updatedAt"].asString();
		if(!valueresultresultItem["visibilityLevel"].isNull())
			resultObject.visibilityLevel = std::stoi(valueresultresultItem["visibilityLevel"].asString());
		if(!valueresultresultItem["starCount"].isNull())
			resultObject.starCount = std::stoi(valueresultresultItem["starCount"].asString());
		if(!valueresultresultItem["webUrl"].isNull())
			resultObject.webUrl = valueresultresultItem["webUrl"].asString();
		if(!valueresultresultItem["sshUrl"].isNull())
			resultObject.sshUrl = valueresultresultItem["sshUrl"].asString();
		if(!valueresultresultItem["httpUrl"].isNull())
			resultObject.httpUrl = valueresultresultItem["httpUrl"].asString();
		if(!valueresultresultItem["description"].isNull())
			resultObject.description = valueresultresultItem["description"].asString();
		if(!valueresultresultItem["privateFlag"].isNull())
			resultObject.privateFlag = valueresultresultItem["privateFlag"].asString() == "true";
		if(!valueresultresultItem["creatorId"].isNull())
			resultObject.creatorId = std::stol(valueresultresultItem["creatorId"].asString());
		if(!valueresultresultItem["issuesEnabled"].isNull())
			resultObject.issuesEnabled = valueresultresultItem["issuesEnabled"].asString() == "true";
		if(!valueresultresultItem["mergeRequestsEnabled"].isNull())
			resultObject.mergeRequestsEnabled = valueresultresultItem["mergeRequestsEnabled"].asString() == "true";
		if(!valueresultresultItem["wikiEnabled"].isNull())
			resultObject.wikiEnabled = valueresultresultItem["wikiEnabled"].asString() == "true";
		if(!valueresultresultItem["namespaceId"].isNull())
			resultObject.namespaceId = valueresultresultItem["namespaceId"].asString() == "true";
		if(!valueresultresultItem["snippetsEnabled"].isNull())
			resultObject.snippetsEnabled = valueresultresultItem["snippetsEnabled"].asString() == "true";
		if(!valueresultresultItem["importUrl"].isNull())
			resultObject.importUrl = valueresultresultItem["importUrl"].asString();
		if(!valueresultresultItem["archived"].isNull())
			resultObject.archived = valueresultresultItem["archived"].asString() == "true";
		if(!valueresultresultItem["commitCount"].isNull())
			resultObject.commitCount = std::stol(valueresultresultItem["commitCount"].asString());
		if(!valueresultresultItem["isStared"].isNull())
			resultObject.isStared = valueresultresultItem["isStared"].asString() == "true";
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

std::vector<ListGroupRepositoriesResult::ResultItem> ListGroupRepositoriesResult::getresult()const
{
	return result_;
}

std::string ListGroupRepositoriesResult::getRequestId()const
{
	return requestId_;
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

