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

#include <alibabacloud/iot/model/CreateSoundCodeRequest.h>

using AlibabaCloud::Iot::Model::CreateSoundCodeRequest;

CreateSoundCodeRequest::CreateSoundCodeRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateSoundCode")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSoundCodeRequest::~CreateSoundCodeRequest()
{}

int CreateSoundCodeRequest::getDuration()const
{
	return duration_;
}

void CreateSoundCodeRequest::setDuration(int duration)
{
	duration_ = duration;
	setBodyParameter("Duration", std::to_string(duration));
}

std::string CreateSoundCodeRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateSoundCodeRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateSoundCodeRequest::getSoundCodeContent()const
{
	return soundCodeContent_;
}

void CreateSoundCodeRequest::setSoundCodeContent(const std::string& soundCodeContent)
{
	soundCodeContent_ = soundCodeContent;
	setBodyParameter("SoundCodeContent", soundCodeContent);
}

std::string CreateSoundCodeRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateSoundCodeRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateSoundCodeRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateSoundCodeRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

