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

#include <alibabacloud/cloudwf/model/ShopGroupUpdateRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopGroupUpdateRequest;

ShopGroupUpdateRequest::ShopGroupUpdateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopGroupUpdate")
{}

ShopGroupUpdateRequest::~ShopGroupUpdateRequest()
{}

long ShopGroupUpdateRequest::getGid()const
{
	return gid_;
}

void ShopGroupUpdateRequest::setGid(long gid)
{
	gid_ = gid;
	setCoreParameter("Gid", std::to_string(gid));
}

std::string ShopGroupUpdateRequest::getShopIds()const
{
	return shopIds_;
}

void ShopGroupUpdateRequest::setShopIds(const std::string& shopIds)
{
	shopIds_ = shopIds;
	setCoreParameter("ShopIds", shopIds);
}

std::string ShopGroupUpdateRequest::getName()const
{
	return name_;
}

void ShopGroupUpdateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ShopGroupUpdateRequest::getDescription()const
{
	return description_;
}

void ShopGroupUpdateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ShopGroupUpdateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopGroupUpdateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

