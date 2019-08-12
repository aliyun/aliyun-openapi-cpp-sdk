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

#include <alibabacloud/cms/model/QueryMetricListRequest.h>

using AlibabaCloud::Cms::Model::QueryMetricListRequest;

QueryMetricListRequest::QueryMetricListRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryMetricList")
{}

QueryMetricListRequest::~QueryMetricListRequest()
{}

std::string QueryMetricListRequest::getCursor()const
{
	return cursor_;
}

void QueryMetricListRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", std::to_string(cursor));
}

long QueryMetricListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMetricListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryMetricListRequest::getPeriod()const
{
	return period_;
}

void QueryMetricListRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string QueryMetricListRequest::getMetric()const
{
	return metric_;
}

void QueryMetricListRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setCoreParameter("Metric", std::to_string(metric));
}

std::string QueryMetricListRequest::getLength()const
{
	return length_;
}

void QueryMetricListRequest::setLength(const std::string& length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

std::string QueryMetricListRequest::getProject()const
{
	return project_;
}

void QueryMetricListRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string QueryMetricListRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string QueryMetricListRequest::getExpress()const
{
	return express_;
}

void QueryMetricListRequest::setExpress(const std::string& express)
{
	express_ = express;
	setCoreParameter("Express", std::to_string(express));
}

std::string QueryMetricListRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string QueryMetricListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMetricListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string QueryMetricListRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricListRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", std::to_string(dimensions));
}

