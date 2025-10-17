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

#include <alibabacloud/polardb/model/DescribeEncryptionDBSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeEncryptionDBSecretResult::DescribeEncryptionDBSecretResult() :
	ServiceResult()
{}

DescribeEncryptionDBSecretResult::DescribeEncryptionDBSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEncryptionDBSecretResult::~DescribeEncryptionDBSecretResult()
{}

void DescribeEncryptionDBSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EncryptionKeyStatus"].isNull())
		encryptionKeyStatus_ = value["EncryptionKeyStatus"].asString();
	if(!value["EncryptionKey"].isNull())
		encryptionKey_ = value["EncryptionKey"].asString();
	if(!value["EncryptionDBStatus"].isNull())
		encryptionDBStatus_ = value["EncryptionDBStatus"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["EncryptionDBRegion"].isNull())
		encryptionDBRegion_ = value["EncryptionDBRegion"].asString();

}

std::string DescribeEncryptionDBSecretResult::getEncryptionKeyStatus()const
{
	return encryptionKeyStatus_;
}

std::string DescribeEncryptionDBSecretResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeEncryptionDBSecretResult::getEncryptionKey()const
{
	return encryptionKey_;
}

std::string DescribeEncryptionDBSecretResult::getEncryptionDBStatus()const
{
	return encryptionDBStatus_;
}

std::string DescribeEncryptionDBSecretResult::getEncryptionDBRegion()const
{
	return encryptionDBRegion_;
}

