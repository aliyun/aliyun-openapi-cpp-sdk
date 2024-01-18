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

#include <alibabacloud/r-kvstore/model/DescribeEncryptionKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeEncryptionKeyResult::DescribeEncryptionKeyResult() :
	ServiceResult()
{}

DescribeEncryptionKeyResult::DescribeEncryptionKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEncryptionKeyResult::~DescribeEncryptionKeyResult()
{}

void DescribeEncryptionKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DeleteDate"].isNull())
		deleteDate_ = value["DeleteDate"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Origin"].isNull())
		origin_ = value["Origin"].asString();
	if(!value["MaterialExpireTime"].isNull())
		materialExpireTime_ = value["MaterialExpireTime"].asString();
	if(!value["EncryptionKeyStatus"].isNull())
		encryptionKeyStatus_ = value["EncryptionKeyStatus"].asString();
	if(!value["KeyUsage"].isNull())
		keyUsage_ = value["KeyUsage"].asString();
	if(!value["EncryptionKey"].isNull())
		encryptionKey_ = value["EncryptionKey"].asString();
	if(!value["Creator"].isNull())
		creator_ = value["Creator"].asString();
	if(!value["EncryptionName"].isNull())
		encryptionName_ = value["EncryptionName"].asString();
	if(!value["RoleArn"].isNull())
		roleArn_ = value["RoleArn"].asString();

}

std::string DescribeEncryptionKeyResult::getOrigin()const
{
	return origin_;
}

std::string DescribeEncryptionKeyResult::getDescription()const
{
	return description_;
}

std::string DescribeEncryptionKeyResult::getEncryptionKeyStatus()const
{
	return encryptionKeyStatus_;
}

std::string DescribeEncryptionKeyResult::getMaterialExpireTime()const
{
	return materialExpireTime_;
}

std::string DescribeEncryptionKeyResult::getEncryptionName()const
{
	return encryptionName_;
}

std::string DescribeEncryptionKeyResult::getKeyUsage()const
{
	return keyUsage_;
}

std::string DescribeEncryptionKeyResult::getEncryptionKey()const
{
	return encryptionKey_;
}

std::string DescribeEncryptionKeyResult::getCreator()const
{
	return creator_;
}

std::string DescribeEncryptionKeyResult::getDeleteDate()const
{
	return deleteDate_;
}

std::string DescribeEncryptionKeyResult::getRoleArn()const
{
	return roleArn_;
}

