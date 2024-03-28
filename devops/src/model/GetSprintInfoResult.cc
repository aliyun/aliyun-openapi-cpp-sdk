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

#include <alibabacloud/devops/model/GetSprintInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetSprintInfoResult::GetSprintInfoResult() :
	ServiceResult()
{}

GetSprintInfoResult::GetSprintInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSprintInfoResult::~GetSprintInfoResult()
{}

void GetSprintInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sprintNode = value["sprint"];
	if(!sprintNode["creator"].isNull())
		sprint_.creator = sprintNode["creator"].asString();
	if(!sprintNode["description"].isNull())
		sprint_.description = sprintNode["description"].asString();
	if(!sprintNode["gmtCreate"].isNull())
		sprint_.gmtCreate = std::stol(sprintNode["gmtCreate"].asString());
	if(!sprintNode["gmtModified"].isNull())
		sprint_.gmtModified = std::stol(sprintNode["gmtModified"].asString());
	if(!sprintNode["endDate"].isNull())
		sprint_.endDate = std::stol(sprintNode["endDate"].asString());
	if(!sprintNode["startDate"].isNull())
		sprint_.startDate = std::stol(sprintNode["startDate"].asString());
	if(!sprintNode["identifier"].isNull())
		sprint_.identifier = sprintNode["identifier"].asString();
	if(!sprintNode["modifier"].isNull())
		sprint_.modifier = sprintNode["modifier"].asString();
	if(!sprintNode["name"].isNull())
		sprint_.name = sprintNode["name"].asString();
	if(!sprintNode["spaceIdentifier"].isNull())
		sprint_.spaceIdentifier = sprintNode["spaceIdentifier"].asString();
	if(!sprintNode["scope"].isNull())
		sprint_.scope = sprintNode["scope"].asString();
	if(!sprintNode["status"].isNull())
		sprint_.status = sprintNode["status"].asString();
		auto allOwners = sprintNode["owners"]["owners"];
		for (auto value : allOwners)
			sprint_.owners.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetSprintInfoResult::getRequestId()const
{
	return requestId_;
}

GetSprintInfoResult::Sprint GetSprintInfoResult::getSprint()const
{
	return sprint_;
}

std::string GetSprintInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetSprintInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetSprintInfoResult::getSuccess()const
{
	return success_;
}

