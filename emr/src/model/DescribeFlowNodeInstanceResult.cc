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

#include <alibabacloud/emr/model/DescribeFlowNodeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowNodeInstanceResult::DescribeFlowNodeInstanceResult() :
	ServiceResult()
{}

DescribeFlowNodeInstanceResult::DescribeFlowNodeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowNodeInstanceResult::~DescribeFlowNodeInstanceResult()
{}

void DescribeFlowNodeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["JobName"].isNull())
		jobName_ = value["JobName"].asString();
	if(!value["JobType"].isNull())
		jobType_ = value["JobType"].asString();
	if(!value["JobParams"].isNull())
		jobParams_ = value["JobParams"].asString();
	if(!value["FailAct"].isNull())
		failAct_ = value["FailAct"].asString();
	if(!value["MaxRetry"].isNull())
		maxRetry_ = value["MaxRetry"].asString();
	if(!value["RetryInterval"].isNull())
		retryInterval_ = value["RetryInterval"].asString();
	if(!value["RetryPolicy"].isNull())
		retryPolicy_ = value["RetryPolicy"].asString();
	if(!value["NodeName"].isNull())
		nodeName_ = value["NodeName"].asString();
	if(!value["FlowId"].isNull())
		flowId_ = value["FlowId"].asString();
	if(!value["FlowInstanceId"].isNull())
		flowInstanceId_ = value["FlowInstanceId"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["Pending"].isNull())
		pending_ = value["Pending"].asString() == "true";
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["Duration"].isNull())
		duration_ = std::stol(value["Duration"].asString());
	if(!value["Retries"].isNull())
		retries_ = std::stoi(value["Retries"].asString());
	if(!value["ExternalId"].isNull())
		externalId_ = value["ExternalId"].asString();
	if(!value["ExternalSubId"].isNull())
		externalSubId_ = value["ExternalSubId"].asString();
	if(!value["ExternalChildIds"].isNull())
		externalChildIds_ = value["ExternalChildIds"].asString();
	if(!value["ExternalStatus"].isNull())
		externalStatus_ = value["ExternalStatus"].asString();
	if(!value["ExternalInfo"].isNull())
		externalInfo_ = value["ExternalInfo"].asString();
	if(!value["ParamConf"].isNull())
		paramConf_ = value["ParamConf"].asString();
	if(!value["EnvConf"].isNull())
		envConf_ = value["EnvConf"].asString();
	if(!value["RunConf"].isNull())
		runConf_ = value["RunConf"].asString();
	if(!value["Adhoc"].isNull())
		adhoc_ = value["Adhoc"].asString() == "true";
	if(!value["MonitorConf"].isNull())
		monitorConf_ = value["MonitorConf"].asString();
	if(!value["Mode"].isNull())
		mode_ = value["Mode"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();

}

std::string DescribeFlowNodeInstanceResult::getFailAct()const
{
	return failAct_;
}

long DescribeFlowNodeInstanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeFlowNodeInstanceResult::getNodeName()const
{
	return nodeName_;
}

long DescribeFlowNodeInstanceResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeFlowNodeInstanceResult::getJobName()const
{
	return jobName_;
}

std::string DescribeFlowNodeInstanceResult::getFlowId()const
{
	return flowId_;
}

std::string DescribeFlowNodeInstanceResult::getExternalStatus()const
{
	return externalStatus_;
}

std::string DescribeFlowNodeInstanceResult::getParamConf()const
{
	return paramConf_;
}

std::string DescribeFlowNodeInstanceResult::getExternalInfo()const
{
	return externalInfo_;
}

int DescribeFlowNodeInstanceResult::getRetries()const
{
	return retries_;
}

std::string DescribeFlowNodeInstanceResult::getClusterName()const
{
	return clusterName_;
}

bool DescribeFlowNodeInstanceResult::getAdhoc()const
{
	return adhoc_;
}

std::string DescribeFlowNodeInstanceResult::getJobId()const
{
	return jobId_;
}

std::string DescribeFlowNodeInstanceResult::getJobParams()const
{
	return jobParams_;
}

std::string DescribeFlowNodeInstanceResult::getHostName()const
{
	return hostName_;
}

std::string DescribeFlowNodeInstanceResult::getStatus()const
{
	return status_;
}

std::string DescribeFlowNodeInstanceResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeFlowNodeInstanceResult::getExternalId()const
{
	return externalId_;
}

std::string DescribeFlowNodeInstanceResult::getMode()const
{
	return mode_;
}

std::string DescribeFlowNodeInstanceResult::getProjectId()const
{
	return projectId_;
}

long DescribeFlowNodeInstanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeFlowNodeInstanceResult::getFlowInstanceId()const
{
	return flowInstanceId_;
}

long DescribeFlowNodeInstanceResult::getDuration()const
{
	return duration_;
}

std::string DescribeFlowNodeInstanceResult::getMaxRetry()const
{
	return maxRetry_;
}

std::string DescribeFlowNodeInstanceResult::getExternalSubId()const
{
	return externalSubId_;
}

long DescribeFlowNodeInstanceResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeFlowNodeInstanceResult::getType()const
{
	return type_;
}

std::string DescribeFlowNodeInstanceResult::getJobType()const
{
	return jobType_;
}

std::string DescribeFlowNodeInstanceResult::getEnvConf()const
{
	return envConf_;
}

std::string DescribeFlowNodeInstanceResult::getExternalChildIds()const
{
	return externalChildIds_;
}

std::string DescribeFlowNodeInstanceResult::getMonitorConf()const
{
	return monitorConf_;
}

std::string DescribeFlowNodeInstanceResult::getId()const
{
	return id_;
}

std::string DescribeFlowNodeInstanceResult::getRetryInterval()const
{
	return retryInterval_;
}

std::string DescribeFlowNodeInstanceResult::getRunConf()const
{
	return runConf_;
}

std::string DescribeFlowNodeInstanceResult::getRetryPolicy()const
{
	return retryPolicy_;
}

bool DescribeFlowNodeInstanceResult::getPending()const
{
	return pending_;
}

