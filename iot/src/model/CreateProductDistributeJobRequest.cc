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

#include <alibabacloud/iot/model/CreateProductDistributeJobRequest.h>

using AlibabaCloud::Iot::Model::CreateProductDistributeJobRequest;

CreateProductDistributeJobRequest::CreateProductDistributeJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateProductDistributeJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProductDistributeJobRequest::~CreateProductDistributeJobRequest()
{}

std::string CreateProductDistributeJobRequest::getCaptcha()const
{
	return captcha_;
}

void CreateProductDistributeJobRequest::setCaptcha(const std::string& captcha)
{
	captcha_ = captcha;
	setParameter("Captcha", captcha);
}

std::string CreateProductDistributeJobRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void CreateProductDistributeJobRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setParameter("SourceInstanceId", sourceInstanceId);
}

std::string CreateProductDistributeJobRequest::getTargetAliyunId()const
{
	return targetAliyunId_;
}

void CreateProductDistributeJobRequest::setTargetAliyunId(const std::string& targetAliyunId)
{
	targetAliyunId_ = targetAliyunId;
	setParameter("TargetAliyunId", targetAliyunId);
}

std::string CreateProductDistributeJobRequest::getProductKey()const
{
	return productKey_;
}

void CreateProductDistributeJobRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string CreateProductDistributeJobRequest::getTargetInstanceId()const
{
	return targetInstanceId_;
}

void CreateProductDistributeJobRequest::setTargetInstanceId(const std::string& targetInstanceId)
{
	targetInstanceId_ = targetInstanceId;
	setParameter("TargetInstanceId", targetInstanceId);
}

std::string CreateProductDistributeJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateProductDistributeJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateProductDistributeJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateProductDistributeJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateProductDistributeJobRequest::getTargetUid()const
{
	return targetUid_;
}

void CreateProductDistributeJobRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", targetUid);
}

