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

#include <alibabacloud/dyplsapi/model/BindAxgResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

BindAxgResult::BindAxgResult() :
	ServiceResult()
{}

BindAxgResult::BindAxgResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BindAxgResult::~BindAxgResult()
{}

void BindAxgResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto secretBindDTONode = value["SecretBindDTO"];
	if(!secretBindDTONode["Extension"].isNull())
		secretBindDTO_.extension = secretBindDTONode["Extension"].asString();
	if(!secretBindDTONode["SubsId"].isNull())
		secretBindDTO_.subsId = secretBindDTONode["SubsId"].asString();
	if(!secretBindDTONode["SecretNo"].isNull())
		secretBindDTO_.secretNo = secretBindDTONode["SecretNo"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

BindAxgResult::SecretBindDTO BindAxgResult::getSecretBindDTO()const
{
	return secretBindDTO_;
}

std::string BindAxgResult::getMessage()const
{
	return message_;
}

std::string BindAxgResult::getCode()const
{
	return code_;
}

