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

#include <alibabacloud/cas/model/EncryptResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

EncryptResult::EncryptResult() :
	ServiceResult()
{}

EncryptResult::EncryptResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EncryptResult::~EncryptResult()
{}

void EncryptResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CertIdentifier"].isNull())
		certIdentifier_ = value["CertIdentifier"].asString();
	if(!value["CiphertextBlob"].isNull())
		ciphertextBlob_ = value["CiphertextBlob"].asString();

}

std::string EncryptResult::getCiphertextBlob()const
{
	return ciphertextBlob_;
}

std::string EncryptResult::getCertIdentifier()const
{
	return certIdentifier_;
}

