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

#include <alibabacloud/cloudwf/model/GetInstanceByShopRequest.h>

using AlibabaCloud::Cloudwf::Model::GetInstanceByShopRequest;

GetInstanceByShopRequest::GetInstanceByShopRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetInstanceByShop")
{
	setMethod(HttpRequest::Method::Post);
}

GetInstanceByShopRequest::~GetInstanceByShopRequest()
{}

std::string GetInstanceByShopRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetInstanceByShopRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetInstanceByShopRequest::getShopId()const
{
	return shopId_;
}

void GetInstanceByShopRequest::setShopId(long shopId)
{
	shopId_ = shopId;
	setParameter("ShopId", std::to_string(shopId));
}

