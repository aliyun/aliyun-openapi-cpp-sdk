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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKeysNode = value["Keys"]["Key"];
	for (auto valueKeysKey : allKeysNode)
	{
		Key keysObject;
		if(!valueKeysKey["KeyId"].isNull())
			keysObject.keyId = valueKeysKey["KeyId"].asString();
		if(!valueKeysKey["KeyArn"].isNull())
			keysObject.keyArn = valueKeysKey["KeyArn"].asString();
		keys_.push_back(keysObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

