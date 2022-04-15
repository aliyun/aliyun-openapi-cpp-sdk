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
	auto allTaskFlowListNode = value["TaskFlowList"]["TaskFlow"];
	for (auto valueTaskFlowListTaskFlow : allTaskFlowListNode)
	{
		TaskFlow taskFlowListObject;
		if(!valueTaskFlowListTaskFlow["Id"].isNull())
			taskFlowListObject.id = std::stol(valueTaskFlowListTaskFlow["Id"].asString());
		if(!valueTaskFlowListTaskFlow["CreatorId"].isNull())
			taskFlowListObject.creatorId = valueTaskFlowListTaskFlow["CreatorId"].asString();
		if(!valueTaskFlowListTaskFlow["CreatorNickName"].isNull())
			taskFlowListObject.creatorNickName = valueTaskFlowListTaskFlow["CreatorNickName"].asString();
		if(!valueTaskFlowListTaskFlow["DagOwnerNickName"].isNull())
			taskFlowListObject.dagOwnerNickName = valueTaskFlowListTaskFlow["DagOwnerNickName"].asString();
		if(!valueTaskFlowListTaskFlow["DeployId"].isNull())
			taskFlowListObject.deployId = std::stol(valueTaskFlowListTaskFlow["DeployId"].asString());
		if(!valueTaskFlowListTaskFlow["Status"].isNull())
			taskFlowListObject.status = std::stoi(valueTaskFlowListTaskFlow["Status"].asString());
		if(!valueTaskFlowListTaskFlow["LatestInstanceStatus"].isNull())
			taskFlowListObject.latestInstanceStatus = std::stoi(valueTaskFlowListTaskFlow["LatestInstanceStatus"].asString());
		if(!valueTaskFlowListTaskFlow["LatestInstanceTime"].isNull())
			taskFlowListObject.latestInstanceTime = valueTaskFlowListTaskFlow["LatestInstanceTime"].asString();
		taskFlowList_.push_back(taskFlowListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListTaskFlowResult::TaskFlow> ListTaskFlowResult::getTaskFlowList()const
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

