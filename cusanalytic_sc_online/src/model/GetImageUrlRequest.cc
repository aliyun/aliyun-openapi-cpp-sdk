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

#include <alibabacloud/cusanalytic_sc_online/model/GetImageUrlRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetImageUrlRequest;

GetImageUrlRequest::GetImageUrlRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetImageUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetImageUrlRequest::~GetImageUrlRequest()
{}

std::string GetImageUrlRequest::getOriginUrls()const
{
	return originUrls_;
}

void GetImageUrlRequest::setOriginUrls(const std::string& originUrls)
{
	originUrls_ = originUrls;
	setBodyParameter("OriginUrls", originUrls);
}

std::string GetImageUrlRequest::getStoreId()const
{
	return storeId_;
}

void GetImageUrlRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string GetImageUrlRequest::getObjectKeys()const
{
	return objectKeys_;
}

void GetImageUrlRequest::setObjectKeys(const std::string& objectKeys)
{
	objectKeys_ = objectKeys;
	setBodyParameter("ObjectKeys", objectKeys);
}

