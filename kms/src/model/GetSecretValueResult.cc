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

#include <alibabacloud/kms/model/GetSecretValueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

GetSecretValueResult::GetSecretValueResult() :
	ServiceResult()
{}

GetSecretValueResult::GetSecretValueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSecretValueResult::~GetSecretValueResult()
{}

void GetSecretValueResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVersionStages = value["VersionStages"]["VersionStage"];
	for (const auto &item : allVersionStages)
		versionStages_.push_back(item.asString());
	if(!value["SecretDataType"].isNull())
		secretDataType_ = value["SecretDataType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["VersionId"].isNull())
		versionId_ = value["VersionId"].asString();
	if(!value["NextRotationDate"].isNull())
		nextRotationDate_ = value["NextRotationDate"].asString();
	if(!value["SecretData"].isNull())
		secretData_ = value["SecretData"].asString();
	if(!value["RotationInterval"].isNull())
		rotationInterval_ = value["RotationInterval"].asString();
	if(!value["ExtendedConfig"].isNull())
		extendedConfig_ = value["ExtendedConfig"].asString();
	if(!value["LastRotationDate"].isNull())
		lastRotationDate_ = value["LastRotationDate"].asString();
	if(!value["SecretName"].isNull())
		secretName_ = value["SecretName"].asString();
	if(!value["AutomaticRotation"].isNull())
		automaticRotation_ = value["AutomaticRotation"].asString();
	if(!value["SecretType"].isNull())
		secretType_ = value["SecretType"].asString();

}

std::string GetSecretValueResult::getVersionId()const
{
	return versionId_;
}

std::string GetSecretValueResult::getSecretName()const
{
	return secretName_;
}

std::string GetSecretValueResult::getNextRotationDate()const
{
	return nextRotationDate_;
}

std::string GetSecretValueResult::getRotationInterval()const
{
	return rotationInterval_;
}

std::string GetSecretValueResult::getLastRotationDate()const
{
	return lastRotationDate_;
}

std::string GetSecretValueResult::getSecretType()const
{
	return secretType_;
}

std::string GetSecretValueResult::getCreateTime()const
{
	return createTime_;
}

std::string GetSecretValueResult::getSecretDataType()const
{
	return secretDataType_;
}

std::string GetSecretValueResult::getExtendedConfig()const
{
	return extendedConfig_;
}

std::string GetSecretValueResult::getSecretData()const
{
	return secretData_;
}

std::vector<std::string> GetSecretValueResult::getVersionStages()const
{
	return versionStages_;
}

std::string GetSecretValueResult::getAutomaticRotation()const
{
	return automaticRotation_;
}

