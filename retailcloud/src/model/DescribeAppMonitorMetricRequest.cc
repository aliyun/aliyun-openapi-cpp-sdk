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

#include <alibabacloud/retailcloud/model/DescribeAppMonitorMetricRequest.h>

using AlibabaCloud::Retailcloud::Model::DescribeAppMonitorMetricRequest;

DescribeAppMonitorMetricRequest::DescribeAppMonitorMetricRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DescribeAppMonitorMetric")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAppMonitorMetricRequest::~DescribeAppMonitorMetricRequest()
{}

std::string DescribeAppMonitorMetricRequest::getDeployOrderId()const
{
	return deployOrderId_;
}

void DescribeAppMonitorMetricRequest::setDeployOrderId(const std::string& deployOrderId)
{
	deployOrderId_ = deployOrderId;
	setParameter("DeployOrderId", deployOrderId);
}

std::string DescribeAppMonitorMetricRequest::getMetric()const
{
	return metric_;
}

void DescribeAppMonitorMetricRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

long DescribeAppMonitorMetricRequest::getAppId()const
{
	return appId_;
}

void DescribeAppMonitorMetricRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string DescribeAppMonitorMetricRequest::getPodName()const
{
	return podName_;
}

void DescribeAppMonitorMetricRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

long DescribeAppMonitorMetricRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAppMonitorMetricRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long DescribeAppMonitorMetricRequest::getEnvId()const
{
	return envId_;
}

void DescribeAppMonitorMetricRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

long DescribeAppMonitorMetricRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAppMonitorMetricRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeAppMonitorMetricRequest::getType()const
{
	return type_;
}

void DescribeAppMonitorMetricRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

