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

#include <alibabacloud/iot/model/DeleteSpeechRequest.h>

using AlibabaCloud::Iot::Model::DeleteSpeechRequest;

DeleteSpeechRequest::DeleteSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSpeechRequest::~DeleteSpeechRequest()
{}

std::string DeleteSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> DeleteSpeechRequest::getSpeechCodeList()const
{
	return speechCodeList_;
}

void DeleteSpeechRequest::setSpeechCodeList(const std::vector<std::string>& speechCodeList)
{
	speechCodeList_ = speechCodeList;
	for(int dep1 = 0; dep1!= speechCodeList.size(); dep1++) {
		setBodyParameter("SpeechCodeList."+ std::to_string(dep1), speechCodeList.at(dep1));
	}
}

std::string DeleteSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

