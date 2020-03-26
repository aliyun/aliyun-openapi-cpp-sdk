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

#include <alibabacloud/cloudwf/model/ShopGroupCreateRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopGroupCreateRequest;

ShopGroupCreateRequest::ShopGroupCreateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopGroupCreate")
{
	setMethod(HttpRequest::Method::Post);
}

ShopGroupCreateRequest::~ShopGroupCreateRequest()
{}

std::string ShopGroupCreateRequest::getDescription()const
{
	return description_;
}

void ShopGroupCreateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ShopGroupCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopGroupCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ShopGroupCreateRequest::getShopIds()const
{
	return shopIds_;
}

void ShopGroupCreateRequest::setShopIds(const std::string& shopIds)
{
	shopIds_ = shopIds;
	setParameter("ShopIds", shopIds);
}

std::string ShopGroupCreateRequest::getName()const
{
	return name_;
}

void ShopGroupCreateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long ShopGroupCreateRequest::getBid()const
{
	return bid_;
}

void ShopGroupCreateRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

