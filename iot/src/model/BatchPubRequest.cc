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

std::vector<BatchPubRequest::UserProp> BatchPubRequest::getUserProp()const
{
	return userProp_;
}

void BatchPubRequest::setUserProp(const std::vector<UserProp>& userProp)
{
	userProp_ = userProp;
	for(int dep1 = 0; dep1!= userProp.size(); dep1++) {
		auto userPropObj = userProp.at(dep1);
		std::string userPropObjStr = "UserProp." + std::to_string(dep1 + 1);
		setParameter(userPropObjStr + ".Value", userPropObj.value);
		setParameter(userPropObjStr + ".Key", userPropObj.key);
	}
}

std::string BatchPubRequest::getResponseTopicTemplateName()const
{
	return responseTopicTemplateName_;
}

void BatchPubRequest::setResponseTopicTemplateName(const std::string& responseTopicTemplateName)
{
	responseTopicTemplateName_ = responseTopicTemplateName;
	setParameter("ResponseTopicTemplateName", responseTopicTemplateName);
}

std::string BatchPubRequest::getMessageContent()const
{
	return messageContent_;
}

void BatchPubRequest::setMessageContent(const std::string& messageContent)
{
	messageContent_ = messageContent;
	setParameter("MessageContent", messageContent);
}

std::string BatchPubRequest::getTopicTemplateName()const
{
	return topicTemplateName_;
}

void BatchPubRequest::setTopicTemplateName(const std::string& topicTemplateName)
{
	topicTemplateName_ = topicTemplateName;
	setParameter("TopicTemplateName", topicTemplateName);
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

std::string BatchPubRequest::getCorrelationData()const
{
	return correlationData_;
}

void BatchPubRequest::setCorrelationData(const std::string& correlationData)
{
	correlationData_ = correlationData;
	setParameter("CorrelationData", correlationData);
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

long BatchPubRequest::getMessageExpiryInterval()const
{
	return messageExpiryInterval_;
}

void BatchPubRequest::setMessageExpiryInterval(long messageExpiryInterval)
{
	messageExpiryInterval_ = messageExpiryInterval;
	setParameter("MessageExpiryInterval", std::to_string(messageExpiryInterval));
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

int BatchPubRequest::getPayloadFormatIndicator()const
{
	return payloadFormatIndicator_;
}

void BatchPubRequest::setPayloadFormatIndicator(int payloadFormatIndicator)
{
	payloadFormatIndicator_ = payloadFormatIndicator;
	setParameter("PayloadFormatIndicator", std::to_string(payloadFormatIndicator));
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

std::string BatchPubRequest::getContentType()const
{
	return contentType_;
}

void BatchPubRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setParameter("ContentType", contentType);
}

bool BatchPubRequest::getRetained()const
{
	return retained_;
}

void BatchPubRequest::setRetained(bool retained)
{
	retained_ = retained;
	setParameter("Retained", retained ? "true" : "false");
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

