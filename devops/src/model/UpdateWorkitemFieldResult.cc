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

#include <alibabacloud/devops/model/UpdateWorkitemFieldResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateWorkitemFieldResult::UpdateWorkitemFieldResult() :
	ServiceResult()
{}

UpdateWorkitemFieldResult::UpdateWorkitemFieldResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateWorkitemFieldResult::~UpdateWorkitemFieldResult()
{}

void UpdateWorkitemFieldResult::parse(const std::string &payload)
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
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

UpdateWorkitemFieldResult::Workitem UpdateWorkitemFieldResult::getWorkitem()const
{
	return workitem_;
}

std::string UpdateWorkitemFieldResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateWorkitemFieldResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string UpdateWorkitemFieldResult::getErrorCode()const
{
	return errorCode_;
}

bool UpdateWorkitemFieldResult::getSuccess()const
{
	return success_;
}

