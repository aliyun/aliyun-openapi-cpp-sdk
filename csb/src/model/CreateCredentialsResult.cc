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

#include <alibabacloud/csb/model/CreateCredentialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

CreateCredentialsResult::CreateCredentialsResult() :
	ServiceResult()
{}

CreateCredentialsResult::CreateCredentialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCredentialsResult::~CreateCredentialsResult()
{}

void CreateCredentialsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto credentialsNode = dataNode["Credentials"];
	if(!credentialsNode["Id"].isNull())
		data_.credentials.id = std::stol(credentialsNode["Id"].asString());
	auto currentCredentialNode = credentialsNode["CurrentCredential"];
	if(!currentCredentialNode["SecretKey"].isNull())
		data_.credentials.currentCredential.secretKey = currentCredentialNode["SecretKey"].asString();
	if(!currentCredentialNode["AccessKey"].isNull())
		data_.credentials.currentCredential.accessKey = currentCredentialNode["AccessKey"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateCredentialsResult::getMessage()const
{
	return message_;
}

CreateCredentialsResult::Data CreateCredentialsResult::getData()const
{
	return data_;
}

int CreateCredentialsResult::getCode()const
{
	return code_;
}

