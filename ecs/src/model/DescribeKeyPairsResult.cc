<<<<<<< HEAD
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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
=======
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
>>>>>>> master
	auto allKeyPairs = value["KeyPairs"]["KeyPair"];
	for (auto value : allKeyPairs)
	{
		KeyPair keyPairsObject;
		if(!value["KeyPairName"].isNull())
			keyPairsObject.keyPairName = value["KeyPairName"].asString();
		if(!value["KeyPairFingerPrint"].isNull())
			keyPairsObject.keyPairFingerPrint = value["KeyPairFingerPrint"].asString();
		if(!value["ResourceGroupId"].isNull())
			keyPairsObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			KeyPair::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
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

