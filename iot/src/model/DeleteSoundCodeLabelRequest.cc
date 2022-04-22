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

#include <alibabacloud/iot/model/DeleteSoundCodeLabelRequest.h>

using AlibabaCloud::Iot::Model::DeleteSoundCodeLabelRequest;

DeleteSoundCodeLabelRequest::DeleteSoundCodeLabelRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteSoundCodeLabel")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSoundCodeLabelRequest::~DeleteSoundCodeLabelRequest()
{}

std::string DeleteSoundCodeLabelRequest::getSoundCode()const
{
	return soundCode_;
}

void DeleteSoundCodeLabelRequest::setSoundCode(const std::string& soundCode)
{
	soundCode_ = soundCode;
	setBodyParameter("SoundCode", soundCode);
}

std::string DeleteSoundCodeLabelRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteSoundCodeLabelRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteSoundCodeLabelRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteSoundCodeLabelRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteSoundCodeLabelRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteSoundCodeLabelRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

