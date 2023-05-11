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

#include <alibabacloud/iot/model/DeleteTopicConfigRequest.h>

using AlibabaCloud::Iot::Model::DeleteTopicConfigRequest;

DeleteTopicConfigRequest::DeleteTopicConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteTopicConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteTopicConfigRequest::~DeleteTopicConfigRequest()
{}

std::string DeleteTopicConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteTopicConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteTopicConfigRequest::getTopicFullName()const
{
	return topicFullName_;
}

void DeleteTopicConfigRequest::setTopicFullName(const std::string& topicFullName)
{
	topicFullName_ = topicFullName;
	setParameter("TopicFullName", topicFullName);
}

std::string DeleteTopicConfigRequest::getProductKey()const
{
	return productKey_;
}

void DeleteTopicConfigRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string DeleteTopicConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteTopicConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteTopicConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteTopicConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

