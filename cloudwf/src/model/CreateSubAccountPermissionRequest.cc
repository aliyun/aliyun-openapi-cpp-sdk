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

#include <alibabacloud/cloudwf/model/CreateSubAccountPermissionRequest.h>

using AlibabaCloud::Cloudwf::Model::CreateSubAccountPermissionRequest;

CreateSubAccountPermissionRequest::CreateSubAccountPermissionRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "CreateSubAccountPermission")
{}

CreateSubAccountPermissionRequest::~CreateSubAccountPermissionRequest()
{}

long CreateSubAccountPermissionRequest::getUid()const
{
	return uid_;
}

void CreateSubAccountPermissionRequest::setUid(long uid)
{
	uid_ = uid;
	setCoreParameter("Uid", std::to_string(uid));
}

std::vector<long> CreateSubAccountPermissionRequest::getShopGroupIds()const
{
	return shopGroupIds_;
}

void CreateSubAccountPermissionRequest::setShopGroupIds(const std::vector<long>& shopGroupIds)
{
	shopGroupIds_ = shopGroupIds;
	for(int i = 0; i!= shopGroupIds.size(); i++)
		setCoreParameter("ShopGroupIds."+ std::to_string(i), std::to_string(shopGroupIds.at(i)));
}

std::vector<long> CreateSubAccountPermissionRequest::getShopIds()const
{
	return shopIds_;
}

void CreateSubAccountPermissionRequest::setShopIds(const std::vector<long>& shopIds)
{
	shopIds_ = shopIds;
	for(int i = 0; i!= shopIds.size(); i++)
		setCoreParameter("ShopIds."+ std::to_string(i), std::to_string(shopIds.at(i)));
}

std::string CreateSubAccountPermissionRequest::getPagePermission()const
{
	return pagePermission_;
}

void CreateSubAccountPermissionRequest::setPagePermission(const std::string& pagePermission)
{
	pagePermission_ = pagePermission;
	setCoreParameter("PagePermission", pagePermission);
}

std::string CreateSubAccountPermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSubAccountPermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int CreateSubAccountPermissionRequest::getPermissionType()const
{
	return permissionType_;
}

void CreateSubAccountPermissionRequest::setPermissionType(int permissionType)
{
	permissionType_ = permissionType;
	setCoreParameter("PermissionType", std::to_string(permissionType));
}

std::vector<long> CreateSubAccountPermissionRequest::getBusinessIds()const
{
	return businessIds_;
}

void CreateSubAccountPermissionRequest::setBusinessIds(const std::vector<long>& businessIds)
{
	businessIds_ = businessIds;
	for(int i = 0; i!= businessIds.size(); i++)
		setCoreParameter("BusinessIds."+ std::to_string(i), std::to_string(businessIds.at(i)));
}

