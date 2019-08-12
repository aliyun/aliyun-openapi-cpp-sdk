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

#include <alibabacloud/emr/model/QuerySlsMetricDataRequest.h>

using AlibabaCloud::Emr::Model::QuerySlsMetricDataRequest;

QuerySlsMetricDataRequest::QuerySlsMetricDataRequest() :
	RpcServiceRequest("emr", "2016-04-08", "QuerySlsMetricData")
{}

QuerySlsMetricDataRequest::~QuerySlsMetricDataRequest()
{}

long QuerySlsMetricDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySlsMetricDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long QuerySlsMetricDataRequest::getPeriod()const
{
	return period_;
}

void QuerySlsMetricDataRequest::setPeriod(long period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string QuerySlsMetricDataRequest::getRegionId()const
{
	return regionId_;
}

void QuerySlsMetricDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string QuerySlsMetricDataRequest::getClusterId()const
{
	return clusterId_;
}

void QuerySlsMetricDataRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

long QuerySlsMetricDataRequest::getStartTimeStamp()const
{
	return startTimeStamp_;
}

void QuerySlsMetricDataRequest::setStartTimeStamp(long startTimeStamp)
{
	startTimeStamp_ = startTimeStamp;
	setCoreParameter("StartTimeStamp", startTimeStamp);
}

std::string QuerySlsMetricDataRequest::getMetricName()const
{
	return metricName_;
}

void QuerySlsMetricDataRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", std::to_string(metricName));
}

std::string QuerySlsMetricDataRequest::getHostRole()const
{
	return hostRole_;
}

void QuerySlsMetricDataRequest::setHostRole(const std::string& hostRole)
{
	hostRole_ = hostRole;
	setCoreParameter("HostRole", std::to_string(hostRole));
}

std::string QuerySlsMetricDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySlsMetricDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

long QuerySlsMetricDataRequest::getEndTimeStamp()const
{
	return endTimeStamp_;
}

void QuerySlsMetricDataRequest::setEndTimeStamp(long endTimeStamp)
{
	endTimeStamp_ = endTimeStamp;
	setCoreParameter("EndTimeStamp", endTimeStamp);
}

