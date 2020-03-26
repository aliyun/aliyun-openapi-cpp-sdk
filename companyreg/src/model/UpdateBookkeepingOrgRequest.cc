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

#include <alibabacloud/companyreg/model/UpdateBookkeepingOrgRequest.h>

using AlibabaCloud::Companyreg::Model::UpdateBookkeepingOrgRequest;

UpdateBookkeepingOrgRequest::UpdateBookkeepingOrgRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "UpdateBookkeepingOrg")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateBookkeepingOrgRequest::~UpdateBookkeepingOrgRequest()
{}

std::string UpdateBookkeepingOrgRequest::getOrgAddress()const
{
	return orgAddress_;
}

void UpdateBookkeepingOrgRequest::setOrgAddress(const std::string& orgAddress)
{
	orgAddress_ = orgAddress;
	setParameter("OrgAddress", orgAddress);
}

std::string UpdateBookkeepingOrgRequest::getOrgName()const
{
	return orgName_;
}

void UpdateBookkeepingOrgRequest::setOrgName(const std::string& orgName)
{
	orgName_ = orgName;
	setParameter("OrgName", orgName);
}

std::string UpdateBookkeepingOrgRequest::getOrgCode()const
{
	return orgCode_;
}

void UpdateBookkeepingOrgRequest::setOrgCode(const std::string& orgCode)
{
	orgCode_ = orgCode;
	setParameter("OrgCode", orgCode);
}

std::string UpdateBookkeepingOrgRequest::getOrgMobile()const
{
	return orgMobile_;
}

void UpdateBookkeepingOrgRequest::setOrgMobile(const std::string& orgMobile)
{
	orgMobile_ = orgMobile;
	setParameter("OrgMobile", orgMobile);
}

