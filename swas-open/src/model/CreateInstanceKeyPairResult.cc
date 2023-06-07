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

#include <alibabacloud/swas-open/model/CreateInstanceKeyPairResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

CreateInstanceKeyPairResult::CreateInstanceKeyPairResult() :
	ServiceResult()
{}

CreateInstanceKeyPairResult::CreateInstanceKeyPairResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateInstanceKeyPairResult::~CreateInstanceKeyPairResult()
{}

void CreateInstanceKeyPairResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["KeyPairName"].isNull())
		keyPairName_ = value["KeyPairName"].asString();
	if(!value["Fingerprint"].isNull())
		fingerprint_ = value["Fingerprint"].asString();
	if(!value["PrivateKey"].isNull())
		privateKey_ = value["PrivateKey"].asString();

}

std::string CreateInstanceKeyPairResult::getKeyPairName()const
{
	return keyPairName_;
}

std::string CreateInstanceKeyPairResult::getFingerprint()const
{
	return fingerprint_;
}

std::string CreateInstanceKeyPairResult::getPrivateKey()const
{
	return privateKey_;
}

