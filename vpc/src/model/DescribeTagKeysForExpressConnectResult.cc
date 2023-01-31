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

#include <alibabacloud/vpc/model/DescribeTagKeysForExpressConnectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeTagKeysForExpressConnectResult::DescribeTagKeysForExpressConnectResult() :
	ServiceResult()
{}

DescribeTagKeysForExpressConnectResult::DescribeTagKeysForExpressConnectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTagKeysForExpressConnectResult::~DescribeTagKeysForExpressConnectResult()
{}

void DescribeTagKeysForExpressConnectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagKeysNode = value["TagKeys"]["TagKey"];
	for (auto valueTagKeysTagKey : allTagKeysNode)
	{
		TagKey tagKeysObject;
		if(!valueTagKeysTagKey["Type"].isNull())
			tagKeysObject.type = valueTagKeysTagKey["Type"].asString();
		if(!valueTagKeysTagKey["TagKey"].isNull())
			tagKeysObject.tagKey = valueTagKeysTagKey["TagKey"].asString();
		tagKeys_.push_back(tagKeysObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeTagKeysForExpressConnectResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeTagKeysForExpressConnectResult::TagKey> DescribeTagKeysForExpressConnectResult::getTagKeys()const
{
	return tagKeys_;
}

