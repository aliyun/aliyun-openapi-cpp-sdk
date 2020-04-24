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

#include <alibabacloud/ledgerdb/model/GetMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

GetMemberResult::GetMemberResult() :
	ServiceResult()
{}

GetMemberResult::GetMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMemberResult::~GetMemberResult()
{}

void GetMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["LedgerId"].isNull())
		ledgerId_ = value["LedgerId"].asString();
	if(!value["MemberId"].isNull())
		memberId_ = value["MemberId"].asString();
	if(!value["AliUid"].isNull())
		aliUid_ = value["AliUid"].asString();
	if(!value["KeyType"].isNull())
		keyType_ = value["KeyType"].asString();
	if(!value["PublicKey"].isNull())
		publicKey_ = value["PublicKey"].asString();
	if(!value["Role"].isNull())
		role_ = value["Role"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = std::stol(value["UpdateTime"].asString());

}

std::string GetMemberResult::getRole()const
{
	return role_;
}

std::string GetMemberResult::getMemberId()const
{
	return memberId_;
}

std::string GetMemberResult::getKeyType()const
{
	return keyType_;
}

std::string GetMemberResult::getPublicKey()const
{
	return publicKey_;
}

std::string GetMemberResult::getState()const
{
	return state_;
}

long GetMemberResult::getCreateTime()const
{
	return createTime_;
}

long GetMemberResult::getUpdateTime()const
{
	return updateTime_;
}

std::string GetMemberResult::getLedgerId()const
{
	return ledgerId_;
}

std::string GetMemberResult::getAliUid()const
{
	return aliUid_;
}

