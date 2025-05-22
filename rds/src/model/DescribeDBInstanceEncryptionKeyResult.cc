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

#include <alibabacloud/rds/model/DescribeDBInstanceEncryptionKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceEncryptionKeyResult::DescribeDBInstanceEncryptionKeyResult() :
	ServiceResult()
{}

DescribeDBInstanceEncryptionKeyResult::DescribeDBInstanceEncryptionKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceEncryptionKeyResult::~DescribeDBInstanceEncryptionKeyResult()
{}

void DescribeDBInstanceEncryptionKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEncryptionKeyListNode = value["EncryptionKeyList"]["EncryptionKeyInfo"];
	for (auto valueEncryptionKeyListEncryptionKeyInfo : allEncryptionKeyListNode)
	{
		EncryptionKeyInfo encryptionKeyListObject;
		if(!valueEncryptionKeyListEncryptionKeyInfo["AliasName"].isNull())
			encryptionKeyListObject.aliasName = valueEncryptionKeyListEncryptionKeyInfo["AliasName"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["Creator"].isNull())
			encryptionKeyListObject.creator = valueEncryptionKeyListEncryptionKeyInfo["Creator"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["DeleteDate"].isNull())
			encryptionKeyListObject.deleteDate = valueEncryptionKeyListEncryptionKeyInfo["DeleteDate"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["Description"].isNull())
			encryptionKeyListObject.description = valueEncryptionKeyListEncryptionKeyInfo["Description"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["EncryptionKey"].isNull())
			encryptionKeyListObject.encryptionKey = valueEncryptionKeyListEncryptionKeyInfo["EncryptionKey"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["EncryptionKeyStatus"].isNull())
			encryptionKeyListObject.encryptionKeyStatus = valueEncryptionKeyListEncryptionKeyInfo["EncryptionKeyStatus"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["KeyType"].isNull())
			encryptionKeyListObject.keyType = valueEncryptionKeyListEncryptionKeyInfo["KeyType"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["KeyUsage"].isNull())
			encryptionKeyListObject.keyUsage = valueEncryptionKeyListEncryptionKeyInfo["KeyUsage"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["MaterialExpireTime"].isNull())
			encryptionKeyListObject.materialExpireTime = valueEncryptionKeyListEncryptionKeyInfo["MaterialExpireTime"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["Origin"].isNull())
			encryptionKeyListObject.origin = valueEncryptionKeyListEncryptionKeyInfo["Origin"].asString();
		if(!valueEncryptionKeyListEncryptionKeyInfo["UsedBy"].isNull())
			encryptionKeyListObject.usedBy = valueEncryptionKeyListEncryptionKeyInfo["UsedBy"].asString();
		encryptionKeyList_.push_back(encryptionKeyListObject);
	}
	if(!value["Creator"].isNull())
		creator_ = value["Creator"].asString();
	if(!value["DeleteDate"].isNull())
		deleteDate_ = value["DeleteDate"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EncryptionKey"].isNull())
		encryptionKey_ = value["EncryptionKey"].asString();
	if(!value["EncryptionKeyStatus"].isNull())
		encryptionKeyStatus_ = value["EncryptionKeyStatus"].asString();
	if(!value["KeyUsage"].isNull())
		keyUsage_ = value["KeyUsage"].asString();
	if(!value["MaterialExpireTime"].isNull())
		materialExpireTime_ = value["MaterialExpireTime"].asString();
	if(!value["Origin"].isNull())
		origin_ = value["Origin"].asString();

}

std::string DescribeDBInstanceEncryptionKeyResult::getOrigin()const
{
	return origin_;
}

std::string DescribeDBInstanceEncryptionKeyResult::getDescription()const
{
	return description_;
}

std::string DescribeDBInstanceEncryptionKeyResult::getEncryptionKeyStatus()const
{
	return encryptionKeyStatus_;
}

std::string DescribeDBInstanceEncryptionKeyResult::getMaterialExpireTime()const
{
	return materialExpireTime_;
}

std::vector<DescribeDBInstanceEncryptionKeyResult::EncryptionKeyInfo> DescribeDBInstanceEncryptionKeyResult::getEncryptionKeyList()const
{
	return encryptionKeyList_;
}

std::string DescribeDBInstanceEncryptionKeyResult::getKeyUsage()const
{
	return keyUsage_;
}

std::string DescribeDBInstanceEncryptionKeyResult::getEncryptionKey()const
{
	return encryptionKey_;
}

std::string DescribeDBInstanceEncryptionKeyResult::getCreator()const
{
	return creator_;
}

std::string DescribeDBInstanceEncryptionKeyResult::getDeleteDate()const
{
	return deleteDate_;
}

