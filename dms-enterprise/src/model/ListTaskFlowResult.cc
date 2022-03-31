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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTaskFlowResult::ListTaskFlowResult() :
	ServiceResult()
{}

ListTaskFlowResult::ListTaskFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskFlowResult::~ListTaskFlowResult()
{}

void ListTaskFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskFlowListNode = value["TaskFlowList"]["DAGInstance"];
	for (auto valueTaskFlowListDAGInstance : allTaskFlowListNode)
	{
		DAGInstance taskFlowListObject;
		if(!valueTaskFlowListDAGInstance["Id"].isNull())
			taskFlowListObject.id = std::stol(valueTaskFlowListDAGInstance["Id"].asString());
		if(!valueTaskFlowListDAGInstance["CreatorId"].isNull())
			taskFlowListObject.creatorId = valueTaskFlowListDAGInstance["CreatorId"].asString();
		if(!valueTaskFlowListDAGInstance["CreatorNickName"].isNull())
			taskFlowListObject.creatorNickName = valueTaskFlowListDAGInstance["CreatorNickName"].asString();
		if(!valueTaskFlowListDAGInstance["DagOwnerNickName"].isNull())
			taskFlowListObject.dagOwnerNickName = valueTaskFlowListDAGInstance["DagOwnerNickName"].asString();
		if(!valueTaskFlowListDAGInstance["DeployId"].isNull())
			taskFlowListObject.deployId = std::stol(valueTaskFlowListDAGInstance["DeployId"].asString());
		if(!valueTaskFlowListDAGInstance["Status"].isNull())
			taskFlowListObject.status = std::stoi(valueTaskFlowListDAGInstance["Status"].asString());
		if(!valueTaskFlowListDAGInstance["LatestInstanceStatus"].isNull())
			taskFlowListObject.latestInstanceStatus = std::stoi(valueTaskFlowListDAGInstance["LatestInstanceStatus"].asString());
		if(!valueTaskFlowListDAGInstance["LatestInstanceTime"].isNull())
			taskFlowListObject.latestInstanceTime = valueTaskFlowListDAGInstance["LatestInstanceTime"].asString();
		taskFlowList_.push_back(taskFlowListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListTaskFlowResult::DAGInstance> ListTaskFlowResult::getTaskFlowList()const
{
	return taskFlowList_;
}

std::string ListTaskFlowResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTaskFlowResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTaskFlowResult::getSuccess()const
{
	return success_;
}

