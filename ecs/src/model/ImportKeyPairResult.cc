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

#include <alibabacloud/ecs/model/ImportKeyPairResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ImportKeyPairResult::ImportKeyPairResult() :
	ServiceResult()
{}

ImportKeyPairResult::ImportKeyPairResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImportKeyPairResult::~ImportKeyPairResult()
{}

void ImportKeyPairResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	keyPairName_ = value["KeyPairName"].asString();
	keyPairFingerPrint_ = value["KeyPairFingerPrint"].asString();

}

std::string ImportKeyPairResult::getKeyPairFingerPrint()const
{
	return keyPairFingerPrint_;
}

void ImportKeyPairResult::setKeyPairFingerPrint(const std::string& keyPairFingerPrint)
{
	keyPairFingerPrint_ = keyPairFingerPrint;
}

std::string ImportKeyPairResult::getKeyPairName()const
{
	return keyPairName_;
}

void ImportKeyPairResult::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
}

