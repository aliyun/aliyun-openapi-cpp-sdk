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

#include <alibabacloud/teambition-aliyun/model/CreateDevopsOrgRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::CreateDevopsOrgRequest;

CreateDevopsOrgRequest::CreateDevopsOrgRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "CreateDevopsOrg")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDevopsOrgRequest::~CreateDevopsOrgRequest()
{}

std::string CreateDevopsOrgRequest::getOrgName()const
{
	return orgName_;
}

void CreateDevopsOrgRequest::setOrgName(const std::string& orgName)
{
	orgName_ = orgName;
	setBodyParameter("OrgName", orgName);
}

std::string CreateDevopsOrgRequest::getSource()const
{
	return source_;
}

void CreateDevopsOrgRequest::setSource(const std::string& source)
{
	source_ = source;
	setBodyParameter("Source", source);
}

std::string CreateDevopsOrgRequest::getRealPk()const
{
	return realPk_;
}

void CreateDevopsOrgRequest::setRealPk(const std::string& realPk)
{
	realPk_ = realPk;
	setBodyParameter("RealPk", realPk);
}

int CreateDevopsOrgRequest::getDesiredMemberCount()const
{
	return desiredMemberCount_;
}

void CreateDevopsOrgRequest::setDesiredMemberCount(int desiredMemberCount)
{
	desiredMemberCount_ = desiredMemberCount;
	setBodyParameter("DesiredMemberCount", std::to_string(desiredMemberCount));
}

