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
{
	setMethod(HttpRequest::Method::Post);
}

CreateSubAccountPermissionRequest::~CreateSubAccountPermissionRequest()
{}

std::vector<long> CreateSubAccountPermissionRequest::getShopGroupIds()const
{
	return shopGroupIds_;
}

void CreateSubAccountPermissionRequest::setShopGroupIds(const std::vector<long>& shopGroupIds)
{
	shopGroupIds_ = shopGroupIds;
	for(int dep1 = 0; dep1!= shopGroupIds.size(); dep1++) {
		setParameter("ShopGroupIds."+ std::to_string(dep1), std::to_string(shopGroupIds.at(dep1)));
	}
}

std::string CreateSubAccountPermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSubAccountPermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long CreateSubAccountPermissionRequest::getUid()const
{
	return uid_;
}

void CreateSubAccountPermissionRequest::setUid(long uid)
{
	uid_ = uid;
	setParameter("Uid", std::to_string(uid));
}

std::vector<long> CreateSubAccountPermissionRequest::getShopIds()const
{
	return shopIds_;
}

void CreateSubAccountPermissionRequest::setShopIds(const std::vector<long>& shopIds)
{
	shopIds_ = shopIds;
	for(int dep1 = 0; dep1!= shopIds.size(); dep1++) {
		setParameter("ShopIds."+ std::to_string(dep1), std::to_string(shopIds.at(dep1)));
	}
}

std::string CreateSubAccountPermissionRequest::getPagePermission()const
{
	return pagePermission_;
}

void CreateSubAccountPermissionRequest::setPagePermission(const std::string& pagePermission)
{
	pagePermission_ = pagePermission;
	setParameter("PagePermission", pagePermission);
}

int CreateSubAccountPermissionRequest::getPermissionType()const
{
	return permissionType_;
}

void CreateSubAccountPermissionRequest::setPermissionType(int permissionType)
{
	permissionType_ = permissionType;
	setParameter("PermissionType", std::to_string(permissionType));
}

std::vector<long> CreateSubAccountPermissionRequest::getBusinessIds()const
{
	return businessIds_;
}

void CreateSubAccountPermissionRequest::setBusinessIds(const std::vector<long>& businessIds)
{
	businessIds_ = businessIds;
	for(int dep1 = 0; dep1!= businessIds.size(); dep1++) {
		setParameter("BusinessIds."+ std::to_string(dep1), std::to_string(businessIds.at(dep1)));
	}
}

