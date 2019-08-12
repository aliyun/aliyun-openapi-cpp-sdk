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

#include <alibabacloud/cloudwf/model/ModifySubAccountPermissionRequest.h>

using AlibabaCloud::Cloudwf::Model::ModifySubAccountPermissionRequest;

ModifySubAccountPermissionRequest::ModifySubAccountPermissionRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ModifySubAccountPermission")
{}

ModifySubAccountPermissionRequest::~ModifySubAccountPermissionRequest()
{}

std::vector<long> ModifySubAccountPermissionRequest::getShopGroupIds()const
{
	return shopGroupIds_;
}

void ModifySubAccountPermissionRequest::setShopGroupIds(const std::vector<long>& shopGroupIds)
{
	shopGroupIds_ = shopGroupIds;
	for(int i = 0; i!= shopGroupIds.size(); i++)
		setCoreParameter("ShopGroupIds."+ std::to_string(i), shopGroupIds.at(i));
}

std::vector<long> ModifySubAccountPermissionRequest::getShopIds()const
{
	return shopIds_;
}

void ModifySubAccountPermissionRequest::setShopIds(const std::vector<long>& shopIds)
{
	shopIds_ = shopIds;
	for(int i = 0; i!= shopIds.size(); i++)
		setCoreParameter("ShopIds."+ std::to_string(i), shopIds.at(i));
}

std::string ModifySubAccountPermissionRequest::getPagePermission()const
{
	return pagePermission_;
}

void ModifySubAccountPermissionRequest::setPagePermission(const std::string& pagePermission)
{
	pagePermission_ = pagePermission;
	setCoreParameter("PagePermission", std::to_string(pagePermission));
}

long ModifySubAccountPermissionRequest::getId()const
{
	return id_;
}

void ModifySubAccountPermissionRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string ModifySubAccountPermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySubAccountPermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::vector<long> ModifySubAccountPermissionRequest::getBusinessIds()const
{
	return businessIds_;
}

void ModifySubAccountPermissionRequest::setBusinessIds(const std::vector<long>& businessIds)
{
	businessIds_ = businessIds;
	for(int i = 0; i!= businessIds.size(); i++)
		setCoreParameter("BusinessIds."+ std::to_string(i), businessIds.at(i));
}

