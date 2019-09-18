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

#include <alibabacloud/emr/model/DescribeFlowInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowInstanceResult::DescribeFlowInstanceResult() :
	ServiceResult()
{}

DescribeFlowInstanceResult::DescribeFlowInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowInstanceResult::~DescribeFlowInstanceResult()
{}

void DescribeFlowInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDependencyFlowList = value["DependencyFlowList"]["ParentFlow"];
	for (auto value : allDependencyFlowList)
	{
		ParentFlow dependencyFlowListObject;
		if(!value["ProjectId"].isNull())
			dependencyFlowListObject.projectId = value["ProjectId"].asString();
		if(!value["FlowId"].isNull())
			dependencyFlowListObject.flowId = value["FlowId"].asString();
		if(!value["DependencyFlowId"].isNull())
			dependencyFlowListObject.dependencyFlowId = value["DependencyFlowId"].asString();
		if(!value["FlowInstanceId"].isNull())
			dependencyFlowListObject.flowInstanceId = value["FlowInstanceId"].asString();
		if(!value["DependencyInstanceId"].isNull())
			dependencyFlowListObject.dependencyInstanceId = value["DependencyInstanceId"].asString();
		if(!value["ScheduleKey"].isNull())
			dependencyFlowListObject.scheduleKey = value["ScheduleKey"].asString();
		if(!value["BizDate"].isNull())
			dependencyFlowListObject.bizDate = std::stol(value["BizDate"].asString());
		dependencyFlowList_.push_back(dependencyFlowListObject);
	}
	auto allNodeInstance = value["NodeInstance"]["NodeInstanceItem"];
	for (auto value : allNodeInstance)
	{
		NodeInstanceItem nodeInstanceObject;
		if(!value["Id"].isNull())
			nodeInstanceObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			nodeInstanceObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			nodeInstanceObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Type"].isNull())
			nodeInstanceObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			nodeInstanceObject.status = value["Status"].asString();
		if(!value["JobId"].isNull())
			nodeInstanceObject.jobId = value["JobId"].asString();
		if(!value["JobName"].isNull())
			nodeInstanceObject.jobName = value["JobName"].asString();
		if(!value["JobType"].isNull())
			nodeInstanceObject.jobType = value["JobType"].asString();
		if(!value["FailAct"].isNull())
			nodeInstanceObject.failAct = value["FailAct"].asString();
		if(!value["MaxRetry"].isNull())
			nodeInstanceObject.maxRetry = value["MaxRetry"].asString();
		if(!value["RetryInterval"].isNull())
			nodeInstanceObject.retryInterval = value["RetryInterval"].asString();
		if(!value["NodeName"].isNull())
			nodeInstanceObject.nodeName = value["NodeName"].asString();
		if(!value["ClusterId"].isNull())
			nodeInstanceObject.clusterId = value["ClusterId"].asString();
		if(!value["HostName"].isNull())
			nodeInstanceObject.hostName = value["HostName"].asString();
		if(!value["ProjectId"].isNull())
			nodeInstanceObject.projectId = value["ProjectId"].asString();
		if(!value["Pending"].isNull())
			nodeInstanceObject.pending = value["Pending"].asString() == "true";
		if(!value["StartTime"].isNull())
			nodeInstanceObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			nodeInstanceObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Duration"].isNull())
			nodeInstanceObject.duration = std::stol(value["Duration"].asString());
		if(!value["Retries"].isNull())
			nodeInstanceObject.retries = std::stoi(value["Retries"].asString());
		if(!value["ExternalId"].isNull())
			nodeInstanceObject.externalId = value["ExternalId"].asString();
		if(!value["ExternalStatus"].isNull())
			nodeInstanceObject.externalStatus = value["ExternalStatus"].asString();
		if(!value["ExternalInfo"].isNull())
			nodeInstanceObject.externalInfo = value["ExternalInfo"].asString();
		nodeInstance_.push_back(nodeInstanceObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["FlowId"].isNull())
		flowId_ = value["FlowId"].asString();
	if(!value["FlowName"].isNull())
		flowName_ = value["FlowName"].asString();
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["Duration"].isNull())
		duration_ = std::stol(value["Duration"].asString());
	if(!value["ScheduleTime"].isNull())
		scheduleTime_ = std::stol(value["ScheduleTime"].asString());
	if(!value["Graph"].isNull())
		graph_ = value["Graph"].asString();
	if(!value["CronExpression"].isNull())
		cronExpression_ = value["CronExpression"].asString();
	if(!value["HasNodeFailed"].isNull())
		hasNodeFailed_ = value["HasNodeFailed"].asString() == "true";

}

std::string DescribeFlowInstanceResult::getStatus()const
{
	return status_;
}

bool DescribeFlowInstanceResult::getHasNodeFailed()const
{
	return hasNodeFailed_;
}

long DescribeFlowInstanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeFlowInstanceResult::getClusterId()const
{
	return clusterId_;
}

long DescribeFlowInstanceResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeFlowInstanceResult::getProjectId()const
{
	return projectId_;
}

long DescribeFlowInstanceResult::getStartTime()const
{
	return startTime_;
}

long DescribeFlowInstanceResult::getDuration()const
{
	return duration_;
}

std::string DescribeFlowInstanceResult::getFlowId()const
{
	return flowId_;
}

long DescribeFlowInstanceResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeFlowInstanceResult::getGraph()const
{
	return graph_;
}

long DescribeFlowInstanceResult::getScheduleTime()const
{
	return scheduleTime_;
}

std::string DescribeFlowInstanceResult::getFlowName()const
{
	return flowName_;
}

std::string DescribeFlowInstanceResult::getId()const
{
	return id_;
}

std::string DescribeFlowInstanceResult::getCronExpression()const
{
	return cronExpression_;
}

std::vector<DescribeFlowInstanceResult::ParentFlow> DescribeFlowInstanceResult::getDependencyFlowList()const
{
	return dependencyFlowList_;
}

std::vector<DescribeFlowInstanceResult::NodeInstanceItem> DescribeFlowInstanceResult::getNodeInstance()const
{
	return nodeInstance_;
}

