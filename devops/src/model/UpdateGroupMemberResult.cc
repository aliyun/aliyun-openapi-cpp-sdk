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

#include <alibabacloud/devops/model/UpdateGroupMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateGroupMemberResult::UpdateGroupMemberResult() :
	ServiceResult()
{}

UpdateGroupMemberResult::UpdateGroupMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateGroupMemberResult::~UpdateGroupMemberResult()
{}

void UpdateGroupMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["username"].isNull())
		result_.username = resultNode["username"].asString();
	if(!resultNode["state"].isNull())
		result_.state = resultNode["state"].asString();
	if(!resultNode["avatarUrl"].isNull())
		result_.avatarUrl = resultNode["avatarUrl"].asString();
	if(!resultNode["externUid"].isNull())
		result_.externUid = resultNode["externUid"].asString();
	if(!resultNode["email"].isNull())
		result_.email = resultNode["email"].asString();
	if(!resultNode["accessLevel"].isNull())
		result_.accessLevel = std::stoi(resultNode["accessLevel"].asString());
	if(!resultNode["memberType"].isNull())
		result_.memberType = resultNode["memberType"].asString();
	if(!resultNode["sourceId"].isNull())
		result_.sourceId = std::stol(resultNode["sourceId"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string UpdateGroupMemberResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateGroupMemberResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateGroupMemberResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateGroupMemberResult::getSuccess()const
{
	return success_;
}

UpdateGroupMemberResult::Result UpdateGroupMemberResult::getResult()const
{
	return result_;
}

