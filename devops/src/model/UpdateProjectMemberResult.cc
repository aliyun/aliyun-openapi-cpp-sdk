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

#include <alibabacloud/devops/model/UpdateProjectMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateProjectMemberResult::UpdateProjectMemberResult() :
	ServiceResult()
{}

UpdateProjectMemberResult::UpdateProjectMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateProjectMemberResult::~UpdateProjectMemberResult()
{}

void UpdateProjectMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto memberNode = value["member"];
	if(!memberNode["id"].isNull())
		member_.id = memberNode["id"].asString();
	if(!memberNode["roleIdentifier"].isNull())
		member_.roleIdentifier = memberNode["roleIdentifier"].asString();
	if(!memberNode["userIdentifier"].isNull())
		member_.userIdentifier = memberNode["userIdentifier"].asString();
	if(!memberNode["userType"].isNull())
		member_.userType = memberNode["userType"].asString();
	if(!memberNode["targetType"].isNull())
		member_.targetType = memberNode["targetType"].asString();
	if(!memberNode["gmtCreate"].isNull())
		member_.gmtCreate = std::stol(memberNode["gmtCreate"].asString());
	if(!memberNode["gmtModified"].isNull())
		member_.gmtModified = std::stol(memberNode["gmtModified"].asString());
	if(!memberNode["targetIdentifier"].isNull())
		member_.targetIdentifier = memberNode["targetIdentifier"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string UpdateProjectMemberResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateProjectMemberResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string UpdateProjectMemberResult::getErrorCode()const
{
	return errorCode_;
}

UpdateProjectMemberResult::Member UpdateProjectMemberResult::getMember()const
{
	return member_;
}

bool UpdateProjectMemberResult::getSuccess()const
{
	return success_;
}

