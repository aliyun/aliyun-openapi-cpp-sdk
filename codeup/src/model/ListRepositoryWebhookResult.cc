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

#include <alibabacloud/codeup/model/ListRepositoryWebhookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

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
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["Url"].isNull())
			resultObject.url = valueResultResultItem["Url"].asString();
		if(!valueResultResultItem["CreatedAt"].isNull())
			resultObject.createdAt = valueResultResultItem["CreatedAt"].asString();
		if(!valueResultResultItem["ProjectId"].isNull())
			resultObject.projectId = std::stol(valueResultResultItem["ProjectId"].asString());
		if(!valueResultResultItem["PushEvents"].isNull())
			resultObject.pushEvents = valueResultResultItem["PushEvents"].asString() == "true";
		if(!valueResultResultItem["MergeRequestsEvents"].isNull())
			resultObject.mergeRequestsEvents = valueResultResultItem["MergeRequestsEvents"].asString() == "true";
		if(!valueResultResultItem["TagPushEvents"].isNull())
			resultObject.tagPushEvents = valueResultResultItem["TagPushEvents"].asString() == "true";
		if(!valueResultResultItem["NoteEvents"].isNull())
			resultObject.noteEvents = valueResultResultItem["NoteEvents"].asString() == "true";
		if(!valueResultResultItem["EnableSslVerification"].isNull())
			resultObject.enableSslVerification = valueResultResultItem["EnableSslVerification"].asString() == "true";
		if(!valueResultResultItem["LastTestResult"].isNull())
			resultObject.lastTestResult = valueResultResultItem["LastTestResult"].asString();
		if(!valueResultResultItem["Description"].isNull())
			resultObject.description = valueResultResultItem["Description"].asString();
		if(!valueResultResultItem["SecretToken"].isNull())
			resultObject.secretToken = valueResultResultItem["SecretToken"].asString();
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

std::vector<ListRepositoryWebhookResult::ResultItem> ListRepositoryWebhookResult::getResult()const
{
	return result_;
}

