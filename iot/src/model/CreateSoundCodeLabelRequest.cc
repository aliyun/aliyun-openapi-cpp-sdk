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

#include <alibabacloud/iot/model/CreateSoundCodeLabelRequest.h>

using AlibabaCloud::Iot::Model::CreateSoundCodeLabelRequest;

CreateSoundCodeLabelRequest::CreateSoundCodeLabelRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateSoundCodeLabel")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSoundCodeLabelRequest::~CreateSoundCodeLabelRequest()
{}

std::string CreateSoundCodeLabelRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void CreateSoundCodeLabelRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

std::string CreateSoundCodeLabelRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateSoundCodeLabelRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateSoundCodeLabelRequest::getLabel()const
{
	return label_;
}

void CreateSoundCodeLabelRequest::setLabel(const std::string& label)
{
	label_ = label;
	setBodyParameter("Label", label);
}

std::string CreateSoundCodeLabelRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateSoundCodeLabelRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateSoundCodeLabelRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateSoundCodeLabelRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

