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

#include <alibabacloud/csb/model/RenewCredentialsRequest.h>

using AlibabaCloud::CSB::Model::RenewCredentialsRequest;

RenewCredentialsRequest::RenewCredentialsRequest() :
	RpcServiceRequest("csb", "2017-11-18", "RenewCredentials")
{}

RenewCredentialsRequest::~RenewCredentialsRequest()
{}

std::string RenewCredentialsRequest::getRegionId()const
{
	return regionId_;
}

void RenewCredentialsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long RenewCredentialsRequest::getCredentialId()const
{
	return credentialId_;
}

void RenewCredentialsRequest::setCredentialId(long credentialId)
{
	credentialId_ = credentialId;
	setCoreParameter("CredentialId", std::to_string(credentialId));
}

