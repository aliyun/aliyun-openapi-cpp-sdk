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

#include <alibabacloud/iot/model/UpdateSoundCodeScheduleRequest.h>

using AlibabaCloud::Iot::Model::UpdateSoundCodeScheduleRequest;

UpdateSoundCodeScheduleRequest::UpdateSoundCodeScheduleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateSoundCodeSchedule")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSoundCodeScheduleRequest::~UpdateSoundCodeScheduleRequest()
{}

std::string UpdateSoundCodeScheduleRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void UpdateSoundCodeScheduleRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

std::string UpdateSoundCodeScheduleRequest::getDescription()const
{
	return description_;
}

void UpdateSoundCodeScheduleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateSoundCodeScheduleRequest::getStartTime()const
{
	return startTime_;
}

void UpdateSoundCodeScheduleRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string UpdateSoundCodeScheduleRequest::getStartDate()const
{
	return startDate_;
}

void UpdateSoundCodeScheduleRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

std::string UpdateSoundCodeScheduleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateSoundCodeScheduleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateSoundCodeScheduleRequest::getEndTime()const
{
	return endTime_;
}

void UpdateSoundCodeScheduleRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string UpdateSoundCodeScheduleRequest::getEndDate()const
{
	return endDate_;
}

void UpdateSoundCodeScheduleRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setBodyParameter("EndDate", endDate);
}

std::string UpdateSoundCodeScheduleRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateSoundCodeScheduleRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateSoundCodeScheduleRequest::getName()const
{
	return name_;
}

void UpdateSoundCodeScheduleRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string UpdateSoundCodeScheduleRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateSoundCodeScheduleRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateSoundCodeScheduleRequest::getStatus()const
{
	return status_;
}

void UpdateSoundCodeScheduleRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

