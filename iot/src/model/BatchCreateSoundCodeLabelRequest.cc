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

#include <alibabacloud/iot/model/BatchCreateSoundCodeLabelRequest.h>

using AlibabaCloud::Iot::Model::BatchCreateSoundCodeLabelRequest;

BatchCreateSoundCodeLabelRequest::BatchCreateSoundCodeLabelRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchCreateSoundCodeLabel")
{
	setMethod(HttpRequest::Method::Post);
}

BatchCreateSoundCodeLabelRequest::~BatchCreateSoundCodeLabelRequest()
{}

std::string BatchCreateSoundCodeLabelRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void BatchCreateSoundCodeLabelRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

std::string BatchCreateSoundCodeLabelRequest::getDescription()const
{
	return description_;
}

void BatchCreateSoundCodeLabelRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

int BatchCreateSoundCodeLabelRequest::getTotal()const
{
	return total_;
}

void BatchCreateSoundCodeLabelRequest::setTotal(int total)
{
	total_ = total;
	setBodyParameter("Total", std::to_string(total));
}

std::string BatchCreateSoundCodeLabelRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchCreateSoundCodeLabelRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string BatchCreateSoundCodeLabelRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchCreateSoundCodeLabelRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchCreateSoundCodeLabelRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchCreateSoundCodeLabelRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

