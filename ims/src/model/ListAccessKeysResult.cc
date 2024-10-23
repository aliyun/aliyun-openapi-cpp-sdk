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

#include <alibabacloud/ims/model/ListAccessKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessKeysNode = value["AccessKeys"]["AccessKey"];
	for (auto valueAccessKeysAccessKey : allAccessKeysNode)
	{
		AccessKey accessKeysObject;
		if(!valueAccessKeysAccessKey["Status"].isNull())
			accessKeysObject.status = valueAccessKeysAccessKey["Status"].asString();
		if(!valueAccessKeysAccessKey["UpdateDate"].isNull())
			accessKeysObject.updateDate = valueAccessKeysAccessKey["UpdateDate"].asString();
		if(!valueAccessKeysAccessKey["AccessKeyId"].isNull())
			accessKeysObject.accessKeyId = valueAccessKeysAccessKey["AccessKeyId"].asString();
		if(!valueAccessKeysAccessKey["CreateDate"].isNull())
			accessKeysObject.createDate = valueAccessKeysAccessKey["CreateDate"].asString();
		accessKeys_.push_back(accessKeysObject);
	}

}

std::vector<ListAccessKeysResult::AccessKey> ListAccessKeysResult::getAccessKeys()const
{
	return accessKeys_;
}

