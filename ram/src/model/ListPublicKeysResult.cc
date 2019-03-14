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

#include <alibabacloud/ram/model/ListPublicKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListPublicKeysResult::ListPublicKeysResult() :
	ServiceResult()
{}

ListPublicKeysResult::ListPublicKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPublicKeysResult::~ListPublicKeysResult()
{}

void ListPublicKeysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPublicKeys = value["PublicKeys"]["PublicKey"];
	for (auto value : allPublicKeys)
	{
		PublicKey publicKeysObject;
		if(!value["PublicKeyId"].isNull())
			publicKeysObject.publicKeyId = value["PublicKeyId"].asString();
		if(!value["Status"].isNull())
			publicKeysObject.status = value["Status"].asString();
		if(!value["CreateDate"].isNull())
			publicKeysObject.createDate = value["CreateDate"].asString();
		publicKeys_.push_back(publicKeysObject);
	}

}

std::vector<ListPublicKeysResult::PublicKey> ListPublicKeysResult::getPublicKeys()const
{
	return publicKeys_;
}

