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

#include <alibabacloud/emr/model/ListExecutionPlanInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListExecutionPlanInstancesResult::ListExecutionPlanInstancesResult() :
	ServiceResult()
{}

ListExecutionPlanInstancesResult::ListExecutionPlanInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutionPlanInstancesResult::~ListExecutionPlanInstancesResult()
{}

void ListExecutionPlanInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutionPlanInstancesNode = value["ExecutionPlanInstances"]["ExecutionPlanInstance"];
	for (auto valueExecutionPlanInstancesExecutionPlanInstance : allExecutionPlanInstancesNode)
	{
		ExecutionPlanInstance executionPlanInstancesObject;
		if(!valueExecutionPlanInstancesExecutionPlanInstance["Id"].isNull())
			executionPlanInstancesObject.id = valueExecutionPlanInstancesExecutionPlanInstance["Id"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["ExecutionPlanId"].isNull())
			executionPlanInstancesObject.executionPlanId = valueExecutionPlanInstancesExecutionPlanInstance["ExecutionPlanId"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["ExecutionPlanName"].isNull())
			executionPlanInstancesObject.executionPlanName = valueExecutionPlanInstancesExecutionPlanInstance["ExecutionPlanName"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["StartTime"].isNull())
			executionPlanInstancesObject.startTime = std::stol(valueExecutionPlanInstancesExecutionPlanInstance["StartTime"].asString());
		if(!valueExecutionPlanInstancesExecutionPlanInstance["RunTime"].isNull())
			executionPlanInstancesObject.runTime = std::stoi(valueExecutionPlanInstancesExecutionPlanInstance["RunTime"].asString());
		if(!valueExecutionPlanInstancesExecutionPlanInstance["ClusterId"].isNull())
			executionPlanInstancesObject.clusterId = valueExecutionPlanInstancesExecutionPlanInstance["ClusterId"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["ClusterName"].isNull())
			executionPlanInstancesObject.clusterName = valueExecutionPlanInstancesExecutionPlanInstance["ClusterName"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["ClusterType"].isNull())
			executionPlanInstancesObject.clusterType = valueExecutionPlanInstancesExecutionPlanInstance["ClusterType"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["Status"].isNull())
			executionPlanInstancesObject.status = valueExecutionPlanInstancesExecutionPlanInstance["Status"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["LogEnable"].isNull())
			executionPlanInstancesObject.logEnable = valueExecutionPlanInstancesExecutionPlanInstance["LogEnable"].asString() == "true";
		if(!valueExecutionPlanInstancesExecutionPlanInstance["LogPath"].isNull())
			executionPlanInstancesObject.logPath = valueExecutionPlanInstancesExecutionPlanInstance["LogPath"].asString();
		if(!valueExecutionPlanInstancesExecutionPlanInstance["WorkflowApp"].isNull())
			executionPlanInstancesObject.workflowApp = valueExecutionPlanInstancesExecutionPlanInstance["WorkflowApp"].asString();
		executionPlanInstances_.push_back(executionPlanInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListExecutionPlanInstancesResult::ExecutionPlanInstance> ListExecutionPlanInstancesResult::getExecutionPlanInstances()const
{
	return executionPlanInstances_;
}

int ListExecutionPlanInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListExecutionPlanInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListExecutionPlanInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

