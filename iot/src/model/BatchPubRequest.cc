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

#include <alibabacloud/iot/model/BatchPubRequest.h>

using AlibabaCloud::Iot::Model::BatchPubRequest;

BatchPubRequest::BatchPubRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchPub")
{
	setMethod(HttpRequest::Method::Post);
}

BatchPubRequest::~BatchPubRequest()
{}

std::string BatchPubRequest::getMessageContent()const
{
	return messageContent_;
}

void BatchPubRequest::setMessageContent(const std::string& messageContent)
{
	messageContent_ = messageContent;
	setParameter("MessageContent", messageContent);
}

int BatchPubRequest::getQos()const
{
	return qos_;
}

void BatchPubRequest::setQos(int qos)
{
	qos_ = qos;
	setParameter("Qos", std::to_string(qos));
}

std::string BatchPubRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchPubRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string BatchPubRequest::getTopicShortName()const
{
	return topicShortName_;
}

void BatchPubRequest::setTopicShortName(const std::string& topicShortName)
{
	topicShortName_ = topicShortName;
	setParameter("TopicShortName", topicShortName);
}

std::string BatchPubRequest::getProductKey()const
{
	return productKey_;
}

void BatchPubRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string BatchPubRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchPubRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchPubRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchPubRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<std::string> BatchPubRequest::getDeviceName()const
{
	return deviceName_;
}

void BatchPubRequest::setDeviceName(const std::vector<std::string>& deviceName)
{
	deviceName_ = deviceName;
	for(int dep1 = 0; dep1!= deviceName.size(); dep1++) {
		setParameter("DeviceName."+ std::to_string(dep1), deviceName.at(dep1));
	}
}

