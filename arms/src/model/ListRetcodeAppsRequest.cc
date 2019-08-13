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

#include <alibabacloud/arms/model/ListRetcodeAppsRequest.h>

using AlibabaCloud::ARMS::Model::ListRetcodeAppsRequest;

ListRetcodeAppsRequest::ListRetcodeAppsRequest() :
	RpcServiceRequest("arms", "2019-08-08", "ListRetcodeApps")
{}

ListRetcodeAppsRequest::~ListRetcodeAppsRequest()
{}

std::string ListRetcodeAppsRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListRetcodeAppsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ListRetcodeAppsRequest::getRegionId()const
{
	return regionId_;
}

void ListRetcodeAppsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListRetcodeAppsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRetcodeAppsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

