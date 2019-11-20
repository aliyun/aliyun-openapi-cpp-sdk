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

#include <alibabacloud/cms/model/QueryMetricTopRequest.h>

using AlibabaCloud::Cms::Model::QueryMetricTopRequest;

QueryMetricTopRequest::QueryMetricTopRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryMetricTop")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMetricTopRequest::~QueryMetricTopRequest()
{}

long QueryMetricTopRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMetricTopRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryMetricTopRequest::getProject()const
{
	return project_;
}

void QueryMetricTopRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string QueryMetricTopRequest::getExpress()const
{
	return express_;
}

void QueryMetricTopRequest::setExpress(const std::string& express)
{
	express_ = express;
	setCoreParameter("Express", express);
}

std::string QueryMetricTopRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricTopRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string QueryMetricTopRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMetricTopRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryMetricTopRequest::getPeriod()const
{
	return period_;
}

void QueryMetricTopRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string QueryMetricTopRequest::getLength()const
{
	return length_;
}

void QueryMetricTopRequest::setLength(const std::string& length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

std::string QueryMetricTopRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricTopRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string QueryMetricTopRequest::getOrderby()const
{
	return orderby_;
}

void QueryMetricTopRequest::setOrderby(const std::string& orderby)
{
	orderby_ = orderby;
	setCoreParameter("Orderby", orderby);
}

std::string QueryMetricTopRequest::getOrderDesc()const
{
	return orderDesc_;
}

void QueryMetricTopRequest::setOrderDesc(const std::string& orderDesc)
{
	orderDesc_ = orderDesc;
	setCoreParameter("OrderDesc", orderDesc);
}

std::string QueryMetricTopRequest::getMetric()const
{
	return metric_;
}

void QueryMetricTopRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setCoreParameter("Metric", metric);
}

std::string QueryMetricTopRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricTopRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", dimensions);
}

