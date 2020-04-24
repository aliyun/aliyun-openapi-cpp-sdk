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

#include <alibabacloud/ledgerdb/model/DeleteMemberRequest.h>

using AlibabaCloud::Ledgerdb::Model::DeleteMemberRequest;

DeleteMemberRequest::DeleteMemberRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "DeleteMember")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteMemberRequest::~DeleteMemberRequest()
{}

std::string DeleteMemberRequest::getLedgerId()const
{
	return ledgerId_;
}

void DeleteMemberRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setParameter("LedgerId", ledgerId);
}

std::string DeleteMemberRequest::getMemberId()const
{
	return memberId_;
}

void DeleteMemberRequest::setMemberId(const std::string& memberId)
{
	memberId_ = memberId;
	setParameter("MemberId", memberId);
}

