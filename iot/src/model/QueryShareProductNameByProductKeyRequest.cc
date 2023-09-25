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

#include <alibabacloud/iot/model/QueryShareProductNameByProductKeyRequest.h>

using AlibabaCloud::Iot::Model::QueryShareProductNameByProductKeyRequest;

QueryShareProductNameByProductKeyRequest::QueryShareProductNameByProductKeyRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryShareProductNameByProductKey")
{
	setMethod(HttpRequest::Method::Post);
}

QueryShareProductNameByProductKeyRequest::~QueryShareProductNameByProductKeyRequest()
{}

std::string QueryShareProductNameByProductKeyRequest::getShareTaskCode()const
{
	return shareTaskCode_;
}

void QueryShareProductNameByProductKeyRequest::setShareTaskCode(const std::string& shareTaskCode)
{
	shareTaskCode_ = shareTaskCode;
	setBodyParameter("ShareTaskCode", shareTaskCode);
}

std::string QueryShareProductNameByProductKeyRequest::getProductKey()const
{
	return productKey_;
}

void QueryShareProductNameByProductKeyRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string QueryShareProductNameByProductKeyRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryShareProductNameByProductKeyRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryShareProductNameByProductKeyRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryShareProductNameByProductKeyRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

