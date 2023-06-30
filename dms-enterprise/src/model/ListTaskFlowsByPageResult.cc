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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowsByPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTaskFlowsByPageResult::ListTaskFlowsByPageResult() :
	ServiceResult()
{}

ListTaskFlowsByPageResult::ListTaskFlowsByPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskFlowsByPageResult::~ListTaskFlowsByPageResult()
{}

void ListTaskFlowsByPageResult::parse(const std::string &payload)
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
		if(!valueTaskFlowListTaskFlow["DagName"].isNull())
			taskFlowListObject.dagName = valueTaskFlowListTaskFlow["DagName"].asString();
		if(!valueTaskFlowListTaskFlow["Description"].isNull())
			taskFlowListObject.description = valueTaskFlowListTaskFlow["Description"].asString();
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
		if(!valueTaskFlowListTaskFlow["ScenarioId"].isNull())
			taskFlowListObject.scenarioId = valueTaskFlowListTaskFlow["ScenarioId"].asString();
		if(!valueTaskFlowListTaskFlow["CronSwitch"].isNull())
			taskFlowListObject.cronSwitch = valueTaskFlowListTaskFlow["CronSwitch"].asString() == "true";
		if(!valueTaskFlowListTaskFlow["CronStr"].isNull())
			taskFlowListObject.cronStr = valueTaskFlowListTaskFlow["CronStr"].asString();
		if(!valueTaskFlowListTaskFlow["ScheduleParam"].isNull())
			taskFlowListObject.scheduleParam = valueTaskFlowListTaskFlow["ScheduleParam"].asString();
		if(!valueTaskFlowListTaskFlow["TriggerType"].isNull())
			taskFlowListObject.triggerType = std::stoi(valueTaskFlowListTaskFlow["TriggerType"].asString());
		if(!valueTaskFlowListTaskFlow["CronType"].isNull())
			taskFlowListObject.cronType = std::stoi(valueTaskFlowListTaskFlow["CronType"].asString());
		if(!valueTaskFlowListTaskFlow["CronBeginDate"].isNull())
			taskFlowListObject.cronBeginDate = valueTaskFlowListTaskFlow["CronBeginDate"].asString();
		if(!valueTaskFlowListTaskFlow["CronEndDate"].isNull())
			taskFlowListObject.cronEndDate = valueTaskFlowListTaskFlow["CronEndDate"].asString();
		if(!valueTaskFlowListTaskFlow["TimeZoneId"].isNull())
			taskFlowListObject.timeZoneId = valueTaskFlowListTaskFlow["TimeZoneId"].asString();
		if(!valueTaskFlowListTaskFlow["DagOwnerId"].isNull())
			taskFlowListObject.dagOwnerId = valueTaskFlowListTaskFlow["DagOwnerId"].asString();
		taskFlowList_.push_back(taskFlowListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListTaskFlowsByPageResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListTaskFlowsByPageResult::TaskFlow> ListTaskFlowsByPageResult::getTaskFlowList()const
{
	return taskFlowList_;
}

std::string ListTaskFlowsByPageResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTaskFlowsByPageResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTaskFlowsByPageResult::getSuccess()const
{
	return success_;
}

