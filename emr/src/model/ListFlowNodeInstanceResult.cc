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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFlowNodeInstances = value["FlowNodeInstances"]["FlowNodeInstance"];
	for (auto value : allFlowNodeInstances)
	{
		FlowNodeInstance flowNodeInstancesObject;
		if(!value["Id"].isNull())
			flowNodeInstancesObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			flowNodeInstancesObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			flowNodeInstancesObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Type"].isNull())
			flowNodeInstancesObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			flowNodeInstancesObject.status = value["Status"].asString();
		if(!value["JobId"].isNull())
			flowNodeInstancesObject.jobId = value["JobId"].asString();
		if(!value["JobName"].isNull())
			flowNodeInstancesObject.jobName = value["JobName"].asString();
		if(!value["JobType"].isNull())
			flowNodeInstancesObject.jobType = value["JobType"].asString();
		if(!value["JobParams"].isNull())
			flowNodeInstancesObject.jobParams = value["JobParams"].asString();
		if(!value["FailAct"].isNull())
			flowNodeInstancesObject.failAct = value["FailAct"].asString();
		if(!value["MaxRetry"].isNull())
			flowNodeInstancesObject.maxRetry = value["MaxRetry"].asString();
		if(!value["RetryInterval"].isNull())
			flowNodeInstancesObject.retryInterval = value["RetryInterval"].asString();
		if(!value["NodeName"].isNull())
			flowNodeInstancesObject.nodeName = value["NodeName"].asString();
		if(!value["FlowId"].isNull())
			flowNodeInstancesObject.flowId = value["FlowId"].asString();
		if(!value["FlowInstanceId"].isNull())
			flowNodeInstancesObject.flowInstanceId = value["FlowInstanceId"].asString();
		if(!value["ClusterId"].isNull())
			flowNodeInstancesObject.clusterId = value["ClusterId"].asString();
		if(!value["HostName"].isNull())
			flowNodeInstancesObject.hostName = value["HostName"].asString();
		if(!value["ProjectId"].isNull())
			flowNodeInstancesObject.projectId = value["ProjectId"].asString();
		if(!value["Pending"].isNull())
			flowNodeInstancesObject.pending = value["Pending"].asString() == "true";
		if(!value["StartTime"].isNull())
			flowNodeInstancesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			flowNodeInstancesObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Duration"].isNull())
			flowNodeInstancesObject.duration = std::stol(value["Duration"].asString());
		if(!value["Retries"].isNull())
			flowNodeInstancesObject.retries = std::stoi(value["Retries"].asString());
		if(!value["ExternalId"].isNull())
			flowNodeInstancesObject.externalId = value["ExternalId"].asString();
		if(!value["ExternalSubId"].isNull())
			flowNodeInstancesObject.externalSubId = value["ExternalSubId"].asString();
		if(!value["ExternalChildIds"].isNull())
			flowNodeInstancesObject.externalChildIds = value["ExternalChildIds"].asString();
		if(!value["ExternalStatus"].isNull())
			flowNodeInstancesObject.externalStatus = value["ExternalStatus"].asString();
		if(!value["ExternalInfo"].isNull())
			flowNodeInstancesObject.externalInfo = value["ExternalInfo"].asString();
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

