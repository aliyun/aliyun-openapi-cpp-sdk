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

#include <alibabacloud/devops/model/GetWorkItemInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkItemInfoResult::GetWorkItemInfoResult() :
	ServiceResult()
{}

GetWorkItemInfoResult::GetWorkItemInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkItemInfoResult::~GetWorkItemInfoResult()
{}

void GetWorkItemInfoResult::parse(const std::string &payload)
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
	if(!workitemNode["finishTime"].isNull())
		workitem_.finishTime = std::stol(workitemNode["finishTime"].asString());
	auto allcustomFieldsNode = workitemNode["customFields"]["customField"];
	for (auto workitemNodecustomFieldscustomField : allcustomFieldsNode)
	{
		Workitem::CustomField customFieldObject;
		if(!workitemNodecustomFieldscustomField["fieldIdentifier"].isNull())
			customFieldObject.fieldIdentifier = workitemNodecustomFieldscustomField["fieldIdentifier"].asString();
		if(!workitemNodecustomFieldscustomField["fieldFormat"].isNull())
			customFieldObject.fieldFormat = workitemNodecustomFieldscustomField["fieldFormat"].asString();
		if(!workitemNodecustomFieldscustomField["fieldClassName"].isNull())
			customFieldObject.fieldClassName = workitemNodecustomFieldscustomField["fieldClassName"].asString();
		if(!workitemNodecustomFieldscustomField["objectValue"].isNull())
			customFieldObject.objectValue = workitemNodecustomFieldscustomField["objectValue"].asString();
		if(!workitemNodecustomFieldscustomField["value"].isNull())
			customFieldObject.value = workitemNodecustomFieldscustomField["value"].asString();
		if(!workitemNodecustomFieldscustomField["workitemIdentifier"].isNull())
			customFieldObject.workitemIdentifier = workitemNodecustomFieldscustomField["workitemIdentifier"].asString();
		if(!workitemNodecustomFieldscustomField["position"].isNull())
			customFieldObject.position = std::stol(workitemNodecustomFieldscustomField["position"].asString());
		if(!workitemNodecustomFieldscustomField["level"].isNull())
			customFieldObject.level = std::stol(workitemNodecustomFieldscustomField["level"].asString());
		auto allvalueListNode = workitemNodecustomFieldscustomField["valueList"]["Value"];
		for (auto workitemNodecustomFieldscustomFieldvalueListValue : allvalueListNode)
		{
			Workitem::CustomField::Value valueListObject;
			if(!workitemNodecustomFieldscustomFieldvalueListValue["value"].isNull())
				valueListObject.value = workitemNodecustomFieldscustomFieldvalueListValue["value"].asString();
			if(!workitemNodecustomFieldscustomFieldvalueListValue["valueEn"].isNull())
				valueListObject.valueEn = workitemNodecustomFieldscustomFieldvalueListValue["valueEn"].asString();
			if(!workitemNodecustomFieldscustomFieldvalueListValue["displayValue"].isNull())
				valueListObject.displayValue = workitemNodecustomFieldscustomFieldvalueListValue["displayValue"].asString();
			if(!workitemNodecustomFieldscustomFieldvalueListValue["identifier"].isNull())
				valueListObject.identifier = workitemNodecustomFieldscustomFieldvalueListValue["identifier"].asString();
			if(!workitemNodecustomFieldscustomFieldvalueListValue["level"].isNull())
				valueListObject.level = std::stol(workitemNodecustomFieldscustomFieldvalueListValue["level"].asString());
			customFieldObject.valueList.push_back(valueListObject);
		}
		workitem_.customFields.push_back(customFieldObject);
	}
	auto alltagDetailsNode = workitemNode["tagDetails"]["tagDetailsItem"];
	for (auto workitemNodetagDetailstagDetailsItem : alltagDetailsNode)
	{
		Workitem::TagDetailsItem tagDetailsItemObject;
		if(!workitemNodetagDetailstagDetailsItem["identifier"].isNull())
			tagDetailsItemObject.identifier = workitemNodetagDetailstagDetailsItem["identifier"].asString();
		if(!workitemNodetagDetailstagDetailsItem["name"].isNull())
			tagDetailsItemObject.name = workitemNodetagDetailstagDetailsItem["name"].asString();
		if(!workitemNodetagDetailstagDetailsItem["color"].isNull())
			tagDetailsItemObject.color = workitemNodetagDetailstagDetailsItem["color"].asString();
		workitem_.tagDetails.push_back(tagDetailsItemObject);
	}
		auto allSprint = workitemNode["sprint"]["sprint"];
		for (auto value : allSprint)
			workitem_.sprint.push_back(value.asString());
		auto allTag = workitemNode["tag"]["tag"];
		for (auto value : allTag)
			workitem_.tag.push_back(value.asString());
		auto allParticipant = workitemNode["participant"]["participant"];
		for (auto value : allParticipant)
			workitem_.participant.push_back(value.asString());
		auto allTracker = workitemNode["tracker"]["tracker"];
		for (auto value : allTracker)
			workitem_.tracker.push_back(value.asString());
		auto allVerifier = workitemNode["verifier"]["verifier"];
		for (auto value : allVerifier)
			workitem_.verifier.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

GetWorkItemInfoResult::Workitem GetWorkItemInfoResult::getWorkitem()const
{
	return workitem_;
}

std::string GetWorkItemInfoResult::getRequestId()const
{
	return requestId_;
}

std::string GetWorkItemInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetWorkItemInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetWorkItemInfoResult::getSuccess()const
{
	return success_;
}

