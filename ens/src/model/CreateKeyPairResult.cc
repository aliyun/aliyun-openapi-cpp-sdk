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

#include <alibabacloud/ens/model/CreateKeyPairResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

CreateKeyPairResult::CreateKeyPairResult() :
	ServiceResult()
{}

CreateKeyPairResult::CreateKeyPairResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateKeyPairResult::~CreateKeyPairResult()
{}

void CreateKeyPairResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["KeyPairFingerPrint"].isNull())
		keyPairFingerPrint_ = value["KeyPairFingerPrint"].asString();
	if(!value["KeyPairId"].isNull())
		keyPairId_ = value["KeyPairId"].asString();
	if(!value["KeyPairName"].isNull())
		keyPairName_ = value["KeyPairName"].asString();
	if(!value["PrivateKeyBody"].isNull())
		privateKeyBody_ = value["PrivateKeyBody"].asString();

}

std::string CreateKeyPairResult::getKeyPairFingerPrint()const
{
	return keyPairFingerPrint_;
}

std::string CreateKeyPairResult::getKeyPairName()const
{
	return keyPairName_;
}

std::string CreateKeyPairResult::getKeyPairId()const
{
	return keyPairId_;
}

std::string CreateKeyPairResult::getPrivateKeyBody()const
{
	return privateKeyBody_;
}

