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

#include <alibabacloud/emr/model/ListSupportedServiceNameForAdminRequest.h>

using AlibabaCloud::Emr::Model::ListSupportedServiceNameForAdminRequest;

ListSupportedServiceNameForAdminRequest::ListSupportedServiceNameForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListSupportedServiceNameForAdmin")
{}

ListSupportedServiceNameForAdminRequest::~ListSupportedServiceNameForAdminRequest()
{}

long ListSupportedServiceNameForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListSupportedServiceNameForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListSupportedServiceNameForAdminRequest::getRegionId()const
{
	return regionId_;
}

void ListSupportedServiceNameForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListSupportedServiceNameForAdminRequest::getUserId()const
{
	return userId_;
}

void ListSupportedServiceNameForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string ListSupportedServiceNameForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSupportedServiceNameForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

