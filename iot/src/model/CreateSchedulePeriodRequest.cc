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

#include <alibabacloud/iot/model/CreateSchedulePeriodRequest.h>

using AlibabaCloud::Iot::Model::CreateSchedulePeriodRequest;

CreateSchedulePeriodRequest::CreateSchedulePeriodRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateSchedulePeriod")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSchedulePeriodRequest::~CreateSchedulePeriodRequest()
{}

std::string CreateSchedulePeriodRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void CreateSchedulePeriodRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

std::string CreateSchedulePeriodRequest::getDescription()const
{
	return description_;
}

void CreateSchedulePeriodRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateSchedulePeriodRequest::getStartTime()const
{
	return startTime_;
}

void CreateSchedulePeriodRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string CreateSchedulePeriodRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateSchedulePeriodRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateSchedulePeriodRequest::getEndTime()const
{
	return endTime_;
}

void CreateSchedulePeriodRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string CreateSchedulePeriodRequest::getSoundCodeContent()const
{
	return soundCodeContent_;
}

void CreateSchedulePeriodRequest::setSoundCodeContent(const std::string& soundCodeContent)
{
	soundCodeContent_ = soundCodeContent;
	setBodyParameter("SoundCodeContent", soundCodeContent);
}

std::string CreateSchedulePeriodRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateSchedulePeriodRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateSchedulePeriodRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateSchedulePeriodRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

