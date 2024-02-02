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

#include <alibabacloud/iot/model/UnsubscribeTopicRequest.h>

using AlibabaCloud::Iot::Model::UnsubscribeTopicRequest;

UnsubscribeTopicRequest::UnsubscribeTopicRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UnsubscribeTopic")
{
	setMethod(HttpRequest::Method::Post);
}

UnsubscribeTopicRequest::~UnsubscribeTopicRequest()
{}

std::string UnsubscribeTopicRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UnsubscribeTopicRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UnsubscribeTopicRequest::getProductKey()const
{
	return productKey_;
}

void UnsubscribeTopicRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UnsubscribeTopicRequest::getApiProduct()const
{
	return apiProduct_;
}

void UnsubscribeTopicRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::vector<std::string> UnsubscribeTopicRequest::getTopic()const
{
	return topic_;
}

void UnsubscribeTopicRequest::setTopic(const std::vector<std::string>& topic)
{
	topic_ = topic;
	for(int dep1 = 0; dep1!= topic.size(); dep1++) {
		setParameter("Topic."+ std::to_string(dep1), topic.at(dep1));
	}
}

std::string UnsubscribeTopicRequest::getApiRevision()const
{
	return apiRevision_;
}

void UnsubscribeTopicRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UnsubscribeTopicRequest::getDeviceName()const
{
	return deviceName_;
}

void UnsubscribeTopicRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

