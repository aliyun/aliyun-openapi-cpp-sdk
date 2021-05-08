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

#include <alibabacloud/iot/model/CancelReleaseProductRequest.h>

using AlibabaCloud::Iot::Model::CancelReleaseProductRequest;

CancelReleaseProductRequest::CancelReleaseProductRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CancelReleaseProduct")
{
	setMethod(HttpRequest::Method::Post);
}

CancelReleaseProductRequest::~CancelReleaseProductRequest()
{}

std::string CancelReleaseProductRequest::getRealTenantId()const
{
	return realTenantId_;
}

void CancelReleaseProductRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string CancelReleaseProductRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelReleaseProductRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CancelReleaseProductRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void CancelReleaseProductRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string CancelReleaseProductRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CancelReleaseProductRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CancelReleaseProductRequest::getProductKey()const
{
	return productKey_;
}

void CancelReleaseProductRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string CancelReleaseProductRequest::getApiProduct()const
{
	return apiProduct_;
}

void CancelReleaseProductRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CancelReleaseProductRequest::getApiRevision()const
{
	return apiRevision_;
}

void CancelReleaseProductRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CancelReleaseProductRequest::getBizTenantId()const
{
	return bizTenantId_;
}

void CancelReleaseProductRequest::setBizTenantId(const std::string& bizTenantId)
{
	bizTenantId_ = bizTenantId;
	setParameter("BizTenantId", bizTenantId);
}

