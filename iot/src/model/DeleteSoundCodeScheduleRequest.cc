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

#include <alibabacloud/iot/model/DeleteSoundCodeScheduleRequest.h>

using AlibabaCloud::Iot::Model::DeleteSoundCodeScheduleRequest;

DeleteSoundCodeScheduleRequest::DeleteSoundCodeScheduleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteSoundCodeSchedule")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSoundCodeScheduleRequest::~DeleteSoundCodeScheduleRequest()
{}

std::string DeleteSoundCodeScheduleRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void DeleteSoundCodeScheduleRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

std::string DeleteSoundCodeScheduleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteSoundCodeScheduleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteSoundCodeScheduleRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteSoundCodeScheduleRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteSoundCodeScheduleRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteSoundCodeScheduleRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

