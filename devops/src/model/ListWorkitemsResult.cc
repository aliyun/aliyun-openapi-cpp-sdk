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

#include <alibabacloud/devops/model/ListWorkitemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListWorkitemsResult::ListWorkitemsResult() :
	ServiceResult()
{}

ListWorkitemsResult::ListWorkitemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkitemsResult::~ListWorkitemsResult()
{}

void ListWorkitemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allworkitemsNode = value["workitems"]["workitem"];
	for (auto valueworkitemsworkitem : allworkitemsNode)
	{
		Workitem workitemsObject;
		if(!valueworkitemsworkitem["identifier"].isNull())
			workitemsObject.identifier = valueworkitemsworkitem["identifier"].asString();
		if(!valueworkitemsworkitem["subject"].isNull())
			workitemsObject.subject = valueworkitemsworkitem["subject"].asString();
		if(!valueworkitemsworkitem["document"].isNull())
			workitemsObject.document = valueworkitemsworkitem["document"].asString();
		if(!valueworkitemsworkitem["assignedTo"].isNull())
			workitemsObject.assignedTo = valueworkitemsworkitem["assignedTo"].asString();
		if(!valueworkitemsworkitem["status"].isNull())
			workitemsObject.status = valueworkitemsworkitem["status"].asString();
		if(!valueworkitemsworkitem["statusStageIdentifier"].isNull())
			workitemsObject.statusStageIdentifier = valueworkitemsworkitem["statusStageIdentifier"].asString();
		if(!valueworkitemsworkitem["spaceIdentifier"].isNull())
			workitemsObject.spaceIdentifier = valueworkitemsworkitem["spaceIdentifier"].asString();
		if(!valueworkitemsworkitem["spaceName"].isNull())
			workitemsObject.spaceName = valueworkitemsworkitem["spaceName"].asString();
		if(!valueworkitemsworkitem["spaceType"].isNull())
			workitemsObject.spaceType = valueworkitemsworkitem["spaceType"].asString();
		if(!valueworkitemsworkitem["logicalStatus"].isNull())
			workitemsObject.logicalStatus = valueworkitemsworkitem["logicalStatus"].asString();
		if(!valueworkitemsworkitem["categoryIdentifier"].isNull())
			workitemsObject.categoryIdentifier = valueworkitemsworkitem["categoryIdentifier"].asString();
		if(!valueworkitemsworkitem["parentIdentifier"].isNull())
			workitemsObject.parentIdentifier = valueworkitemsworkitem["parentIdentifier"].asString();
		if(!valueworkitemsworkitem["workitemTypeIdentifier"].isNull())
			workitemsObject.workitemTypeIdentifier = valueworkitemsworkitem["workitemTypeIdentifier"].asString();
		if(!valueworkitemsworkitem["updateStatusAt"].isNull())
			workitemsObject.updateStatusAt = std::stol(valueworkitemsworkitem["updateStatusAt"].asString());
		if(!valueworkitemsworkitem["serialNumber"].isNull())
			workitemsObject.serialNumber = valueworkitemsworkitem["serialNumber"].asString();
		if(!valueworkitemsworkitem["gmtCreate"].isNull())
			workitemsObject.gmtCreate = std::stol(valueworkitemsworkitem["gmtCreate"].asString());
		if(!valueworkitemsworkitem["gmtModified"].isNull())
			workitemsObject.gmtModified = std::stol(valueworkitemsworkitem["gmtModified"].asString());
		if(!valueworkitemsworkitem["creator"].isNull())
			workitemsObject.creator = valueworkitemsworkitem["creator"].asString();
		if(!valueworkitemsworkitem["modifier"].isNull())
			workitemsObject.modifier = valueworkitemsworkitem["modifier"].asString();
		if(!valueworkitemsworkitem["statusIdentifier"].isNull())
			workitemsObject.statusIdentifier = valueworkitemsworkitem["statusIdentifier"].asString();
		if(!valueworkitemsworkitem["sprintIdentifier"].isNull())
			workitemsObject.sprintIdentifier = valueworkitemsworkitem["sprintIdentifier"].asString();
		if(!valueworkitemsworkitem["finishTime"].isNull())
			workitemsObject.finishTime = std::stol(valueworkitemsworkitem["finishTime"].asString());
		workitems_.push_back(workitemsObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stol(value["totalCount"].asString());
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();
	if(!value["maxResults"].isNull())
		maxResults_ = std::stol(value["maxResults"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

long ListWorkitemsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListWorkitemsResult::Workitem> ListWorkitemsResult::getworkitems()const
{
	return workitems_;
}

std::string ListWorkitemsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListWorkitemsResult::getRequestId()const
{
	return requestId_;
}

long ListWorkitemsResult::getMaxResults()const
{
	return maxResults_;
}

std::string ListWorkitemsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string ListWorkitemsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListWorkitemsResult::getSuccess()const
{
	return success_;
}

