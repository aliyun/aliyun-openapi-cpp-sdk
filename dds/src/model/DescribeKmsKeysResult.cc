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

#include <alibabacloud/dds/model/DescribeKmsKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeKmsKeysResult::DescribeKmsKeysResult() :
	ServiceResult()
{}

DescribeKmsKeysResult::DescribeKmsKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKmsKeysResult::~DescribeKmsKeysResult()
{}

void DescribeKmsKeysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKmsKeysNode = value["KmsKeys"]["KmsKey"];
	for (auto valueKmsKeysKmsKey : allKmsKeysNode)
	{
		KmsKey kmsKeysObject;
		if(!valueKmsKeysKmsKey["KeyAlias"].isNull())
			kmsKeysObject.keyAlias = valueKmsKeysKmsKey["KeyAlias"].asString();
		if(!valueKmsKeysKmsKey["KeyId"].isNull())
			kmsKeysObject.keyId = valueKmsKeysKmsKey["KeyId"].asString();
		kmsKeys_.push_back(kmsKeysObject);
	}

}

std::vector<DescribeKmsKeysResult::KmsKey> DescribeKmsKeysResult::getKmsKeys()const
{
	return kmsKeys_;
}

