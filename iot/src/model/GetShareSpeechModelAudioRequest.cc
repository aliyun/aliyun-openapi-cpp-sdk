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

#include <alibabacloud/iot/model/GetShareSpeechModelAudioRequest.h>

using AlibabaCloud::Iot::Model::GetShareSpeechModelAudioRequest;

GetShareSpeechModelAudioRequest::GetShareSpeechModelAudioRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetShareSpeechModelAudio")
{
	setMethod(HttpRequest::Method::Post);
}

GetShareSpeechModelAudioRequest::~GetShareSpeechModelAudioRequest()
{}

std::string GetShareSpeechModelAudioRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetShareSpeechModelAudioRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string GetShareSpeechModelAudioRequest::getShareTaskId()const
{
	return shareTaskId_;
}

void GetShareSpeechModelAudioRequest::setShareTaskId(const std::string& shareTaskId)
{
	shareTaskId_ = shareTaskId;
	setBodyParameter("ShareTaskId", shareTaskId);
}

std::string GetShareSpeechModelAudioRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetShareSpeechModelAudioRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetShareSpeechModelAudioRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetShareSpeechModelAudioRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<std::string> GetShareSpeechModelAudioRequest::getSpeechModelCodeList()const
{
	return speechModelCodeList_;
}

void GetShareSpeechModelAudioRequest::setSpeechModelCodeList(const std::vector<std::string>& speechModelCodeList)
{
	speechModelCodeList_ = speechModelCodeList;
	for(int dep1 = 0; dep1!= speechModelCodeList.size(); dep1++) {
		setBodyParameter("SpeechModelCodeList."+ std::to_string(dep1), speechModelCodeList.at(dep1));
	}
}

