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

#include <alibabacloud/emr/model/ListFlowNodeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowNodeInstanceResult::ListFlowNodeInstanceResult() :
	ServiceResult()
{}

ListFlowNodeInstanceResult::ListFlowNodeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowNodeInstanceResult::~ListFlowNodeInstanceResult()
{}

void ListFlowNodeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFlowNodeInstancesNode = value["FlowNodeInstances"]["FlowNodeInstance"];
	for (auto valueFlowNodeInstancesFlowNodeInstance : allFlowNodeInstancesNode)
	{
		FlowNodeInstance flowNodeInstancesObject;
		if(!valueFlowNodeInstancesFlowNodeInstance["Id"].isNull())
			flowNodeInstancesObject.id = valueFlowNodeInstancesFlowNodeInstance["Id"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["GmtCreate"].isNull())
			flowNodeInstancesObject.gmtCreate = std::stol(valueFlowNodeInstancesFlowNodeInstance["GmtCreate"].asString());
		if(!valueFlowNodeInstancesFlowNodeInstance["GmtModified"].isNull())
			flowNodeInstancesObject.gmtModified = std::stol(valueFlowNodeInstancesFlowNodeInstance["GmtModified"].asString());
		if(!valueFlowNodeInstancesFlowNodeInstance["Type"].isNull())
			flowNodeInstancesObject.type = valueFlowNodeInstancesFlowNodeInstance["Type"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["Status"].isNull())
			flowNodeInstancesObject.status = valueFlowNodeInstancesFlowNodeInstance["Status"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["JobId"].isNull())
			flowNodeInstancesObject.jobId = valueFlowNodeInstancesFlowNodeInstance["JobId"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["JobName"].isNull())
			flowNodeInstancesObject.jobName = valueFlowNodeInstancesFlowNodeInstance["JobName"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["JobType"].isNull())
			flowNodeInstancesObject.jobType = valueFlowNodeInstancesFlowNodeInstance["JobType"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["JobParams"].isNull())
			flowNodeInstancesObject.jobParams = valueFlowNodeInstancesFlowNodeInstance["JobParams"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["FailAct"].isNull())
			flowNodeInstancesObject.failAct = valueFlowNodeInstancesFlowNodeInstance["FailAct"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["MaxRetry"].isNull())
			flowNodeInstancesObject.maxRetry = valueFlowNodeInstancesFlowNodeInstance["MaxRetry"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["RetryInterval"].isNull())
			flowNodeInstancesObject.retryInterval = valueFlowNodeInstancesFlowNodeInstance["RetryInterval"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["NodeName"].isNull())
			flowNodeInstancesObject.nodeName = valueFlowNodeInstancesFlowNodeInstance["NodeName"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["FlowId"].isNull())
			flowNodeInstancesObject.flowId = valueFlowNodeInstancesFlowNodeInstance["FlowId"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["FlowInstanceId"].isNull())
			flowNodeInstancesObject.flowInstanceId = valueFlowNodeInstancesFlowNodeInstance["FlowInstanceId"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["ClusterId"].isNull())
			flowNodeInstancesObject.clusterId = valueFlowNodeInstancesFlowNodeInstance["ClusterId"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["HostName"].isNull())
			flowNodeInstancesObject.hostName = valueFlowNodeInstancesFlowNodeInstance["HostName"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["ProjectId"].isNull())
			flowNodeInstancesObject.projectId = valueFlowNodeInstancesFlowNodeInstance["ProjectId"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["Pending"].isNull())
			flowNodeInstancesObject.pending = valueFlowNodeInstancesFlowNodeInstance["Pending"].asString() == "true";
		if(!valueFlowNodeInstancesFlowNodeInstance["StartTime"].isNull())
			flowNodeInstancesObject.startTime = std::stol(valueFlowNodeInstancesFlowNodeInstance["StartTime"].asString());
		if(!valueFlowNodeInstancesFlowNodeInstance["EndTime"].isNull())
			flowNodeInstancesObject.endTime = std::stol(valueFlowNodeInstancesFlowNodeInstance["EndTime"].asString());
		if(!valueFlowNodeInstancesFlowNodeInstance["Duration"].isNull())
			flowNodeInstancesObject.duration = std::stol(valueFlowNodeInstancesFlowNodeInstance["Duration"].asString());
		if(!valueFlowNodeInstancesFlowNodeInstance["Retries"].isNull())
			flowNodeInstancesObject.retries = std::stoi(valueFlowNodeInstancesFlowNodeInstance["Retries"].asString());
		if(!valueFlowNodeInstancesFlowNodeInstance["ExternalId"].isNull())
			flowNodeInstancesObject.externalId = valueFlowNodeInstancesFlowNodeInstance["ExternalId"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["ExternalSubId"].isNull())
			flowNodeInstancesObject.externalSubId = valueFlowNodeInstancesFlowNodeInstance["ExternalSubId"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["ExternalChildIds"].isNull())
			flowNodeInstancesObject.externalChildIds = valueFlowNodeInstancesFlowNodeInstance["ExternalChildIds"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["ExternalStatus"].isNull())
			flowNodeInstancesObject.externalStatus = valueFlowNodeInstancesFlowNodeInstance["ExternalStatus"].asString();
		if(!valueFlowNodeInstancesFlowNodeInstance["ExternalInfo"].isNull())
			flowNodeInstancesObject.externalInfo = valueFlowNodeInstancesFlowNodeInstance["ExternalInfo"].asString();
		flowNodeInstances_.push_back(flowNodeInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowNodeInstanceResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowNodeInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListFlowNodeInstanceResult::FlowNodeInstance> ListFlowNodeInstanceResult::getFlowNodeInstances()const
{
	return flowNodeInstances_;
}

int ListFlowNodeInstanceResult::getTotal()const
{
	return total_;
}

