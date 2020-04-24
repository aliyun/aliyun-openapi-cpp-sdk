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

#include <alibabacloud/ledgerdb/model/ModifyMemberACLsRequest.h>

using AlibabaCloud::Ledgerdb::Model::ModifyMemberACLsRequest;

ModifyMemberACLsRequest::ModifyMemberACLsRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "ModifyMemberACLs")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyMemberACLsRequest::~ModifyMemberACLsRequest()
{}

std::string ModifyMemberACLsRequest::getRole()const
{
	return role_;
}

void ModifyMemberACLsRequest::setRole(const std::string& role)
{
	role_ = role;
	setBodyParameter("Role", role);
}

std::string ModifyMemberACLsRequest::getLedgerId()const
{
	return ledgerId_;
}

void ModifyMemberACLsRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setBodyParameter("LedgerId", ledgerId);
}

std::string ModifyMemberACLsRequest::getMemberId()const
{
	return memberId_;
}

void ModifyMemberACLsRequest::setMemberId(const std::string& memberId)
{
	memberId_ = memberId;
	setBodyParameter("MemberId", memberId);
}

