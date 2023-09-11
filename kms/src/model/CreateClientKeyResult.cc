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

#include <alibabacloud/kms/model/CreateClientKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

CreateClientKeyResult::CreateClientKeyResult() :
	ServiceResult()
{}

CreateClientKeyResult::CreateClientKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateClientKeyResult::~CreateClientKeyResult()
{}

void CreateClientKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ClientKeyId"].isNull())
		clientKeyId_ = value["ClientKeyId"].asString();
	if(!value["KeyAlgorithm"].isNull())
		keyAlgorithm_ = value["KeyAlgorithm"].asString();
	if(!value["PrivateKeyData"].isNull())
		privateKeyData_ = value["PrivateKeyData"].asString();
	if(!value["NotBefore"].isNull())
		notBefore_ = value["NotBefore"].asString();
	if(!value["NotAfter"].isNull())
		notAfter_ = value["NotAfter"].asString();

}

std::string CreateClientKeyResult::getClientKeyId()const
{
	return clientKeyId_;
}

std::string CreateClientKeyResult::getPrivateKeyData()const
{
	return privateKeyData_;
}

std::string CreateClientKeyResult::getNotBefore()const
{
	return notBefore_;
}

std::string CreateClientKeyResult::getNotAfter()const
{
	return notAfter_;
}

std::string CreateClientKeyResult::getKeyAlgorithm()const
{
	return keyAlgorithm_;
}

