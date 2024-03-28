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

#include <alibabacloud/devops/model/UpdateGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateGroupResult::UpdateGroupResult() :
	ServiceResult()
{}

UpdateGroupResult::UpdateGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateGroupResult::~UpdateGroupResult()
{}

void UpdateGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["pathWithNamespace"].isNull())
		result_.pathWithNamespace = resultNode["pathWithNamespace"].asString();
	if(!resultNode["nameWithNamespace"].isNull())
		result_.nameWithNamespace = resultNode["nameWithNamespace"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["path"].isNull())
		result_.path = resultNode["path"].asString();
	if(!resultNode["ownerId"].isNull())
		result_.ownerId = std::stol(resultNode["ownerId"].asString());
	if(!resultNode["parentId"].isNull())
		result_.parentId = std::stol(resultNode["parentId"].asString());
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["avatarUrl"].isNull())
		result_.avatarUrl = resultNode["avatarUrl"].asString();
	if(!resultNode["webUrl"].isNull())
		result_.webUrl = resultNode["webUrl"].asString();
	if(!resultNode["type"].isNull())
		result_.type = resultNode["type"].asString();
	if(!resultNode["visibilityLevel"].isNull())
		result_.visibilityLevel = std::stoi(resultNode["visibilityLevel"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string UpdateGroupResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateGroupResult::getSuccess()const
{
	return success_;
}

UpdateGroupResult::Result UpdateGroupResult::getResult()const
{
	return result_;
}

