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

#include <alibabacloud/ledgerdb/model/ModifyMemberKeyRequest.h>

using AlibabaCloud::Ledgerdb::Model::ModifyMemberKeyRequest;

ModifyMemberKeyRequest::ModifyMemberKeyRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "ModifyMemberKey")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyMemberKeyRequest::~ModifyMemberKeyRequest()
{}

std::string ModifyMemberKeyRequest::getPublicKey()const
{
	return publicKey_;
}

void ModifyMemberKeyRequest::setPublicKey(const std::string& publicKey)
{
	publicKey_ = publicKey;
	setBodyParameter("PublicKey", publicKey);
}

std::string ModifyMemberKeyRequest::getKeyType()const
{
	return keyType_;
}

void ModifyMemberKeyRequest::setKeyType(const std::string& keyType)
{
	keyType_ = keyType;
	setBodyParameter("KeyType", keyType);
}

std::string ModifyMemberKeyRequest::getLedgerId()const
{
	return ledgerId_;
}

void ModifyMemberKeyRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setBodyParameter("LedgerId", ledgerId);
}

std::string ModifyMemberKeyRequest::getMemberId()const
{
	return memberId_;
}

void ModifyMemberKeyRequest::setMemberId(const std::string& memberId)
{
	memberId_ = memberId;
	setBodyParameter("MemberId", memberId);
}

