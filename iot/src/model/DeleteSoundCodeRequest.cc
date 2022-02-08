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

#include <alibabacloud/iot/model/DeleteSoundCodeRequest.h>

using AlibabaCloud::Iot::Model::DeleteSoundCodeRequest;

DeleteSoundCodeRequest::DeleteSoundCodeRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteSoundCode")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSoundCodeRequest::~DeleteSoundCodeRequest()
{}

std::string DeleteSoundCodeRequest::getSoundCode()const
{
	return soundCode_;
}

void DeleteSoundCodeRequest::setSoundCode(const std::string& soundCode)
{
	soundCode_ = soundCode;
	setBodyParameter("SoundCode", soundCode);
}

std::string DeleteSoundCodeRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteSoundCodeRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteSoundCodeRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteSoundCodeRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteSoundCodeRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteSoundCodeRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

