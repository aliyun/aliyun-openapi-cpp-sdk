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

#include <alibabacloud/kms/model/ListKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListKeysResult::ListKeysResult() :
	ServiceResult()
{}

ListKeysResult::ListKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKeysResult::~ListKeysResult()
{}

void ListKeysResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allKeys = value["Keys"]["Key"];
	for (auto value : allKeys)
	{
		Key keysObject;
		if(!value["KeyId"].isNull())
			keysObject.keyId = value["KeyId"].asString();
		if(!value["KeyArn"].isNull())
			keysObject.keyArn = value["KeyArn"].asString();
		keys_.push_back(keysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListKeysResult::getTotalCount()const
{
	return totalCount_;
}

int ListKeysResult::getPageSize()const
{
	return pageSize_;
}

int ListKeysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListKeysResult::Key> ListKeysResult::getKeys()const
{
	return keys_;
}

