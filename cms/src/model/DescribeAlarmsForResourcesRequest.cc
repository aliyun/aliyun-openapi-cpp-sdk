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

#include <alibabacloud/cms/model/DescribeAlarmsForResourcesRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlarmsForResourcesRequest;

DescribeAlarmsForResourcesRequest::DescribeAlarmsForResourcesRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DescribeAlarmsForResources")
{}

DescribeAlarmsForResourcesRequest::~DescribeAlarmsForResourcesRequest()
{}

bool DescribeAlarmsForResourcesRequest::getEnableState()const
{
	return enableState_;
}

void DescribeAlarmsForResourcesRequest::setEnableState(bool enableState)
{
	enableState_ = enableState;
	setCoreParameter("EnableState", enableState ? "true" : "false");
}

std::string DescribeAlarmsForResourcesRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAlarmsForResourcesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeAlarmsForResourcesRequest::get_Namespace()const
{
	return _namespace_;
}

void DescribeAlarmsForResourcesRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

std::string DescribeAlarmsForResourcesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlarmsForResourcesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeAlarmsForResourcesRequest::getAlertState()const
{
	return alertState_;
}

void DescribeAlarmsForResourcesRequest::setAlertState(const std::string& alertState)
{
	alertState_ = alertState;
	setCoreParameter("AlertState", alertState);
}

std::string DescribeAlarmsForResourcesRequest::getPage()const
{
	return page_;
}

void DescribeAlarmsForResourcesRequest::setPage(const std::string& page)
{
	page_ = page;
	setCoreParameter("Page", page);
}

std::string DescribeAlarmsForResourcesRequest::getMetricName()const
{
	return metricName_;
}

void DescribeAlarmsForResourcesRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

std::string DescribeAlarmsForResourcesRequest::getDimensions()const
{
	return dimensions_;
}

void DescribeAlarmsForResourcesRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", dimensions);
}

