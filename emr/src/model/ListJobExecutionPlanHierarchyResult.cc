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

#include <alibabacloud/emr/model/ListJobExecutionPlanHierarchyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListJobExecutionPlanHierarchyResult::ListJobExecutionPlanHierarchyResult() :
	ServiceResult()
{}

ListJobExecutionPlanHierarchyResult::ListJobExecutionPlanHierarchyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobExecutionPlanHierarchyResult::~ListJobExecutionPlanHierarchyResult()
{}

void ListJobExecutionPlanHierarchyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allHierarchyInfos = value["HierarchyInfos"]["HierarchyInfo"];
	for (auto value : allHierarchyInfos)
	{
		HierarchyInfo hierarchyInfosObject;
		if(!value["Id"].isNull())
			hierarchyInfosObject.id = std::stol(value["Id"].asString());
		if(!value["NodeBizType"].isNull())
			hierarchyInfosObject.nodeBizType = value["NodeBizType"].asString();
		if(!value["NodeType"].isNull())
			hierarchyInfosObject.nodeType = value["NodeType"].asString();
		if(!value["RelateId"].isNull())
			hierarchyInfosObject.relateId = value["RelateId"].asString();
		if(!value["Name"].isNull())
			hierarchyInfosObject.name = value["Name"].asString();
		if(!value["ParentId"].isNull())
			hierarchyInfosObject.parentId = value["ParentId"].asString();
		if(!value["ResourceOwnerId"].isNull())
			hierarchyInfosObject.resourceOwnerId = value["ResourceOwnerId"].asString();
		if(!value["UtcCreateTimestamp"].isNull())
			hierarchyInfosObject.utcCreateTimestamp = std::stol(value["UtcCreateTimestamp"].asString());
		if(!value["UtcModifiedTimestamp"].isNull())
			hierarchyInfosObject.utcModifiedTimestamp = std::stol(value["UtcModifiedTimestamp"].asString());
		if(!value["NodeStatus"].isNull())
			hierarchyInfosObject.nodeStatus = std::stoi(value["NodeStatus"].asString());
		auto executionPlanNode = value["ExecutionPlan"];
		if(!executionPlanNode["BizId"].isNull())
			hierarchyInfosObject.executionPlan.bizId = executionPlanNode["BizId"].asString();
		if(!executionPlanNode["Name"].isNull())
			hierarchyInfosObject.executionPlan.name = executionPlanNode["Name"].asString();
		if(!executionPlanNode["Status"].isNull())
			hierarchyInfosObject.executionPlan.status = std::stoi(executionPlanNode["Status"].asString());
		if(!executionPlanNode["LastExeStatus"].isNull())
			hierarchyInfosObject.executionPlan.lastExeStatus = std::stoi(executionPlanNode["LastExeStatus"].asString());
		if(!executionPlanNode["IsCreateCluster"].isNull())
			hierarchyInfosObject.executionPlan.isCreateCluster = executionPlanNode["IsCreateCluster"].asString() == "true";
		if(!executionPlanNode["IsInterruptWhenError"].isNull())
			hierarchyInfosObject.executionPlan.isInterruptWhenError = executionPlanNode["IsInterruptWhenError"].asString() == "true";
		if(!executionPlanNode["IsCycle"].isNull())
			hierarchyInfosObject.executionPlan.isCycle = executionPlanNode["IsCycle"].asString() == "true";
		if(!executionPlanNode["ScheduleCycle"].isNull())
			hierarchyInfosObject.executionPlan.scheduleCycle = executionPlanNode["ScheduleCycle"].asString();
		if(!executionPlanNode["RegionId"].isNull())
			hierarchyInfosObject.executionPlan.regionId = executionPlanNode["RegionId"].asString();
		if(!executionPlanNode["CronExpr"].isNull())
			hierarchyInfosObject.executionPlan.cronExpr = executionPlanNode["CronExpr"].asString();
		if(!executionPlanNode["UtcCreateTimestamp"].isNull())
			hierarchyInfosObject.executionPlan.utcCreateTimestamp = std::stol(executionPlanNode["UtcCreateTimestamp"].asString());
		if(!executionPlanNode["UtcModifiedTimestamp"].isNull())
			hierarchyInfosObject.executionPlan.utcModifiedTimestamp = std::stol(executionPlanNode["UtcModifiedTimestamp"].asString());
		if(!executionPlanNode["Version"].isNull())
			hierarchyInfosObject.executionPlan.version = executionPlanNode["Version"].asString();
		if(!executionPlanNode["ClusterTemplateId"].isNull())
			hierarchyInfosObject.executionPlan.clusterTemplateId = executionPlanNode["ClusterTemplateId"].asString();
		auto jobNode = value["Job"];
		if(!jobNode["BizId"].isNull())
			hierarchyInfosObject.job.bizId = jobNode["BizId"].asString();
		if(!jobNode["Name"].isNull())
			hierarchyInfosObject.job.name = jobNode["Name"].asString();
		if(!jobNode["JobFailAct"].isNull())
			hierarchyInfosObject.job.jobFailAct = std::stoi(jobNode["JobFailAct"].asString());
		if(!jobNode["JobType"].isNull())
			hierarchyInfosObject.job.jobType = std::stoi(jobNode["JobType"].asString());
		if(!jobNode["EnvParam"].isNull())
			hierarchyInfosObject.job.envParam = jobNode["EnvParam"].asString();
		if(!jobNode["MaxRetry"].isNull())
			hierarchyInfosObject.job.maxRetry = std::stoi(jobNode["MaxRetry"].asString());
		if(!jobNode["RetryInterval"].isNull())
			hierarchyInfosObject.job.retryInterval = std::stoi(jobNode["RetryInterval"].asString());
		hierarchyInfos_.push_back(hierarchyInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["pageSize"].isNull())
		pageSize_ = std::stoi(value["pageSize"].asString());
	if(!value["pageNumber"].isNull())
		pageNumber_ = std::stoi(value["pageNumber"].asString());

}

int ListJobExecutionPlanHierarchyResult::getTotalCount()const
{
	return totalCount_;
}

int ListJobExecutionPlanHierarchyResult::getPageSize()const
{
	return pageSize_;
}

std::string ListJobExecutionPlanHierarchyResult::getErrMsg()const
{
	return errMsg_;
}

int ListJobExecutionPlanHierarchyResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListJobExecutionPlanHierarchyResult::HierarchyInfo> ListJobExecutionPlanHierarchyResult::getHierarchyInfos()const
{
	return hierarchyInfos_;
}

std::string ListJobExecutionPlanHierarchyResult::getSuccess()const
{
	return success_;
}

std::string ListJobExecutionPlanHierarchyResult::getErrCode()const
{
	return errCode_;
}

