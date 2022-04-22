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

#include <alibabacloud/iot/model/UpdateSchedulePeriodRequest.h>

using AlibabaCloud::Iot::Model::UpdateSchedulePeriodRequest;

UpdateSchedulePeriodRequest::UpdateSchedulePeriodRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateSchedulePeriod")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSchedulePeriodRequest::~UpdateSchedulePeriodRequest()
{}

std::string UpdateSchedulePeriodRequest::getPeriodCode()const
{
	return periodCode_;
}

void UpdateSchedulePeriodRequest::setPeriodCode(const std::string& periodCode)
{
	periodCode_ = periodCode;
	setBodyParameter("PeriodCode", periodCode);
}

std::string UpdateSchedulePeriodRequest::getDescription()const
{
	return description_;
}

void UpdateSchedulePeriodRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateSchedulePeriodRequest::getStartTime()const
{
	return startTime_;
}

void UpdateSchedulePeriodRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string UpdateSchedulePeriodRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateSchedulePeriodRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateSchedulePeriodRequest::getEndTime()const
{
	return endTime_;
}

void UpdateSchedulePeriodRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string UpdateSchedulePeriodRequest::getSoundCodeContent()const
{
	return soundCodeContent_;
}

void UpdateSchedulePeriodRequest::setSoundCodeContent(const std::string& soundCodeContent)
{
	soundCodeContent_ = soundCodeContent;
	setBodyParameter("SoundCodeContent", soundCodeContent);
}

std::string UpdateSchedulePeriodRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateSchedulePeriodRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateSchedulePeriodRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateSchedulePeriodRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

