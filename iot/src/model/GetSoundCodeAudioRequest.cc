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

#include <alibabacloud/iot/model/GetSoundCodeAudioRequest.h>

using AlibabaCloud::Iot::Model::GetSoundCodeAudioRequest;

GetSoundCodeAudioRequest::GetSoundCodeAudioRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetSoundCodeAudio")
{
	setMethod(HttpRequest::Method::Post);
}

GetSoundCodeAudioRequest::~GetSoundCodeAudioRequest()
{}

std::string GetSoundCodeAudioRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetSoundCodeAudioRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> GetSoundCodeAudioRequest::getSoundCodeList()const
{
	return soundCodeList_;
}

void GetSoundCodeAudioRequest::setSoundCodeList(const std::vector<std::string>& soundCodeList)
{
	soundCodeList_ = soundCodeList;
	for(int dep1 = 0; dep1!= soundCodeList.size(); dep1++) {
		setBodyParameter("SoundCodeList."+ std::to_string(dep1), soundCodeList.at(dep1));
	}
}

std::string GetSoundCodeAudioRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetSoundCodeAudioRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetSoundCodeAudioRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetSoundCodeAudioRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

