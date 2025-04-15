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

#include <alibabacloud/ecs/model/DescribePortRangeListEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePortRangeListEntriesResult::DescribePortRangeListEntriesResult() :
	ServiceResult()
{}

DescribePortRangeListEntriesResult::DescribePortRangeListEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortRangeListEntriesResult::~DescribePortRangeListEntriesResult()
{}

void DescribePortRangeListEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntriesNode = value["Entries"]["Entry"];
	for (auto valueEntriesEntry : allEntriesNode)
	{
		Entry entriesObject;
		if(!valueEntriesEntry["PortRange"].isNull())
			entriesObject.portRange = valueEntriesEntry["PortRange"].asString();
		if(!valueEntriesEntry["Description"].isNull())
			entriesObject.description = valueEntriesEntry["Description"].asString();
		entries_.push_back(entriesObject);
	}

}

std::vector<DescribePortRangeListEntriesResult::Entry> DescribePortRangeListEntriesResult::getEntries()const
{
	return entries_;
}

