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

#include <alibabacloud/devops/model/ListFlowTagGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListFlowTagGroupsResult::ListFlowTagGroupsResult() :
	ServiceResult()
{}

ListFlowTagGroupsResult::ListFlowTagGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowTagGroupsResult::~ListFlowTagGroupsResult()
{}

void ListFlowTagGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allflowTagGroupsNode = value["flowTagGroups"]["FlowTagGroup"];
	for (auto valueflowTagGroupsFlowTagGroup : allflowTagGroupsNode)
	{
		FlowTagGroup flowTagGroupsObject;
		if(!valueflowTagGroupsFlowTagGroup["id"].isNull())
			flowTagGroupsObject.id = std::stol(valueflowTagGroupsFlowTagGroup["id"].asString());
		if(!valueflowTagGroupsFlowTagGroup["name"].isNull())
			flowTagGroupsObject.name = valueflowTagGroupsFlowTagGroup["name"].asString();
		if(!valueflowTagGroupsFlowTagGroup["creatorAccountId"].isNull())
			flowTagGroupsObject.creatorAccountId = valueflowTagGroupsFlowTagGroup["creatorAccountId"].asString();
		if(!valueflowTagGroupsFlowTagGroup["modiferAccountId"].isNull())
			flowTagGroupsObject.modiferAccountId = valueflowTagGroupsFlowTagGroup["modiferAccountId"].asString();
		flowTagGroups_.push_back(flowTagGroupsObject);
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

std::string ListFlowTagGroupsResult::getRequestId()const
{
	return requestId_;
}

std::string ListFlowTagGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListFlowTagGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListFlowTagGroupsResult::FlowTagGroup> ListFlowTagGroupsResult::getflowTagGroups()const
{
	return flowTagGroups_;
}

bool ListFlowTagGroupsResult::getSuccess()const
{
	return success_;
}

