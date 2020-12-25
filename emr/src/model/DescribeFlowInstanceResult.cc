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
	auto allDependencyFlowListNode = value["DependencyFlowList"]["ParentFlow"];
	for (auto valueDependencyFlowListParentFlow : allDependencyFlowListNode)
	{
		ParentFlow dependencyFlowListObject;
		if(!valueDependencyFlowListParentFlow["ProjectId"].isNull())
			dependencyFlowListObject.projectId = valueDependencyFlowListParentFlow["ProjectId"].asString();
		if(!valueDependencyFlowListParentFlow["FlowId"].isNull())
			dependencyFlowListObject.flowId = valueDependencyFlowListParentFlow["FlowId"].asString();
		if(!valueDependencyFlowListParentFlow["DependencyFlowId"].isNull())
			dependencyFlowListObject.dependencyFlowId = valueDependencyFlowListParentFlow["DependencyFlowId"].asString();
		if(!valueDependencyFlowListParentFlow["FlowInstanceId"].isNull())
			dependencyFlowListObject.flowInstanceId = valueDependencyFlowListParentFlow["FlowInstanceId"].asString();
		if(!valueDependencyFlowListParentFlow["DependencyInstanceId"].isNull())
			dependencyFlowListObject.dependencyInstanceId = valueDependencyFlowListParentFlow["DependencyInstanceId"].asString();
		if(!valueDependencyFlowListParentFlow["ScheduleKey"].isNull())
			dependencyFlowListObject.scheduleKey = valueDependencyFlowListParentFlow["ScheduleKey"].asString();
		if(!valueDependencyFlowListParentFlow["BizDate"].isNull())
			dependencyFlowListObject.bizDate = std::stol(valueDependencyFlowListParentFlow["BizDate"].asString());
		if(!valueDependencyFlowListParentFlow["Meet"].isNull())
			dependencyFlowListObject.meet = valueDependencyFlowListParentFlow["Meet"].asString() == "true";
		dependencyFlowList_.push_back(dependencyFlowListObject);
	}
	auto allNodeInstanceNode = value["NodeInstance"]["NodeInstanceItem"];
	for (auto valueNodeInstanceNodeInstanceItem : allNodeInstanceNode)
	{
		NodeInstanceItem nodeInstanceObject;
		if(!valueNodeInstanceNodeInstanceItem["Id"].isNull())
			nodeInstanceObject.id = valueNodeInstanceNodeInstanceItem["Id"].asString();
		if(!valueNodeInstanceNodeInstanceItem["GmtCreate"].isNull())
			nodeInstanceObject.gmtCreate = std::stol(valueNodeInstanceNodeInstanceItem["GmtCreate"].asString());
		if(!valueNodeInstanceNodeInstanceItem["GmtModified"].isNull())
			nodeInstanceObject.gmtModified = std::stol(valueNodeInstanceNodeInstanceItem["GmtModified"].asString());
		if(!valueNodeInstanceNodeInstanceItem["Type"].isNull())
			nodeInstanceObject.type = valueNodeInstanceNodeInstanceItem["Type"].asString();
		if(!valueNodeInstanceNodeInstanceItem["Status"].isNull())
			nodeInstanceObject.status = valueNodeInstanceNodeInstanceItem["Status"].asString();
		if(!valueNodeInstanceNodeInstanceItem["JobId"].isNull())
			nodeInstanceObject.jobId = valueNodeInstanceNodeInstanceItem["JobId"].asString();
		if(!valueNodeInstanceNodeInstanceItem["JobName"].isNull())
			nodeInstanceObject.jobName = valueNodeInstanceNodeInstanceItem["JobName"].asString();
		if(!valueNodeInstanceNodeInstanceItem["JobType"].isNull())
			nodeInstanceObject.jobType = valueNodeInstanceNodeInstanceItem["JobType"].asString();
		if(!valueNodeInstanceNodeInstanceItem["FailAct"].isNull())
			nodeInstanceObject.failAct = valueNodeInstanceNodeInstanceItem["FailAct"].asString();
		if(!valueNodeInstanceNodeInstanceItem["MaxRetry"].isNull())
			nodeInstanceObject.maxRetry = valueNodeInstanceNodeInstanceItem["MaxRetry"].asString();
		if(!valueNodeInstanceNodeInstanceItem["RetryInterval"].isNull())
			nodeInstanceObject.retryInterval = valueNodeInstanceNodeInstanceItem["RetryInterval"].asString();
		if(!valueNodeInstanceNodeInstanceItem["NodeName"].isNull())
			nodeInstanceObject.nodeName = valueNodeInstanceNodeInstanceItem["NodeName"].asString();
		if(!valueNodeInstanceNodeInstanceItem["ClusterId"].isNull())
			nodeInstanceObject.clusterId = valueNodeInstanceNodeInstanceItem["ClusterId"].asString();
		if(!valueNodeInstanceNodeInstanceItem["HostName"].isNull())
			nodeInstanceObject.hostName = valueNodeInstanceNodeInstanceItem["HostName"].asString();
		if(!valueNodeInstanceNodeInstanceItem["ProjectId"].isNull())
			nodeInstanceObject.projectId = valueNodeInstanceNodeInstanceItem["ProjectId"].asString();
		if(!valueNodeInstanceNodeInstanceItem["Pending"].isNull())
			nodeInstanceObject.pending = valueNodeInstanceNodeInstanceItem["Pending"].asString() == "true";
		if(!valueNodeInstanceNodeInstanceItem["StartTime"].isNull())
			nodeInstanceObject.startTime = std::stol(valueNodeInstanceNodeInstanceItem["StartTime"].asString());
		if(!valueNodeInstanceNodeInstanceItem["EndTime"].isNull())
			nodeInstanceObject.endTime = std::stol(valueNodeInstanceNodeInstanceItem["EndTime"].asString());
		if(!valueNodeInstanceNodeInstanceItem["Duration"].isNull())
			nodeInstanceObject.duration = std::stol(valueNodeInstanceNodeInstanceItem["Duration"].asString());
		if(!valueNodeInstanceNodeInstanceItem["Retries"].isNull())
			nodeInstanceObject.retries = std::stoi(valueNodeInstanceNodeInstanceItem["Retries"].asString());
		if(!valueNodeInstanceNodeInstanceItem["ExternalId"].isNull())
			nodeInstanceObject.externalId = valueNodeInstanceNodeInstanceItem["ExternalId"].asString();
		if(!valueNodeInstanceNodeInstanceItem["ExternalStatus"].isNull())
			nodeInstanceObject.externalStatus = valueNodeInstanceNodeInstanceItem["ExternalStatus"].asString();
		if(!valueNodeInstanceNodeInstanceItem["ExternalInfo"].isNull())
			nodeInstanceObject.externalInfo = valueNodeInstanceNodeInstanceItem["ExternalInfo"].asString();
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
	if(!value["Namespace"].isNull())
		_namespace_ = value["Namespace"].asString();
	if(!value["LogArchiveLocation"].isNull())
		logArchiveLocation_ = value["LogArchiveLocation"].asString();
	if(!value["Lifecycle"].isNull())
		lifecycle_ = value["Lifecycle"].asString();
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

std::string DescribeFlowInstanceResult::getLifecycle()const
{
	return lifecycle_;
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

std::string DescribeFlowInstanceResult::get_Namespace()const
{
	return _namespace_;
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

std::string DescribeFlowInstanceResult::getLogArchiveLocation()const
{
	return logArchiveLocation_;
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

