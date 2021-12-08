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

#include <alibabacloud/dyplsapi/model/QuerySecretNoRemainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

QuerySecretNoRemainResult::QuerySecretNoRemainResult() :
	ServiceResult()
{}

QuerySecretNoRemainResult::QuerySecretNoRemainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySecretNoRemainResult::~QuerySecretNoRemainResult()
{}

void QuerySecretNoRemainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto secretRemainDTONode = value["SecretRemainDTO"];
	if(!secretRemainDTONode["Amount"].isNull())
		secretRemainDTO_.amount = std::stol(secretRemainDTONode["Amount"].asString());
	if(!secretRemainDTONode["City"].isNull())
		secretRemainDTO_.city = secretRemainDTONode["City"].asString();
	auto allRemainDTOListNode = secretRemainDTONode["RemainDTOList"]["remainDTO"];
	for (auto secretRemainDTONodeRemainDTOListremainDTO : allRemainDTOListNode)
	{
		SecretRemainDTO::RemainDTO remainDTOObject;
		if(!secretRemainDTONodeRemainDTOListremainDTO["Amount"].isNull())
			remainDTOObject.amount = std::stol(secretRemainDTONodeRemainDTOListremainDTO["Amount"].asString());
		if(!secretRemainDTONodeRemainDTOListremainDTO["City"].isNull())
			remainDTOObject.city = secretRemainDTONodeRemainDTOListremainDTO["City"].asString();
		secretRemainDTO_.remainDTOList.push_back(remainDTOObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

QuerySecretNoRemainResult::SecretRemainDTO QuerySecretNoRemainResult::getSecretRemainDTO()const
{
	return secretRemainDTO_;
}

std::string QuerySecretNoRemainResult::getMessage()const
{
	return message_;
}

std::string QuerySecretNoRemainResult::getCode()const
{
	return code_;
}

