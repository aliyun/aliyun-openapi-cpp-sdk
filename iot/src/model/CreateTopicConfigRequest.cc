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

#include <alibabacloud/iot/model/CreateTopicConfigRequest.h>

using AlibabaCloud::Iot::Model::CreateTopicConfigRequest;

CreateTopicConfigRequest::CreateTopicConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateTopicConfig")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTopicConfigRequest::~CreateTopicConfigRequest()
{}

std::string CreateTopicConfigRequest::getDescription()const
{
	return description_;
}

void CreateTopicConfigRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateTopicConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateTopicConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateTopicConfigRequest::getTopicFullName()const
{
	return topicFullName_;
}

void CreateTopicConfigRequest::setTopicFullName(const std::string& topicFullName)
{
	topicFullName_ = topicFullName;
	setParameter("TopicFullName", topicFullName);
}

bool CreateTopicConfigRequest::getEnableBroadcast()const
{
	return enableBroadcast_;
}

void CreateTopicConfigRequest::setEnableBroadcast(bool enableBroadcast)
{
	enableBroadcast_ = enableBroadcast;
	setParameter("EnableBroadcast", enableBroadcast ? "true" : "false");
}

bool CreateTopicConfigRequest::getEnableProxySubscribe()const
{
	return enableProxySubscribe_;
}

void CreateTopicConfigRequest::setEnableProxySubscribe(bool enableProxySubscribe)
{
	enableProxySubscribe_ = enableProxySubscribe;
	setParameter("EnableProxySubscribe", enableProxySubscribe ? "true" : "false");
}

std::string CreateTopicConfigRequest::getProductKey()const
{
	return productKey_;
}

void CreateTopicConfigRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string CreateTopicConfigRequest::getCodec()const
{
	return codec_;
}

void CreateTopicConfigRequest::setCodec(const std::string& codec)
{
	codec_ = codec;
	setParameter("Codec", codec);
}

std::string CreateTopicConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateTopicConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateTopicConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateTopicConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateTopicConfigRequest::getOperation()const
{
	return operation_;
}

void CreateTopicConfigRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

