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

#include <alibabacloud/emr/model/ModifyExecutionPlanScheduleInfoRequest.h>

using AlibabaCloud::Emr::Model::ModifyExecutionPlanScheduleInfoRequest;

ModifyExecutionPlanScheduleInfoRequest::ModifyExecutionPlanScheduleInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyExecutionPlanScheduleInfo")
{}

ModifyExecutionPlanScheduleInfoRequest::~ModifyExecutionPlanScheduleInfoRequest()
{}

long ModifyExecutionPlanScheduleInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyExecutionPlanScheduleInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyExecutionPlanScheduleInfoRequest::getTimeInterval()const
{
	return timeInterval_;
}

void ModifyExecutionPlanScheduleInfoRequest::setTimeInterval(int timeInterval)
{
	timeInterval_ = timeInterval;
	setCoreParameter("TimeInterval", std::to_string(timeInterval));
}

std::string ModifyExecutionPlanScheduleInfoRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExecutionPlanScheduleInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyExecutionPlanScheduleInfoRequest::getDayOfWeek()const
{
	return dayOfWeek_;
}

void ModifyExecutionPlanScheduleInfoRequest::setDayOfWeek(const std::string& dayOfWeek)
{
	dayOfWeek_ = dayOfWeek;
	setCoreParameter("DayOfWeek", dayOfWeek);
}

std::string ModifyExecutionPlanScheduleInfoRequest::getId()const
{
	return id_;
}

void ModifyExecutionPlanScheduleInfoRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

long ModifyExecutionPlanScheduleInfoRequest::getStartTime()const
{
	return startTime_;
}

void ModifyExecutionPlanScheduleInfoRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string ModifyExecutionPlanScheduleInfoRequest::getStrategy()const
{
	return strategy_;
}

void ModifyExecutionPlanScheduleInfoRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setCoreParameter("Strategy", strategy);
}

std::string ModifyExecutionPlanScheduleInfoRequest::getTimeUnit()const
{
	return timeUnit_;
}

void ModifyExecutionPlanScheduleInfoRequest::setTimeUnit(const std::string& timeUnit)
{
	timeUnit_ = timeUnit;
	setCoreParameter("TimeUnit", timeUnit);
}

std::string ModifyExecutionPlanScheduleInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyExecutionPlanScheduleInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyExecutionPlanScheduleInfoRequest::getDayOfMonth()const
{
	return dayOfMonth_;
}

void ModifyExecutionPlanScheduleInfoRequest::setDayOfMonth(const std::string& dayOfMonth)
{
	dayOfMonth_ = dayOfMonth;
	setCoreParameter("DayOfMonth", dayOfMonth);
}

