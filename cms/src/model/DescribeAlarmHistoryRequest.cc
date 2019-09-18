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

#include <alibabacloud/cms/model/DescribeAlarmHistoryRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlarmHistoryRequest;

DescribeAlarmHistoryRequest::DescribeAlarmHistoryRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DescribeAlarmHistory")
{}

DescribeAlarmHistoryRequest::~DescribeAlarmHistoryRequest()
{}

std::string DescribeAlarmHistoryRequest::getAlertName()const
{
	return alertName_;
}

void DescribeAlarmHistoryRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setCoreParameter("AlertName", alertName);
}

std::string DescribeAlarmHistoryRequest::getRuleName()const
{
	return ruleName_;
}

void DescribeAlarmHistoryRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::string DescribeAlarmHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAlarmHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeAlarmHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAlarmHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeAlarmHistoryRequest::getOnlyCount()const
{
	return onlyCount_;
}

void DescribeAlarmHistoryRequest::setOnlyCount(bool onlyCount)
{
	onlyCount_ = onlyCount;
	setCoreParameter("OnlyCount", onlyCount ? "true" : "false");
}

int DescribeAlarmHistoryRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlarmHistoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAlarmHistoryRequest::getState()const
{
	return state_;
}

void DescribeAlarmHistoryRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

std::string DescribeAlarmHistoryRequest::getMetricName()const
{
	return metricName_;
}

void DescribeAlarmHistoryRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

std::string DescribeAlarmHistoryRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAlarmHistoryRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeAlarmHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAlarmHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

bool DescribeAlarmHistoryRequest::getAscending()const
{
	return ascending_;
}

void DescribeAlarmHistoryRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setCoreParameter("Ascending", ascending ? "true" : "false");
}

std::string DescribeAlarmHistoryRequest::get_Namespace()const
{
	return _namespace_;
}

void DescribeAlarmHistoryRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

int DescribeAlarmHistoryRequest::getPage()const
{
	return page_;
}

void DescribeAlarmHistoryRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

std::string DescribeAlarmHistoryRequest::getStatus()const
{
	return status_;
}

void DescribeAlarmHistoryRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

