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

#include <alibabacloud/ecs/model/DescribeKeyPairsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeKeyPairsResult::DescribeKeyPairsResult() :
	ServiceResult()
{}

DescribeKeyPairsResult::DescribeKeyPairsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKeyPairsResult::~DescribeKeyPairsResult()
{}

void DescribeKeyPairsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKeyPairsNode = value["KeyPairs"]["KeyPair"];
	for (auto valueKeyPairsKeyPair : allKeyPairsNode)
	{
		KeyPair keyPairsObject;
		if(!valueKeyPairsKeyPair["KeyPairName"].isNull())
			keyPairsObject.keyPairName = valueKeyPairsKeyPair["KeyPairName"].asString();
		if(!valueKeyPairsKeyPair["KeyPairFingerPrint"].isNull())
			keyPairsObject.keyPairFingerPrint = valueKeyPairsKeyPair["KeyPairFingerPrint"].asString();
		if(!valueKeyPairsKeyPair["CreationTime"].isNull())
			keyPairsObject.creationTime = valueKeyPairsKeyPair["CreationTime"].asString();
		if(!valueKeyPairsKeyPair["ResourceGroupId"].isNull())
			keyPairsObject.resourceGroupId = valueKeyPairsKeyPair["ResourceGroupId"].asString();
		auto allTagsNode = allKeyPairsNode["Tags"]["Tag"];
		for (auto allKeyPairsNodeTagsTag : allTagsNode)
		{
			KeyPair::Tag tagsObject;
			if(!allKeyPairsNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allKeyPairsNodeTagsTag["TagKey"].asString();
			if(!allKeyPairsNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allKeyPairsNodeTagsTag["TagValue"].asString();
			keyPairsObject.tags.push_back(tagsObject);
		}
		keyPairs_.push_back(keyPairsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeKeyPairsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeKeyPairsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeKeyPairsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeKeyPairsResult::KeyPair> DescribeKeyPairsResult::getKeyPairs()const
{
	return keyPairs_;
}

