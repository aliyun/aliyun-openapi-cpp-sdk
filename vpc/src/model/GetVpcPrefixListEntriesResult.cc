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

#include <alibabacloud/vpc/model/GetVpcPrefixListEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetVpcPrefixListEntriesResult::GetVpcPrefixListEntriesResult() :
	ServiceResult()
{}

GetVpcPrefixListEntriesResult::GetVpcPrefixListEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpcPrefixListEntriesResult::~GetVpcPrefixListEntriesResult()
{}

void GetVpcPrefixListEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrefixListEntryNode = value["PrefixListEntry"]["PrefixListCidrs"];
	for (auto valuePrefixListEntryPrefixListCidrs : allPrefixListEntryNode)
	{
		PrefixListCidrs prefixListEntryObject;
		if(!valuePrefixListEntryPrefixListCidrs["PrefixListId"].isNull())
			prefixListEntryObject.prefixListId = valuePrefixListEntryPrefixListCidrs["PrefixListId"].asString();
		if(!valuePrefixListEntryPrefixListCidrs["Cidr"].isNull())
			prefixListEntryObject.cidr = valuePrefixListEntryPrefixListCidrs["Cidr"].asString();
		if(!valuePrefixListEntryPrefixListCidrs["Description"].isNull())
			prefixListEntryObject.description = valuePrefixListEntryPrefixListCidrs["Description"].asString();
		if(!valuePrefixListEntryPrefixListCidrs["RegionId"].isNull())
			prefixListEntryObject.regionId = valuePrefixListEntryPrefixListCidrs["RegionId"].asString();
		prefixListEntry_.push_back(prefixListEntryObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());

}

long GetVpcPrefixListEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetVpcPrefixListEntriesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<GetVpcPrefixListEntriesResult::PrefixListCidrs> GetVpcPrefixListEntriesResult::getPrefixListEntry()const
{
	return prefixListEntry_;
}

long GetVpcPrefixListEntriesResult::getCount()const
{
	return count_;
}

