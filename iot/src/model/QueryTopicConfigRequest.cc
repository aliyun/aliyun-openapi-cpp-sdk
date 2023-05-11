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

#include <alibabacloud/iot/model/QueryTopicConfigRequest.h>

using AlibabaCloud::Iot::Model::QueryTopicConfigRequest;

QueryTopicConfigRequest::QueryTopicConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryTopicConfig")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTopicConfigRequest::~QueryTopicConfigRequest()
{}

std::string QueryTopicConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryTopicConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryTopicConfigRequest::getProductKey()const
{
	return productKey_;
}

void QueryTopicConfigRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryTopicConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryTopicConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryTopicConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryTopicConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

