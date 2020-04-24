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

#include <alibabacloud/ledgerdb/model/AcceptMemberRequest.h>

using AlibabaCloud::Ledgerdb::Model::AcceptMemberRequest;

AcceptMemberRequest::AcceptMemberRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "AcceptMember")
{
	setMethod(HttpRequest::Method::Post);
}

AcceptMemberRequest::~AcceptMemberRequest()
{}

std::string AcceptMemberRequest::getPublicKey()const
{
	return publicKey_;
}

void AcceptMemberRequest::setPublicKey(const std::string& publicKey)
{
	publicKey_ = publicKey;
	setBodyParameter("PublicKey", publicKey);
}

std::string AcceptMemberRequest::getKeyType()const
{
	return keyType_;
}

void AcceptMemberRequest::setKeyType(const std::string& keyType)
{
	keyType_ = keyType;
	setBodyParameter("KeyType", keyType);
}

std::string AcceptMemberRequest::getLedgerId()const
{
	return ledgerId_;
}

void AcceptMemberRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setBodyParameter("LedgerId", ledgerId);
}

