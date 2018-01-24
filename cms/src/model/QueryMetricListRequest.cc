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

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryMetricListRequest::QueryMetricListRequest() :
	CmsRequest("QueryMetricList")
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
	setParameter("Cursor", cursor);
}

std::string QueryMetricListRequest::getCallby_cms_owner()const
{
	return callby_cms_owner_;
}

void QueryMetricListRequest::setCallby_cms_owner(const std::string& callby_cms_owner)
{
	callby_cms_owner_ = callby_cms_owner;
	setParameter("Callby_cms_owner", callby_cms_owner);
}

long QueryMetricListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMetricListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryMetricListRequest::getPeriod()const
{
	return period_;
}

void QueryMetricListRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string QueryMetricListRequest::getLength()const
{
	return length_;
}

void QueryMetricListRequest::setLength(const std::string& length)
{
	length_ = length;
	setParameter("Length", length);
}

std::string QueryMetricListRequest::getProject()const
{
	return project_;
}

void QueryMetricListRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string QueryMetricListRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string QueryMetricListRequest::getExpress()const
{
	return express_;
}

void QueryMetricListRequest::setExpress(const std::string& express)
{
	express_ = express;
	setParameter("Express", express);
}

std::string QueryMetricListRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string QueryMetricListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMetricListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryMetricListRequest::getMetric()const
{
	return metric_;
}

void QueryMetricListRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

std::string QueryMetricListRequest::getPage()const
{
	return page_;
}

void QueryMetricListRequest::setPage(const std::string& page)
{
	page_ = page;
	setParameter("Page", page);
}

std::string QueryMetricListRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricListRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

