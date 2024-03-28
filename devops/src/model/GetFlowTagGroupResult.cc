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

#include <alibabacloud/devops/model/GetFlowTagGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetFlowTagGroupResult::GetFlowTagGroupResult() :
	ServiceResult()
{}

GetFlowTagGroupResult::GetFlowTagGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFlowTagGroupResult::~GetFlowTagGroupResult()
{}

void GetFlowTagGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto flowTagGroupNode = value["flowTagGroup"];
	if(!flowTagGroupNode["id"].isNull())
		flowTagGroup_.id = std::stol(flowTagGroupNode["id"].asString());
	if(!flowTagGroupNode["name"].isNull())
		flowTagGroup_.name = flowTagGroupNode["name"].asString();
	if(!flowTagGroupNode["creatorAccountId"].isNull())
		flowTagGroup_.creatorAccountId = flowTagGroupNode["creatorAccountId"].asString();
	if(!flowTagGroupNode["modiferAccountId"].isNull())
		flowTagGroup_.modiferAccountId = flowTagGroupNode["modiferAccountId"].asString();
	auto allflowTagListNode = flowTagGroupNode["flowTagList"]["flowTag"];
	for (auto flowTagGroupNodeflowTagListflowTag : allflowTagListNode)
	{
		FlowTagGroup::FlowTag flowTagObject;
		if(!flowTagGroupNodeflowTagListflowTag["id"].isNull())
			flowTagObject.id = std::stol(flowTagGroupNodeflowTagListflowTag["id"].asString());
		if(!flowTagGroupNodeflowTagListflowTag["name"].isNull())
			flowTagObject.name = flowTagGroupNodeflowTagListflowTag["name"].asString();
		if(!flowTagGroupNodeflowTagListflowTag["color"].isNull())
			flowTagObject.color = flowTagGroupNodeflowTagListflowTag["color"].asString();
		if(!flowTagGroupNodeflowTagListflowTag["creatorAccountId"].isNull())
			flowTagObject.creatorAccountId = flowTagGroupNodeflowTagListflowTag["creatorAccountId"].asString();
		if(!flowTagGroupNodeflowTagListflowTag["modiferAccountId"].isNull())
			flowTagObject.modiferAccountId = flowTagGroupNodeflowTagListflowTag["modiferAccountId"].asString();
		flowTagGroup_.flowTagList.push_back(flowTagObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::string GetFlowTagGroupResult::getRequestId()const
{
	return requestId_;
}

GetFlowTagGroupResult::FlowTagGroup GetFlowTagGroupResult::getFlowTagGroup()const
{
	return flowTagGroup_;
}

std::string GetFlowTagGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetFlowTagGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetFlowTagGroupResult::getSuccess()const
{
	return success_;
}

