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

#include <alibabacloud/sophonsoar/model/DescribeProcessTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeProcessTasksResult::DescribeProcessTasksResult() :
	ServiceResult()
{}

DescribeProcessTasksResult::DescribeProcessTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProcessTasksResult::~DescribeProcessTasksResult()
{}

void DescribeProcessTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProcessTasksNode = value["ProcessTasks"]["Data"];
	for (auto valueProcessTasksData : allProcessTasksNode)
	{
		Data processTasksObject;
		if(!valueProcessTasksData["TaskId"].isNull())
			processTasksObject.taskId = valueProcessTasksData["TaskId"].asString();
		if(!valueProcessTasksData["Creator"].isNull())
			processTasksObject.creator = valueProcessTasksData["Creator"].asString();
		if(!valueProcessTasksData["GmtCreateMillis"].isNull())
			processTasksObject.gmtCreateMillis = std::stol(valueProcessTasksData["GmtCreateMillis"].asString());
		if(!valueProcessTasksData["GmtModifiedMillis"].isNull())
			processTasksObject.gmtModifiedMillis = std::stol(valueProcessTasksData["GmtModifiedMillis"].asString());
		if(!valueProcessTasksData["TaskName"].isNull())
			processTasksObject.taskName = valueProcessTasksData["TaskName"].asString();
		if(!valueProcessTasksData["YunCode"].isNull())
			processTasksObject.yunCode = valueProcessTasksData["YunCode"].asString();
		if(!valueProcessTasksData["EntityName"].isNull())
			processTasksObject.entityName = valueProcessTasksData["EntityName"].asString();
		if(!valueProcessTasksData["EntityType"].isNull())
			processTasksObject.entityType = valueProcessTasksData["EntityType"].asString();
		if(!valueProcessTasksData["EntityValue"].isNull())
			processTasksObject.entityValue = valueProcessTasksData["EntityValue"].asString();
		if(!valueProcessTasksData["EntityKey"].isNull())
			processTasksObject.entityKey = valueProcessTasksData["EntityKey"].asString();
		if(!valueProcessTasksData["TaskStatus"].isNull())
			processTasksObject.taskStatus = std::stoi(valueProcessTasksData["TaskStatus"].asString());
		if(!valueProcessTasksData["Scope"].isNull())
			processTasksObject.scope = valueProcessTasksData["Scope"].asString();
		if(!valueProcessTasksData["InputParams"].isNull())
			processTasksObject.inputParams = valueProcessTasksData["InputParams"].asString();
		if(!valueProcessTasksData["SceneCode"].isNull())
			processTasksObject.sceneCode = valueProcessTasksData["SceneCode"].asString();
		if(!valueProcessTasksData["SceneName"].isNull())
			processTasksObject.sceneName = valueProcessTasksData["SceneName"].asString();
		if(!valueProcessTasksData["ProcessTime"].isNull())
			processTasksObject.processTime = std::stol(valueProcessTasksData["ProcessTime"].asString());
		if(!valueProcessTasksData["RemoveTime"].isNull())
			processTasksObject.removeTime = std::stol(valueProcessTasksData["RemoveTime"].asString());
		if(!valueProcessTasksData["ProcessStrategyUuid"].isNull())
			processTasksObject.processStrategyUuid = valueProcessTasksData["ProcessStrategyUuid"].asString();
		if(!valueProcessTasksData["TenantId"].isNull())
			processTasksObject.tenantId = valueProcessTasksData["TenantId"].asString();
		if(!valueProcessTasksData["Source"].isNull())
			processTasksObject.source = valueProcessTasksData["Source"].asString();
		if(!valueProcessTasksData["RemoveFlag"].isNull())
			processTasksObject.removeFlag = std::stoi(valueProcessTasksData["RemoveFlag"].asString());
		if(!valueProcessTasksData["RetryFlag"].isNull())
			processTasksObject.retryFlag = std::stoi(valueProcessTasksData["RetryFlag"].asString());
		if(!valueProcessTasksData["ErrCode"].isNull())
			processTasksObject.errCode = valueProcessTasksData["ErrCode"].asString();
		if(!valueProcessTasksData["ErrMsg"].isNull())
			processTasksObject.errMsg = valueProcessTasksData["ErrMsg"].asString();
		if(!valueProcessTasksData["ErrTip"].isNull())
			processTasksObject.errTip = valueProcessTasksData["ErrTip"].asString();
		if(!valueProcessTasksData["EntityUuid"].isNull())
			processTasksObject.entityUuid = valueProcessTasksData["EntityUuid"].asString();
		if(!valueProcessTasksData["EventUuid"].isNull())
			processTasksObject.eventUuid = valueProcessTasksData["EventUuid"].asString();
		if(!valueProcessTasksData["ReqUuid"].isNull())
			processTasksObject.reqUuid = valueProcessTasksData["ReqUuid"].asString();
		if(!valueProcessTasksData["TriggerSource"].isNull())
			processTasksObject.triggerSource = valueProcessTasksData["TriggerSource"].asString();
		processTasks_.push_back(processTasksObject);
	}
	auto pageNode = value["Page"];
	if(!pageNode["TotalCount"].isNull())
		page_.totalCount = std::stoi(pageNode["TotalCount"].asString());
	if(!pageNode["PageNumber"].isNull())
		page_.pageNumber = std::stoi(pageNode["PageNumber"].asString());
	if(!pageNode["PageSize"].isNull())
		page_.pageSize = std::stoi(pageNode["PageSize"].asString());

}

std::vector<DescribeProcessTasksResult::Data> DescribeProcessTasksResult::getProcessTasks()const
{
	return processTasks_;
}

DescribeProcessTasksResult::Page DescribeProcessTasksResult::getPage()const
{
	return page_;
}

