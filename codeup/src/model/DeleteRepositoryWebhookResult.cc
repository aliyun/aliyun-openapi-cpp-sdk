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

#include <alibabacloud/codeup/model/DeleteRepositoryWebhookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

DeleteRepositoryWebhookResult::DeleteRepositoryWebhookResult() :
	ServiceResult()
{}

DeleteRepositoryWebhookResult::DeleteRepositoryWebhookResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteRepositoryWebhookResult::~DeleteRepositoryWebhookResult()
{}

void DeleteRepositoryWebhookResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["Url"].isNull())
		result_.url = resultNode["Url"].asString();
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["ProjectId"].isNull())
		result_.projectId = std::stol(resultNode["ProjectId"].asString());
	if(!resultNode["PushEvents"].isNull())
		result_.pushEvents = resultNode["PushEvents"].asString() == "true";
	if(!resultNode["MergeRequestsEvents"].isNull())
		result_.mergeRequestsEvents = resultNode["MergeRequestsEvents"].asString() == "true";
	if(!resultNode["TagPushEvents"].isNull())
		result_.tagPushEvents = resultNode["TagPushEvents"].asString() == "true";
	if(!resultNode["NoteEvents"].isNull())
		result_.noteEvents = resultNode["NoteEvents"].asString() == "true";
	if(!resultNode["EnableSslVerification"].isNull())
		result_.enableSslVerification = resultNode["EnableSslVerification"].asString() == "true";
	if(!resultNode["LastTestResult"].isNull())
		result_.lastTestResult = resultNode["LastTestResult"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["SecretToken"].isNull())
		result_.secretToken = resultNode["SecretToken"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string DeleteRepositoryWebhookResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteRepositoryWebhookResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteRepositoryWebhookResult::getSuccess()const
{
	return success_;
}

DeleteRepositoryWebhookResult::Result DeleteRepositoryWebhookResult::getResult()const
{
	return result_;
}

