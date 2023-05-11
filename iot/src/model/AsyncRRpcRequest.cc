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

#include <alibabacloud/iot/model/AsyncRRpcRequest.h>

using AlibabaCloud::Iot::Model::AsyncRRpcRequest;

AsyncRRpcRequest::AsyncRRpcRequest() :
	RpcServiceRequest("iot", "2018-01-20", "AsyncRRpc")
{
	setMethod(HttpRequest::Method::Post);
}

AsyncRRpcRequest::~AsyncRRpcRequest()
{}

std::string AsyncRRpcRequest::getMessageContent()const
{
	return messageContent_;
}

void AsyncRRpcRequest::setMessageContent(const std::string& messageContent)
{
	messageContent_ = messageContent;
	setBodyParameter("MessageContent", messageContent);
}

std::string AsyncRRpcRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AsyncRRpcRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AsyncRRpcRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void AsyncRRpcRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string AsyncRRpcRequest::getExtInfo()const
{
	return extInfo_;
}

void AsyncRRpcRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setParameter("ExtInfo", extInfo);
}

std::string AsyncRRpcRequest::getTopicFullName()const
{
	return topicFullName_;
}

void AsyncRRpcRequest::setTopicFullName(const std::string& topicFullName)
{
	topicFullName_ = topicFullName;
	setParameter("TopicFullName", topicFullName);
}

std::string AsyncRRpcRequest::getProductKey()const
{
	return productKey_;
}

void AsyncRRpcRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string AsyncRRpcRequest::getApiProduct()const
{
	return apiProduct_;
}

void AsyncRRpcRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string AsyncRRpcRequest::getApiRevision()const
{
	return apiRevision_;
}

void AsyncRRpcRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string AsyncRRpcRequest::getDeviceName()const
{
	return deviceName_;
}

void AsyncRRpcRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

