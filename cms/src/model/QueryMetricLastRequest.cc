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

#include <alibabacloud/cms/model/QueryMetricLastRequest.h>

using AlibabaCloud::Cms::Model::QueryMetricLastRequest;

QueryMetricLastRequest::QueryMetricLastRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryMetricLast")
{}

QueryMetricLastRequest::~QueryMetricLastRequest()
{}

std::string QueryMetricLastRequest::getCursor()const
{
	return cursor_;
}

void QueryMetricLastRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", cursor);
}

long QueryMetricLastRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMetricLastRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryMetricLastRequest::getPeriod()const
{
	return period_;
}

void QueryMetricLastRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string QueryMetricLastRequest::getLength()const
{
	return length_;
}

void QueryMetricLastRequest::setLength(const std::string& length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

std::string QueryMetricLastRequest::getProject()const
{
	return project_;
}

void QueryMetricLastRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string QueryMetricLastRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricLastRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string QueryMetricLastRequest::getExpress()const
{
	return express_;
}

void QueryMetricLastRequest::setExpress(const std::string& express)
{
	express_ = express;
	setCoreParameter("Express", express);
}

std::string QueryMetricLastRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricLastRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string QueryMetricLastRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMetricLastRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryMetricLastRequest::getMetric()const
{
	return metric_;
}

void QueryMetricLastRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setCoreParameter("Metric", metric);
}

std::string QueryMetricLastRequest::getPage()const
{
	return page_;
}

void QueryMetricLastRequest::setPage(const std::string& page)
{
	page_ = page;
	setCoreParameter("Page", page);
}

std::string QueryMetricLastRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricLastRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", dimensions);
}

