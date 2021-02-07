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

#include <alibabacloud/iot/model/CreateRulengDistributeJobRequest.h>

using AlibabaCloud::Iot::Model::CreateRulengDistributeJobRequest;

CreateRulengDistributeJobRequest::CreateRulengDistributeJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateRulengDistributeJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRulengDistributeJobRequest::~CreateRulengDistributeJobRequest()
{}

std::string CreateRulengDistributeJobRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void CreateRulengDistributeJobRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setParameter("SourceInstanceId", sourceInstanceId);
}

std::string CreateRulengDistributeJobRequest::getProductKey()const
{
	return productKey_;
}

void CreateRulengDistributeJobRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string CreateRulengDistributeJobRequest::getTargetInstanceId()const
{
	return targetInstanceId_;
}

void CreateRulengDistributeJobRequest::setTargetInstanceId(const std::string& targetInstanceId)
{
	targetInstanceId_ = targetInstanceId;
	setParameter("TargetInstanceId", targetInstanceId);
}

std::string CreateRulengDistributeJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateRulengDistributeJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateRulengDistributeJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateRulengDistributeJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

