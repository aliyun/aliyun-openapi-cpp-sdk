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

#include <alibabacloud/ess/model/DescribeAlarmsRequest.h>

using AlibabaCloud::Ess::Model::DescribeAlarmsRequest;

DescribeAlarmsRequest::DescribeAlarmsRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeAlarms")
{}

DescribeAlarmsRequest::~DescribeAlarmsRequest()
{}

bool DescribeAlarmsRequest::getIsEnable()const
{
	return isEnable_;
}

void DescribeAlarmsRequest::setIsEnable(bool isEnable)
{
	isEnable_ = isEnable;
	setCoreParameter("IsEnable", isEnable ? "true" : "false");
}

std::string DescribeAlarmsRequest::getMetricType()const
{
	return metricType_;
}

void DescribeAlarmsRequest::setMetricType(const std::string& metricType)
{
	metricType_ = metricType;
	setCoreParameter("MetricType", metricType);
}

std::string DescribeAlarmsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAlarmsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAlarmsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAlarmsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAlarmsRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DescribeAlarmsRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

int DescribeAlarmsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlarmsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAlarmsRequest::getState()const
{
	return state_;
}

void DescribeAlarmsRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

long DescribeAlarmsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAlarmsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAlarmsRequest::getAlarmTaskId()const
{
	return alarmTaskId_;
}

void DescribeAlarmsRequest::setAlarmTaskId(const std::string& alarmTaskId)
{
	alarmTaskId_ = alarmTaskId;
	setCoreParameter("AlarmTaskId", alarmTaskId);
}

int DescribeAlarmsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAlarmsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAlarmsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAlarmsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

