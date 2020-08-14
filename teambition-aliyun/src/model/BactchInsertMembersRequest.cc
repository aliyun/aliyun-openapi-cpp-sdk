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

#include <alibabacloud/teambition-aliyun/model/BactchInsertMembersRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::BactchInsertMembersRequest;

BactchInsertMembersRequest::BactchInsertMembersRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "BactchInsertMembers")
{
	setMethod(HttpRequest::Method::Post);
}

BactchInsertMembersRequest::~BactchInsertMembersRequest()
{}

std::string BactchInsertMembersRequest::getMembers()const
{
	return members_;
}

void BactchInsertMembersRequest::setMembers(const std::string& members)
{
	members_ = members;
	setBodyParameter("Members", members);
}

std::string BactchInsertMembersRequest::getRealPk()const
{
	return realPk_;
}

void BactchInsertMembersRequest::setRealPk(const std::string& realPk)
{
	realPk_ = realPk;
	setBodyParameter("RealPk", realPk);
}

std::string BactchInsertMembersRequest::getOrgId()const
{
	return orgId_;
}

void BactchInsertMembersRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

