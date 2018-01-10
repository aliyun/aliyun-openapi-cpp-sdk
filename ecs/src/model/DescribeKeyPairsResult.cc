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
	auto allKeyPairs = value["KeyPairs"]["KeyPair"];
	for (auto value : allKeyPairs)
	{
		KeyPair keyPairObject;
		keyPairObject.keyPairName = value["KeyPairName"].asString();
		keyPairObject.keyPairFingerPrint = value["KeyPairFingerPrint"].asString();
		keyPairs_.push_back(keyPairObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeKeyPairsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeKeyPairsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeKeyPairsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeKeyPairsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeKeyPairsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeKeyPairsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

