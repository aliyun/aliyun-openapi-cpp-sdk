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

#include <alibabacloud/ecs/model/DescribePrefixListAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePrefixListAttributesResult::DescribePrefixListAttributesResult() :
	ServiceResult()
{}

DescribePrefixListAttributesResult::DescribePrefixListAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePrefixListAttributesResult::~DescribePrefixListAttributesResult()
{}

void DescribePrefixListAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntriesNode = value["Entries"]["Entry"];
	for (auto valueEntriesEntry : allEntriesNode)
	{
		Entry entriesObject;
		if(!valueEntriesEntry["Description"].isNull())
			entriesObject.description = valueEntriesEntry["Description"].asString();
		if(!valueEntriesEntry["Cidr"].isNull())
			entriesObject.cidr = valueEntriesEntry["Cidr"].asString();
		entries_.push_back(entriesObject);
	}
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["MaxEntries"].isNull())
		maxEntries_ = std::stoi(value["MaxEntries"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["AddressFamily"].isNull())
		addressFamily_ = value["AddressFamily"].asString();
	if(!value["PrefixListName"].isNull())
		prefixListName_ = value["PrefixListName"].asString();
	if(!value["PrefixListId"].isNull())
		prefixListId_ = value["PrefixListId"].asString();

}

int DescribePrefixListAttributesResult::getMaxEntries()const
{
	return maxEntries_;
}

std::string DescribePrefixListAttributesResult::getDescription()const
{
	return description_;
}

std::string DescribePrefixListAttributesResult::getPrefixListId()const
{
	return prefixListId_;
}

std::string DescribePrefixListAttributesResult::getPrefixListName()const
{
	return prefixListName_;
}

std::string DescribePrefixListAttributesResult::getCreationTime()const
{
	return creationTime_;
}

std::vector<DescribePrefixListAttributesResult::Entry> DescribePrefixListAttributesResult::getEntries()const
{
	return entries_;
}

std::string DescribePrefixListAttributesResult::getAddressFamily()const
{
	return addressFamily_;
}

