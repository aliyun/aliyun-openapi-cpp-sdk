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

#include <alibabacloud/cms/model/DescribeAlertHistoryListRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlertHistoryListRequest;

DescribeAlertHistoryListRequest::DescribeAlertHistoryListRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DescribeAlertHistoryList")
{}

DescribeAlertHistoryListRequest::~DescribeAlertHistoryListRequest()
{}

std::string DescribeAlertHistoryListRequest::getAlertName()const
{
	return alertName_;
}

void DescribeAlertHistoryListRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setCoreParameter("AlertName", alertName);
}

std::string DescribeAlertHistoryListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAlertHistoryListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeAlertHistoryListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAlertHistoryListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeAlertHistoryListRequest::getRuleName()const
{
	return ruleName_;
}

void DescribeAlertHistoryListRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::string DescribeAlertHistoryListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAlertHistoryListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

bool DescribeAlertHistoryListRequest::getAscending()const
{
	return ascending_;
}

void DescribeAlertHistoryListRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setCoreParameter("Ascending", ascending ? "true" : "false");
}

std::string DescribeAlertHistoryListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAlertHistoryListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeAlertHistoryListRequest::getOnlyCount()const
{
	return onlyCount_;
}

void DescribeAlertHistoryListRequest::setOnlyCount(bool onlyCount)
{
	onlyCount_ = onlyCount;
	setCoreParameter("OnlyCount", onlyCount ? "true" : "false");
}

std::string DescribeAlertHistoryListRequest::get_Namespace()const
{
	return _namespace_;
}

void DescribeAlertHistoryListRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

int DescribeAlertHistoryListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlertHistoryListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAlertHistoryListRequest::getState()const
{
	return state_;
}

void DescribeAlertHistoryListRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

int DescribeAlertHistoryListRequest::getPage()const
{
	return page_;
}

void DescribeAlertHistoryListRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

std::string DescribeAlertHistoryListRequest::getMetricName()const
{
	return metricName_;
}

void DescribeAlertHistoryListRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

std::string DescribeAlertHistoryListRequest::getStatus()const
{
	return status_;
}

void DescribeAlertHistoryListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

