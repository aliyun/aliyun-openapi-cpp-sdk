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

#include <alibabacloud/arms/model/DeleteAlertContactGroupRequest.h>

using AlibabaCloud::ARMS::Model::DeleteAlertContactGroupRequest;

DeleteAlertContactGroupRequest::DeleteAlertContactGroupRequest() :
	RpcServiceRequest("arms", "2019-08-08", "DeleteAlertContactGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAlertContactGroupRequest::~DeleteAlertContactGroupRequest()
{}

long DeleteAlertContactGroupRequest::getContactGroupId()const
{
	return contactGroupId_;
}

void DeleteAlertContactGroupRequest::setContactGroupId(long contactGroupId)
{
	contactGroupId_ = contactGroupId;
	setParameter("ContactGroupId", std::to_string(contactGroupId));
}

std::string DeleteAlertContactGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAlertContactGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteAlertContactGroupRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void DeleteAlertContactGroupRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

