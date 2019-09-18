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

#include <alibabacloud/cdn/model/ModifyCdnServiceRequest.h>

using AlibabaCloud::Cdn::Model::ModifyCdnServiceRequest;

ModifyCdnServiceRequest::ModifyCdnServiceRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ModifyCdnService")
{}

ModifyCdnServiceRequest::~ModifyCdnServiceRequest()
{}

long ModifyCdnServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCdnServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyCdnServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyCdnServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyCdnServiceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ModifyCdnServiceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

