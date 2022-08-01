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

#include <alibabacloud/kms/model/CreateSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

CreateSecretResult::CreateSecretResult() :
	ServiceResult()
{}

CreateSecretResult::CreateSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSecretResult::~CreateSecretResult()
{}

void CreateSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AutomaticRotation"].isNull())
		automaticRotation_ = value["AutomaticRotation"].asString();
	if(!value["SecretName"].isNull())
		secretName_ = value["SecretName"].asString();
	if(!value["VersionId"].isNull())
		versionId_ = value["VersionId"].asString();
	if(!value["NextRotationDate"].isNull())
		nextRotationDate_ = value["NextRotationDate"].asString();
	if(!value["SecretType"].isNull())
		secretType_ = value["SecretType"].asString();
	if(!value["RotationInterval"].isNull())
		rotationInterval_ = value["RotationInterval"].asString();
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();
	if(!value["ExtendedConfig"].isNull())
		extendedConfig_ = value["ExtendedConfig"].asString();
	if(!value["DKMSInstanceId"].isNull())
		dKMSInstanceId_ = value["DKMSInstanceId"].asString();

}

std::string CreateSecretResult::getSecretName()const
{
	return secretName_;
}

std::string CreateSecretResult::getVersionId()const
{
	return versionId_;
}

std::string CreateSecretResult::getNextRotationDate()const
{
	return nextRotationDate_;
}

std::string CreateSecretResult::getSecretType()const
{
	return secretType_;
}

std::string CreateSecretResult::getRotationInterval()const
{
	return rotationInterval_;
}

std::string CreateSecretResult::getExtendedConfig()const
{
	return extendedConfig_;
}

std::string CreateSecretResult::getDKMSInstanceId()const
{
	return dKMSInstanceId_;
}

std::string CreateSecretResult::getArn()const
{
	return arn_;
}

std::string CreateSecretResult::getAutomaticRotation()const
{
	return automaticRotation_;
}

