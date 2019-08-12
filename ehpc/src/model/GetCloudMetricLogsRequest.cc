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

#include <alibabacloud/ehpc/model/GetCloudMetricLogsRequest.h>

using AlibabaCloud::EHPC::Model::GetCloudMetricLogsRequest;

GetCloudMetricLogsRequest::GetCloudMetricLogsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetCloudMetricLogs")
{}

GetCloudMetricLogsRequest::~GetCloudMetricLogsRequest()
{}

std::string GetCloudMetricLogsRequest::getAggregationType()const
{
	return aggregationType_;
}

void GetCloudMetricLogsRequest::setAggregationType(const std::string& aggregationType)
{
	aggregationType_ = aggregationType;
	setCoreParameter("AggregationType", aggregationType);
}

std::string GetCloudMetricLogsRequest::getFilter()const
{
	return filter_;
}

void GetCloudMetricLogsRequest::setFilter(const std::string& filter)
{
	filter_ = filter;
	setCoreParameter("Filter", filter);
}

std::string GetCloudMetricLogsRequest::getMetricCategories()const
{
	return metricCategories_;
}

void GetCloudMetricLogsRequest::setMetricCategories(const std::string& metricCategories)
{
	metricCategories_ = metricCategories;
	setCoreParameter("MetricCategories", metricCategories);
}

std::string GetCloudMetricLogsRequest::getMetricScope()const
{
	return metricScope_;
}

void GetCloudMetricLogsRequest::setMetricScope(const std::string& metricScope)
{
	metricScope_ = metricScope;
	setCoreParameter("MetricScope", metricScope);
}

int GetCloudMetricLogsRequest::getFrom()const
{
	return from_;
}

void GetCloudMetricLogsRequest::setFrom(int from)
{
	from_ = from;
	setCoreParameter("From", std::to_string(from));
}

std::string GetCloudMetricLogsRequest::getClusterId()const
{
	return clusterId_;
}

void GetCloudMetricLogsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int GetCloudMetricLogsRequest::getTo()const
{
	return to_;
}

void GetCloudMetricLogsRequest::setTo(int to)
{
	to_ = to;
	setCoreParameter("To", std::to_string(to));
}

int GetCloudMetricLogsRequest::getAggregationInterval()const
{
	return aggregationInterval_;
}

void GetCloudMetricLogsRequest::setAggregationInterval(int aggregationInterval)
{
	aggregationInterval_ = aggregationInterval;
	setCoreParameter("AggregationInterval", std::to_string(aggregationInterval));
}

bool GetCloudMetricLogsRequest::getReverse()const
{
	return reverse_;
}

void GetCloudMetricLogsRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setCoreParameter("Reverse", reverse ? "true" : "false");
}

std::string GetCloudMetricLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCloudMetricLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

