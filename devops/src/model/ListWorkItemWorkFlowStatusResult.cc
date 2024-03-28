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

#include <alibabacloud/devops/model/ListWorkItemWorkFlowStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListWorkItemWorkFlowStatusResult::ListWorkItemWorkFlowStatusResult() :
	ServiceResult()
{}

ListWorkItemWorkFlowStatusResult::ListWorkItemWorkFlowStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkItemWorkFlowStatusResult::~ListWorkItemWorkFlowStatusResult()
{}

void ListWorkItemWorkFlowStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allstatusesNode = value["statuses"]["status"];
	for (auto valuestatusesstatus : allstatusesNode)
	{
		Status statusesObject;
		if(!valuestatusesstatus["identifier"].isNull())
			statusesObject.identifier = valuestatusesstatus["identifier"].asString();
		if(!valuestatusesstatus["name"].isNull())
			statusesObject.name = valuestatusesstatus["name"].asString();
		if(!valuestatusesstatus["workflowStageName"].isNull())
			statusesObject.workflowStageName = valuestatusesstatus["workflowStageName"].asString();
		if(!valuestatusesstatus["workflowStageIdentifier"].isNull())
			statusesObject.workflowStageIdentifier = valuestatusesstatus["workflowStageIdentifier"].asString();
		if(!valuestatusesstatus["source"].isNull())
			statusesObject.source = valuestatusesstatus["source"].asString();
		if(!valuestatusesstatus["gmtCreate"].isNull())
			statusesObject.gmtCreate = std::stol(valuestatusesstatus["gmtCreate"].asString());
		if(!valuestatusesstatus["creator"].isNull())
			statusesObject.creator = valuestatusesstatus["creator"].asString();
		if(!valuestatusesstatus["description"].isNull())
			statusesObject.description = valuestatusesstatus["description"].asString();
		if(!valuestatusesstatus["modifier"].isNull())
			statusesObject.modifier = valuestatusesstatus["modifier"].asString();
		if(!valuestatusesstatus["gmtModified"].isNull())
			statusesObject.gmtModified = std::stol(valuestatusesstatus["gmtModified"].asString());
		if(!valuestatusesstatus["resourceType"].isNull())
			statusesObject.resourceType = valuestatusesstatus["resourceType"].asString();
		statuses_.push_back(statusesObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string ListWorkItemWorkFlowStatusResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListWorkItemWorkFlowStatusResult::Status> ListWorkItemWorkFlowStatusResult::getstatuses()const
{
	return statuses_;
}

std::string ListWorkItemWorkFlowStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListWorkItemWorkFlowStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListWorkItemWorkFlowStatusResult::getSuccess()const
{
	return success_;
}

