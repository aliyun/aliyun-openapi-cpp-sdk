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

#include <alibabacloud/cc5g/model/ListAPNsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListAPNsResult::ListAPNsResult() :
	ServiceResult()
{}

ListAPNsResult::ListAPNsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAPNsResult::~ListAPNsResult()
{}

void ListAPNsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAPNsNode = value["APNs"]["Region"];
	for (auto valueAPNsRegion : allAPNsNode)
	{
		Region aPNsObject;
		if(!valueAPNsRegion["ISP"].isNull())
			aPNsObject.iSP = valueAPNsRegion["ISP"].asString();
		if(!valueAPNsRegion["APN"].isNull())
			aPNsObject.aPN = valueAPNsRegion["APN"].asString();
		if(!valueAPNsRegion["Name"].isNull())
			aPNsObject.name = valueAPNsRegion["Name"].asString();
		if(!valueAPNsRegion["Description"].isNull())
			aPNsObject.description = valueAPNsRegion["Description"].asString();
		auto allZones = value["Zones"]["Zone"];
		for (auto value : allZones)
			aPNsObject.zones.push_back(value.asString());
		aPNs_.push_back(aPNsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListAPNsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAPNsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListAPNsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListAPNsResult::Region> ListAPNsResult::getAPNs()const
{
	return aPNs_;
}

