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

#include <alibabacloud/kms/model/GetClientKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

GetClientKeyResult::GetClientKeyResult() :
	ServiceResult()
{}

GetClientKeyResult::GetClientKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClientKeyResult::~GetClientKeyResult()
{}

void GetClientKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ClientKeyId"].isNull())
		clientKeyId_ = value["ClientKeyId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["KeyAlgorithm"].isNull())
		keyAlgorithm_ = value["KeyAlgorithm"].asString();
	if(!value["KeyOrigin"].isNull())
		keyOrigin_ = value["KeyOrigin"].asString();
	if(!value["PublicKeyData"].isNull())
		publicKeyData_ = value["PublicKeyData"].asString();
	if(!value["NotAfter"].isNull())
		notAfter_ = value["NotAfter"].asString();
	if(!value["NotBefore"].isNull())
		notBefore_ = value["NotBefore"].asString();
	if(!value["AapName"].isNull())
		aapName_ = value["AapName"].asString();

}

std::string GetClientKeyResult::getClientKeyId()const
{
	return clientKeyId_;
}

std::string GetClientKeyResult::getAapName()const
{
	return aapName_;
}

std::string GetClientKeyResult::getPublicKeyData()const
{
	return publicKeyData_;
}

std::string GetClientKeyResult::getCreateTime()const
{
	return createTime_;
}

std::string GetClientKeyResult::getNotAfter()const
{
	return notAfter_;
}

std::string GetClientKeyResult::getNotBefore()const
{
	return notBefore_;
}

std::string GetClientKeyResult::getKeyOrigin()const
{
	return keyOrigin_;
}

std::string GetClientKeyResult::getKeyAlgorithm()const
{
	return keyAlgorithm_;
}

