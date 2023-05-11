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

#include <alibabacloud/iot/model/UpdateTopicConfigRequest.h>

using AlibabaCloud::Iot::Model::UpdateTopicConfigRequest;

UpdateTopicConfigRequest::UpdateTopicConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateTopicConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateTopicConfigRequest::~UpdateTopicConfigRequest()
{}

std::string UpdateTopicConfigRequest::getDescription()const
{
	return description_;
}

void UpdateTopicConfigRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateTopicConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateTopicConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateTopicConfigRequest::getTopicFullName()const
{
	return topicFullName_;
}

void UpdateTopicConfigRequest::setTopicFullName(const std::string& topicFullName)
{
	topicFullName_ = topicFullName;
	setParameter("TopicFullName", topicFullName);
}

bool UpdateTopicConfigRequest::getEnableBroadcast()const
{
	return enableBroadcast_;
}

void UpdateTopicConfigRequest::setEnableBroadcast(bool enableBroadcast)
{
	enableBroadcast_ = enableBroadcast;
	setParameter("EnableBroadcast", enableBroadcast ? "true" : "false");
}

bool UpdateTopicConfigRequest::getEnableProxySubscribe()const
{
	return enableProxySubscribe_;
}

void UpdateTopicConfigRequest::setEnableProxySubscribe(bool enableProxySubscribe)
{
	enableProxySubscribe_ = enableProxySubscribe;
	setParameter("EnableProxySubscribe", enableProxySubscribe ? "true" : "false");
}

std::string UpdateTopicConfigRequest::getProductKey()const
{
	return productKey_;
}

void UpdateTopicConfigRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UpdateTopicConfigRequest::getCodec()const
{
	return codec_;
}

void UpdateTopicConfigRequest::setCodec(const std::string& codec)
{
	codec_ = codec;
	setParameter("Codec", codec);
}

std::string UpdateTopicConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateTopicConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateTopicConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateTopicConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateTopicConfigRequest::getOperation()const
{
	return operation_;
}

void UpdateTopicConfigRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

