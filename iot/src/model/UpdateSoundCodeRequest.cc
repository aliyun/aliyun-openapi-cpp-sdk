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

#include <alibabacloud/iot/model/UpdateSoundCodeRequest.h>

using AlibabaCloud::Iot::Model::UpdateSoundCodeRequest;

UpdateSoundCodeRequest::UpdateSoundCodeRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateSoundCode")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSoundCodeRequest::~UpdateSoundCodeRequest()
{}

std::string UpdateSoundCodeRequest::getSoundCode()const
{
	return soundCode_;
}

void UpdateSoundCodeRequest::setSoundCode(const std::string& soundCode)
{
	soundCode_ = soundCode;
	setBodyParameter("SoundCode", soundCode);
}

int UpdateSoundCodeRequest::getDuration()const
{
	return duration_;
}

void UpdateSoundCodeRequest::setDuration(int duration)
{
	duration_ = duration;
	setBodyParameter("Duration", std::to_string(duration));
}

std::string UpdateSoundCodeRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateSoundCodeRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateSoundCodeRequest::getSoundCodeContent()const
{
	return soundCodeContent_;
}

void UpdateSoundCodeRequest::setSoundCodeContent(const std::string& soundCodeContent)
{
	soundCodeContent_ = soundCodeContent;
	setBodyParameter("SoundCodeContent", soundCodeContent);
}

std::string UpdateSoundCodeRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateSoundCodeRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateSoundCodeRequest::getName()const
{
	return name_;
}

void UpdateSoundCodeRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string UpdateSoundCodeRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateSoundCodeRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

