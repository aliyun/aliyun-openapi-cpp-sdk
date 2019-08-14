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

#include <alibabacloud/ram/model/ListAccessKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListAccessKeysResult::ListAccessKeysResult() :
	ServiceResult()
{}

ListAccessKeysResult::ListAccessKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccessKeysResult::~ListAccessKeysResult()
{}

void ListAccessKeysResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAccessKeys = value["AccessKeys"]["AccessKey"];
	for (auto value : allAccessKeys)
	{
		AccessKey accessKeysObject;
		if(!value["AccessKeyId"].isNull())
			accessKeysObject.accessKeyId = value["AccessKeyId"].asString();
		if(!value["Status"].isNull())
			accessKeysObject.status = value["Status"].asString();
		if(!value["CreateDate"].isNull())
			accessKeysObject.createDate = value["CreateDate"].asString();
		accessKeys_.push_back(accessKeysObject);
	}

}

std::vector<ListAccessKeysResult::AccessKey> ListAccessKeysResult::getAccessKeys()const
{
	return accessKeys_;
}

