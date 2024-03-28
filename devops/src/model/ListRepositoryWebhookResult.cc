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

#include <alibabacloud/devops/model/ListRepositoryWebhookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListRepositoryWebhookResult::ListRepositoryWebhookResult() :
	ServiceResult()
{}

ListRepositoryWebhookResult::ListRepositoryWebhookResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryWebhookResult::~ListRepositoryWebhookResult()
{}

void ListRepositoryWebhookResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["pushEvents"].isNull())
			resultObject.pushEvents = valueresultResultItem["pushEvents"].asString() == "true";
		if(!valueresultResultItem["projectId"].isNull())
			resultObject.projectId = std::stol(valueresultResultItem["projectId"].asString());
		if(!valueresultResultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultResultItem["createdAt"].asString();
		if(!valueresultResultItem["url"].isNull())
			resultObject.url = valueresultResultItem["url"].asString();
		if(!valueresultResultItem["tagPushEvents"].isNull())
			resultObject.tagPushEvents = valueresultResultItem["tagPushEvents"].asString() == "true";
		if(!valueresultResultItem["lastTestResult"].isNull())
			resultObject.lastTestResult = valueresultResultItem["lastTestResult"].asString();
		if(!valueresultResultItem["mergeRequestsEvents"].isNull())
			resultObject.mergeRequestsEvents = valueresultResultItem["mergeRequestsEvents"].asString() == "true";
		if(!valueresultResultItem["description"].isNull())
			resultObject.description = valueresultResultItem["description"].asString();
		if(!valueresultResultItem["noteEvents"].isNull())
			resultObject.noteEvents = valueresultResultItem["noteEvents"].asString() == "true";
		if(!valueresultResultItem["secretToken"].isNull())
			resultObject.secretToken = valueresultResultItem["secretToken"].asString();
		if(!valueresultResultItem["id"].isNull())
			resultObject.id = std::stol(valueresultResultItem["id"].asString());
		if(!valueresultResultItem["enableSslVerification"].isNull())
			resultObject.enableSslVerification = valueresultResultItem["enableSslVerification"].asString() == "true";
		result_.push_back(resultObject);
	}
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::vector<ListRepositoryWebhookResult::ResultItem> ListRepositoryWebhookResult::getresult()const
{
	return result_;
}

std::string ListRepositoryWebhookResult::getRequestId()const
{
	return requestId_;
}

long ListRepositoryWebhookResult::getTotal()const
{
	return total_;
}

std::string ListRepositoryWebhookResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryWebhookResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryWebhookResult::getSuccess()const
{
	return success_;
}

