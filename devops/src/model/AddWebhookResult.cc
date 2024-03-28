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

#include <alibabacloud/devops/model/AddWebhookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

AddWebhookResult::AddWebhookResult() :
	ServiceResult()
{}

AddWebhookResult::AddWebhookResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddWebhookResult::~AddWebhookResult()
{}

void AddWebhookResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["pushEvents"].isNull())
		result_.pushEvents = resultNode["pushEvents"].asString() == "true";
	if(!resultNode["repositoryId"].isNull())
		result_.repositoryId = std::stol(resultNode["repositoryId"].asString());
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["url"].isNull())
		result_.url = resultNode["url"].asString();
	if(!resultNode["tagPushEvents"].isNull())
		result_.tagPushEvents = resultNode["tagPushEvents"].asString() == "true";
	if(!resultNode["lastTestResult"].isNull())
		result_.lastTestResult = resultNode["lastTestResult"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["mergeRequestsEvents"].isNull())
		result_.mergeRequestsEvents = resultNode["mergeRequestsEvents"].asString() == "true";
	if(!resultNode["secretToken"].isNull())
		result_.secretToken = resultNode["secretToken"].asString();
	if(!resultNode["noteEvents"].isNull())
		result_.noteEvents = resultNode["noteEvents"].asString() == "true";
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["enableSslVerification"].isNull())
		result_.enableSslVerification = resultNode["enableSslVerification"].asString() == "true";
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string AddWebhookResult::getRequestId()const
{
	return requestId_;
}

std::string AddWebhookResult::getErrorCode()const
{
	return errorCode_;
}

std::string AddWebhookResult::getErrorMessage()const
{
	return errorMessage_;
}

bool AddWebhookResult::getSuccess()const
{
	return success_;
}

AddWebhookResult::Result AddWebhookResult::getResult()const
{
	return result_;
}

