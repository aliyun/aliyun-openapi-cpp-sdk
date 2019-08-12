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

#include <alibabacloud/cms/model/DescribeAlarmsRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlarmsRequest;

DescribeAlarmsRequest::DescribeAlarmsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DescribeAlarms")
{}

DescribeAlarmsRequest::~DescribeAlarmsRequest()
{}

bool DescribeAlarmsRequest::getEnableState()const
{
	return enableState_;
}

void DescribeAlarmsRequest::setEnableState(bool enableState)
{
	enableState_ = enableState;
	setCoreParameter("EnableState", enableState ? "true" : "false");
}

std::string DescribeAlarmsRequest::getNames()const
{
	return names_;
}

void DescribeAlarmsRequest::setNames(const std::string& names)
{
	names_ = names;
	setCoreParameter("Names", std::to_string(names));
}

std::string DescribeAlarmsRequest::getDisplayName()const
{
	return displayName_;
}

void DescribeAlarmsRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setCoreParameter("DisplayName", std::to_string(displayName));
}

std::string DescribeAlarmsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAlarmsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DescribeAlarmsRequest::get_Namespace()const
{
	return _namespace_;
}

void DescribeAlarmsRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", std::to_string(_namespace));
}

std::string DescribeAlarmsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlarmsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAlarmsRequest::getAlertState()const
{
	return alertState_;
}

void DescribeAlarmsRequest::setAlertState(const std::string& alertState)
{
	alertState_ = alertState;
	setCoreParameter("AlertState", std::to_string(alertState));
}

std::string DescribeAlarmsRequest::getNameKeyword()const
{
	return nameKeyword_;
}

void DescribeAlarmsRequest::setNameKeyword(const std::string& nameKeyword)
{
	nameKeyword_ = nameKeyword;
	setCoreParameter("NameKeyword", std::to_string(nameKeyword));
}

std::string DescribeAlarmsRequest::getGroupBy()const
{
	return groupBy_;
}

void DescribeAlarmsRequest::setGroupBy(const std::string& groupBy)
{
	groupBy_ = groupBy;
	setCoreParameter("GroupBy", std::to_string(groupBy));
}

std::string DescribeAlarmsRequest::getPage()const
{
	return page_;
}

void DescribeAlarmsRequest::setPage(const std::string& page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

std::string DescribeAlarmsRequest::getMetricName()const
{
	return metricName_;
}

void DescribeAlarmsRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", std::to_string(metricName));
}

