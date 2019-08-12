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

#include <alibabacloud/kms/model/DescribeKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

DescribeKeyResult::DescribeKeyResult() :
	ServiceResult()
{}

DescribeKeyResult::DescribeKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKeyResult::~DescribeKeyResult()
{}

void DescribeKeyResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto keyMetadataNode = value["KeyMetadata"];
	if(!keyMetadataNode["CreationDate"].isNull())
		keyMetadata_.creationDate = keyMetadataNode["CreationDate"].asString();
	if(!keyMetadataNode["Description"].isNull())
		keyMetadata_.description = keyMetadataNode["Description"].asString();
	if(!keyMetadataNode["KeyId"].isNull())
		keyMetadata_.keyId = keyMetadataNode["KeyId"].asString();
	if(!keyMetadataNode["KeyState"].isNull())
		keyMetadata_.keyState = keyMetadataNode["KeyState"].asString();
	if(!keyMetadataNode["KeyUsage"].isNull())
		keyMetadata_.keyUsage = keyMetadataNode["KeyUsage"].asString();
	if(!keyMetadataNode["DeleteDate"].isNull())
		keyMetadata_.deleteDate = keyMetadataNode["DeleteDate"].asString();
	if(!keyMetadataNode["Creator"].isNull())
		keyMetadata_.creator = keyMetadataNode["Creator"].asString();
	if(!keyMetadataNode["Arn"].isNull())
		keyMetadata_.arn = keyMetadataNode["Arn"].asString();
	if(!keyMetadataNode["Origin"].isNull())
		keyMetadata_.origin = keyMetadataNode["Origin"].asString();
	if(!keyMetadataNode["MaterialExpireTime"].isNull())
		keyMetadata_.materialExpireTime = keyMetadataNode["MaterialExpireTime"].asString();
	if(!keyMetadataNode["ProtectionLevel"].isNull())
		keyMetadata_.protectionLevel = keyMetadataNode["ProtectionLevel"].asString();

}

DescribeKeyResult::KeyMetadata DescribeKeyResult::getKeyMetadata()const
{
	return keyMetadata_;
}

