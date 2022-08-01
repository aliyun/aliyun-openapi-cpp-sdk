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

#include <alibabacloud/kms/model/RotateSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

RotateSecretResult::RotateSecretResult() :
	ServiceResult()
{}

RotateSecretResult::RotateSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RotateSecretResult::~RotateSecretResult()
{}

void RotateSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VersionId"].isNull())
		versionId_ = value["VersionId"].asString();
	if(!value["SecretName"].isNull())
		secretName_ = value["SecretName"].asString();
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();

}

std::string RotateSecretResult::getVersionId()const
{
	return versionId_;
}

std::string RotateSecretResult::getSecretName()const
{
	return secretName_;
}

std::string RotateSecretResult::getArn()const
{
	return arn_;
}

