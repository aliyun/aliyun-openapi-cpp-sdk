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
	auto allExecutionPlanInstances = value["ExecutionPlanInstances"]["ExecutionPlanInstance"];
	for (auto value : allExecutionPlanInstances)
	{
		ExecutionPlanInstance executionPlanInstancesObject;
		if(!value["Id"].isNull())
			executionPlanInstancesObject.id = value["Id"].asString();
		if(!value["ExecutionPlanId"].isNull())
			executionPlanInstancesObject.executionPlanId = value["ExecutionPlanId"].asString();
		if(!value["ExecutionPlanName"].isNull())
			executionPlanInstancesObject.executionPlanName = value["ExecutionPlanName"].asString();
		if(!value["StartTime"].isNull())
			executionPlanInstancesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["RunTime"].isNull())
			executionPlanInstancesObject.runTime = std::stoi(value["RunTime"].asString());
		if(!value["ClusterId"].isNull())
			executionPlanInstancesObject.clusterId = value["ClusterId"].asString();
		if(!value["ClusterName"].isNull())
			executionPlanInstancesObject.clusterName = value["ClusterName"].asString();
		if(!value["ClusterType"].isNull())
			executionPlanInstancesObject.clusterType = value["ClusterType"].asString();
		if(!value["Status"].isNull())
			executionPlanInstancesObject.status = value["Status"].asString();
		if(!value["LogEnable"].isNull())
			executionPlanInstancesObject.logEnable = value["LogEnable"].asString() == "true";
		if(!value["LogPath"].isNull())
			executionPlanInstancesObject.logPath = value["LogPath"].asString();
		if(!value["WorkflowApp"].isNull())
			executionPlanInstancesObject.workflowApp = value["WorkflowApp"].asString();
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

