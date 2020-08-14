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

#include <alibabacloud/teambition-aliyun/model/DeleteMembersForOrgRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::DeleteMembersForOrgRequest;

DeleteMembersForOrgRequest::DeleteMembersForOrgRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "DeleteMembersForOrg")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteMembersForOrgRequest::~DeleteMembersForOrgRequest()
{}

std::string DeleteMembersForOrgRequest::getRealPk()const
{
	return realPk_;
}

void DeleteMembersForOrgRequest::setRealPk(const std::string& realPk)
{
	realPk_ = realPk;
	setBodyParameter("RealPk", realPk);
}

std::string DeleteMembersForOrgRequest::getUserId()const
{
	return userId_;
}

void DeleteMembersForOrgRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

std::string DeleteMembersForOrgRequest::getOrgId()const
{
	return orgId_;
}

void DeleteMembersForOrgRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

