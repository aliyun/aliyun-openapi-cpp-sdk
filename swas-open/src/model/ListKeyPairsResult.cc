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

#include <alibabacloud/swas-open/model/ListKeyPairsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListKeyPairsResult::ListKeyPairsResult() :
	ServiceResult()
{}

ListKeyPairsResult::ListKeyPairsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKeyPairsResult::~ListKeyPairsResult()
{}

void ListKeyPairsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKeyPairsNode = value["KeyPairs"]["KeyPair"];
	for (auto valueKeyPairsKeyPair : allKeyPairsNode)
	{
		KeyPair keyPairsObject;
		if(!valueKeyPairsKeyPair["CreationTime"].isNull())
			keyPairsObject.creationTime = valueKeyPairsKeyPair["CreationTime"].asString();
		if(!valueKeyPairsKeyPair["KeyPairName"].isNull())
			keyPairsObject.keyPairName = valueKeyPairsKeyPair["KeyPairName"].asString();
		if(!valueKeyPairsKeyPair["PublicKey"].isNull())
			keyPairsObject.publicKey = valueKeyPairsKeyPair["PublicKey"].asString();
		auto allInstanceIds = value["InstanceIds"]["InstanceId"];
		for (auto value : allInstanceIds)
			keyPairsObject.instanceIds.push_back(value.asString());
		keyPairs_.push_back(keyPairsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListKeyPairsResult::getTotalCount()const
{
	return totalCount_;
}

int ListKeyPairsResult::getPageSize()const
{
	return pageSize_;
}

int ListKeyPairsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListKeyPairsResult::KeyPair> ListKeyPairsResult::getKeyPairs()const
{
	return keyPairs_;
}

