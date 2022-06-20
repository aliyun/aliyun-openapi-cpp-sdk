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

#include <alibabacloud/iot/model/CreateSoundCodeScheduleRequest.h>

using AlibabaCloud::Iot::Model::CreateSoundCodeScheduleRequest;

CreateSoundCodeScheduleRequest::CreateSoundCodeScheduleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateSoundCodeSchedule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSoundCodeScheduleRequest::~CreateSoundCodeScheduleRequest()
{}

std::string CreateSoundCodeScheduleRequest::getDescription()const
{
	return description_;
}

void CreateSoundCodeScheduleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateSoundCodeScheduleRequest::getStartDate()const
{
	return startDate_;
}

void CreateSoundCodeScheduleRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

std::string CreateSoundCodeScheduleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateSoundCodeScheduleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateSoundCodeScheduleRequest::getEndDate()const
{
	return endDate_;
}

void CreateSoundCodeScheduleRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setBodyParameter("EndDate", endDate);
}

std::string CreateSoundCodeScheduleRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateSoundCodeScheduleRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateSoundCodeScheduleRequest::getName()const
{
	return name_;
}

void CreateSoundCodeScheduleRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateSoundCodeScheduleRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateSoundCodeScheduleRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateSoundCodeScheduleRequest::getOpenType()const
{
	return openType_;
}

void CreateSoundCodeScheduleRequest::setOpenType(const std::string& openType)
{
	openType_ = openType;
	setBodyParameter("OpenType", openType);
}

