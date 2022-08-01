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

#include <alibabacloud/kms/model/CreateKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

CreateKeyResult::CreateKeyResult() :
	ServiceResult()
{}

CreateKeyResult::CreateKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateKeyResult::~CreateKeyResult()
{}

void CreateKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto keyMetadataNode = value["KeyMetadata"];
	if(!keyMetadataNode["KeyId"].isNull())
		keyMetadata_.keyId = keyMetadataNode["KeyId"].asString();
	if(!keyMetadataNode["NextRotationDate"].isNull())
		keyMetadata_.nextRotationDate = keyMetadataNode["NextRotationDate"].asString();
	if(!keyMetadataNode["KeyState"].isNull())
		keyMetadata_.keyState = keyMetadataNode["KeyState"].asString();
	if(!keyMetadataNode["RotationInterval"].isNull())
		keyMetadata_.rotationInterval = keyMetadataNode["RotationInterval"].asString();
	if(!keyMetadataNode["Arn"].isNull())
		keyMetadata_.arn = keyMetadataNode["Arn"].asString();
	if(!keyMetadataNode["Creator"].isNull())
		keyMetadata_.creator = keyMetadataNode["Creator"].asString();
	if(!keyMetadataNode["LastRotationDate"].isNull())
		keyMetadata_.lastRotationDate = keyMetadataNode["LastRotationDate"].asString();
	if(!keyMetadataNode["DeleteDate"].isNull())
		keyMetadata_.deleteDate = keyMetadataNode["DeleteDate"].asString();
	if(!keyMetadataNode["PrimaryKeyVersion"].isNull())
		keyMetadata_.primaryKeyVersion = keyMetadataNode["PrimaryKeyVersion"].asString();
	if(!keyMetadataNode["Description"].isNull())
		keyMetadata_.description = keyMetadataNode["Description"].asString();
	if(!keyMetadataNode["KeySpec"].isNull())
		keyMetadata_.keySpec = keyMetadataNode["KeySpec"].asString();
	if(!keyMetadataNode["Origin"].isNull())
		keyMetadata_.origin = keyMetadataNode["Origin"].asString();
	if(!keyMetadataNode["MaterialExpireTime"].isNull())
		keyMetadata_.materialExpireTime = keyMetadataNode["MaterialExpireTime"].asString();
	if(!keyMetadataNode["AutomaticRotation"].isNull())
		keyMetadata_.automaticRotation = keyMetadataNode["AutomaticRotation"].asString();
	if(!keyMetadataNode["ProtectionLevel"].isNull())
		keyMetadata_.protectionLevel = keyMetadataNode["ProtectionLevel"].asString();
	if(!keyMetadataNode["KeyUsage"].isNull())
		keyMetadata_.keyUsage = keyMetadataNode["KeyUsage"].asString();
	if(!keyMetadataNode["CreationDate"].isNull())
		keyMetadata_.creationDate = keyMetadataNode["CreationDate"].asString();
	if(!keyMetadataNode["DKMSInstanceId"].isNull())
		keyMetadata_.dKMSInstanceId = keyMetadataNode["DKMSInstanceId"].asString();

}

CreateKeyResult::KeyMetadata CreateKeyResult::getKeyMetadata()const
{
	return keyMetadata_;
}

