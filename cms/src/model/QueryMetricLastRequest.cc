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

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryMetricLastRequest::QueryMetricLastRequest() :
	CmsRequest("QueryMetricLast")
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
	setParameter("Cursor", cursor);
}

std::string QueryMetricLastRequest::getCallby_cms_owner()const
{
	return callby_cms_owner_;
}

void QueryMetricLastRequest::setCallby_cms_owner(const std::string& callby_cms_owner)
{
	callby_cms_owner_ = callby_cms_owner;
	setParameter("Callby_cms_owner", callby_cms_owner);
}

long QueryMetricLastRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMetricLastRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryMetricLastRequest::getPeriod()const
{
	return period_;
}

void QueryMetricLastRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string QueryMetricLastRequest::getLength()const
{
	return length_;
}

void QueryMetricLastRequest::setLength(const std::string& length)
{
	length_ = length;
	setParameter("Length", length);
}

std::string QueryMetricLastRequest::getProject()const
{
	return project_;
}

void QueryMetricLastRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string QueryMetricLastRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricLastRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string QueryMetricLastRequest::getExpress()const
{
	return express_;
}

void QueryMetricLastRequest::setExpress(const std::string& express)
{
	express_ = express;
	setParameter("Express", express);
}

std::string QueryMetricLastRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricLastRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string QueryMetricLastRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMetricLastRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryMetricLastRequest::getMetric()const
{
	return metric_;
}

void QueryMetricLastRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

std::string QueryMetricLastRequest::getPage()const
{
	return page_;
}

void QueryMetricLastRequest::setPage(const std::string& page)
{
	page_ = page;
	setParameter("Page", page);
}

std::string QueryMetricLastRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricLastRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

