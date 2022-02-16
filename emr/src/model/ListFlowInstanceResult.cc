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

#include <alibabacloud/emr/model/ListFlowInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowInstanceResult::ListFlowInstanceResult() :
	ServiceResult()
{}

ListFlowInstanceResult::ListFlowInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowInstanceResult::~ListFlowInstanceResult()
{}

void ListFlowInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFlowInstancesNode = value["FlowInstances"]["FlowInstance"];
	for (auto valueFlowInstancesFlowInstance : allFlowInstancesNode)
	{
		FlowInstance flowInstancesObject;
		if(!valueFlowInstancesFlowInstance["Id"].isNull())
			flowInstancesObject.id = valueFlowInstancesFlowInstance["Id"].asString();
		if(!valueFlowInstancesFlowInstance["GmtCreate"].isNull())
			flowInstancesObject.gmtCreate = std::stol(valueFlowInstancesFlowInstance["GmtCreate"].asString());
		if(!valueFlowInstancesFlowInstance["GmtModified"].isNull())
			flowInstancesObject.gmtModified = std::stol(valueFlowInstancesFlowInstance["GmtModified"].asString());
		if(!valueFlowInstancesFlowInstance["FlowId"].isNull())
			flowInstancesObject.flowId = valueFlowInstancesFlowInstance["FlowId"].asString();
		if(!valueFlowInstancesFlowInstance["FlowName"].isNull())
			flowInstancesObject.flowName = valueFlowInstancesFlowInstance["FlowName"].asString();
		if(!valueFlowInstancesFlowInstance["ProjectId"].isNull())
			flowInstancesObject.projectId = valueFlowInstancesFlowInstance["ProjectId"].asString();
		if(!valueFlowInstancesFlowInstance["Status"].isNull())
			flowInstancesObject.status = valueFlowInstancesFlowInstance["Status"].asString();
		if(!valueFlowInstancesFlowInstance["ClusterId"].isNull())
			flowInstancesObject.clusterId = valueFlowInstancesFlowInstance["ClusterId"].asString();
		if(!valueFlowInstancesFlowInstance["Owner"].isNull())
			flowInstancesObject.owner = valueFlowInstancesFlowInstance["Owner"].asString();
		if(!valueFlowInstancesFlowInstance["ScheduleTime"].isNull())
			flowInstancesObject.scheduleTime = std::stol(valueFlowInstancesFlowInstance["ScheduleTime"].asString());
		if(!valueFlowInstancesFlowInstance["StartTime"].isNull())
			flowInstancesObject.startTime = std::stol(valueFlowInstancesFlowInstance["StartTime"].asString());
		if(!valueFlowInstancesFlowInstance["EndTime"].isNull())
			flowInstancesObject.endTime = std::stol(valueFlowInstancesFlowInstance["EndTime"].asString());
		if(!valueFlowInstancesFlowInstance["Duration"].isNull())
			flowInstancesObject.duration = std::stol(valueFlowInstancesFlowInstance["Duration"].asString());
		if(!valueFlowInstancesFlowInstance["HasNodeFailed"].isNull())
			flowInstancesObject.hasNodeFailed = valueFlowInstancesFlowInstance["HasNodeFailed"].asString() == "true";
		flowInstances_.push_back(flowInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListFlowInstanceResult::FlowInstance> ListFlowInstanceResult::getFlowInstances()const
{
	return flowInstances_;
}

int ListFlowInstanceResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowInstanceResult::getTotal()const
{
	return total_;
}

