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

#include <alibabacloud/cloudesl/model/DeleteItemBySkuIdRequest.h>

using AlibabaCloud::Cloudesl::Model::DeleteItemBySkuIdRequest;

DeleteItemBySkuIdRequest::DeleteItemBySkuIdRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "DeleteItemBySkuId")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteItemBySkuIdRequest::~DeleteItemBySkuIdRequest()
{}

std::string DeleteItemBySkuIdRequest::getStoreId()const
{
	return storeId_;
}

void DeleteItemBySkuIdRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::string DeleteItemBySkuIdRequest::getSkuId()const
{
	return skuId_;
}

void DeleteItemBySkuIdRequest::setSkuId(const std::string& skuId)
{
	skuId_ = skuId;
	setParameter("SkuId", skuId);
}

