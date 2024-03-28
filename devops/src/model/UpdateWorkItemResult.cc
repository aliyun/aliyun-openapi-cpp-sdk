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

#include <alibabacloud/devops/model/UpdateWorkItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateWorkItemResult::UpdateWorkItemResult() :
	ServiceResult()
{}

UpdateWorkItemResult::UpdateWorkItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateWorkItemResult::~UpdateWorkItemResult()
{}

void UpdateWorkItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workitemNode = value["workitem"];
	if(!workitemNode["identifier"].isNull())
		workitem_.identifier = workitemNode["identifier"].asString();
	if(!workitemNode["subject"].isNull())
		workitem_.subject = workitemNode["subject"].asString();
	if(!workitemNode["document"].isNull())
		workitem_.document = workitemNode["document"].asString();
	if(!workitemNode["assignedTo"].isNull())
		workitem_.assignedTo = workitemNode["assignedTo"].asString();
	if(!workitemNode["status"].isNull())
		workitem_.status = workitemNode["status"].asString();
	if(!workitemNode["statusStageIdentifier"].isNull())
		workitem_.statusStageIdentifier = workitemNode["statusStageIdentifier"].asString();
	if(!workitemNode["spaceIdentifier"].isNull())
		workitem_.spaceIdentifier = workitemNode["spaceIdentifier"].asString();
	if(!workitemNode["spaceName"].isNull())
		workitem_.spaceName = workitemNode["spaceName"].asString();
	if(!workitemNode["spaceType"].isNull())
		workitem_.spaceType = workitemNode["spaceType"].asString();
	if(!workitemNode["logicalStatus"].isNull())
		workitem_.logicalStatus = workitemNode["logicalStatus"].asString();
	if(!workitemNode["categoryIdentifier"].isNull())
		workitem_.categoryIdentifier = workitemNode["categoryIdentifier"].asString();
	if(!workitemNode["parentIdentifier"].isNull())
		workitem_.parentIdentifier = workitemNode["parentIdentifier"].asString();
	if(!workitemNode["workitemTypeIdentifier"].isNull())
		workitem_.workitemTypeIdentifier = workitemNode["workitemTypeIdentifier"].asString();
	if(!workitemNode["updateStatusAt"].isNull())
		workitem_.updateStatusAt = std::stol(workitemNode["updateStatusAt"].asString());
	if(!workitemNode["serialNumber"].isNull())
		workitem_.serialNumber = workitemNode["serialNumber"].asString();
	if(!workitemNode["gmtCreate"].isNull())
		workitem_.gmtCreate = std::stol(workitemNode["gmtCreate"].asString());
	if(!workitemNode["gmtModified"].isNull())
		workitem_.gmtModified = std::stol(workitemNode["gmtModified"].asString());
	if(!workitemNode["creator"].isNull())
		workitem_.creator = workitemNode["creator"].asString();
	if(!workitemNode["modifier"].isNull())
		workitem_.modifier = workitemNode["modifier"].asString();
	if(!workitemNode["statusIdentifier"].isNull())
		workitem_.statusIdentifier = workitemNode["statusIdentifier"].asString();
	if(!workitemNode["sprintIdentifier"].isNull())
		workitem_.sprintIdentifier = workitemNode["sprintIdentifier"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

UpdateWorkItemResult::Workitem UpdateWorkItemResult::getWorkitem()const
{
	return workitem_;
}

std::string UpdateWorkItemResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateWorkItemResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateWorkItemResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateWorkItemResult::getSuccess()const
{
	return success_;
}

