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
{
	setMethod(HttpRequest::Method::Post);
}

ModifySubAccountPermissionRequest::~ModifySubAccountPermissionRequest()
{}

std::vector<long> ModifySubAccountPermissionRequest::getShopGroupIds()const
{
	return shopGroupIds_;
}

void ModifySubAccountPermissionRequest::setShopGroupIds(const std::vector<long>& shopGroupIds)
{
	shopGroupIds_ = shopGroupIds;
	for(int dep1 = 0; dep1!= shopGroupIds.size(); dep1++) {
		setParameter("ShopGroupIds."+ std::to_string(dep1), std::to_string(shopGroupIds.at(dep1)));
	}
}

std::string ModifySubAccountPermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySubAccountPermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<long> ModifySubAccountPermissionRequest::getShopIds()const
{
	return shopIds_;
}

void ModifySubAccountPermissionRequest::setShopIds(const std::vector<long>& shopIds)
{
	shopIds_ = shopIds;
	for(int dep1 = 0; dep1!= shopIds.size(); dep1++) {
		setParameter("ShopIds."+ std::to_string(dep1), std::to_string(shopIds.at(dep1)));
	}
}

std::string ModifySubAccountPermissionRequest::getPagePermission()const
{
	return pagePermission_;
}

void ModifySubAccountPermissionRequest::setPagePermission(const std::string& pagePermission)
{
	pagePermission_ = pagePermission;
	setParameter("PagePermission", pagePermission);
}

long ModifySubAccountPermissionRequest::getId()const
{
	return id_;
}

void ModifySubAccountPermissionRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::vector<long> ModifySubAccountPermissionRequest::getBusinessIds()const
{
	return businessIds_;
}

void ModifySubAccountPermissionRequest::setBusinessIds(const std::vector<long>& businessIds)
{
	businessIds_ = businessIds;
	for(int dep1 = 0; dep1!= businessIds.size(); dep1++) {
		setParameter("BusinessIds."+ std::to_string(dep1), std::to_string(businessIds.at(dep1)));
	}
}

