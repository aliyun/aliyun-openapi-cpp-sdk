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

#include <alibabacloud/rds/model/DescribeCollationTimeZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCollationTimeZonesResult::DescribeCollationTimeZonesResult() :
	ServiceResult()
{}

DescribeCollationTimeZonesResult::DescribeCollationTimeZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCollationTimeZonesResult::~DescribeCollationTimeZonesResult()
{}

void DescribeCollationTimeZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCollationTimeZonesNode = value["CollationTimeZones"]["CollationTimeZone"];
	for (auto valueCollationTimeZonesCollationTimeZone : allCollationTimeZonesNode)
	{
		CollationTimeZone collationTimeZonesObject;
		if(!valueCollationTimeZonesCollationTimeZone["Description"].isNull())
			collationTimeZonesObject.description = valueCollationTimeZonesCollationTimeZone["Description"].asString();
		if(!valueCollationTimeZonesCollationTimeZone["StandardTimeOffset"].isNull())
			collationTimeZonesObject.standardTimeOffset = valueCollationTimeZonesCollationTimeZone["StandardTimeOffset"].asString();
		if(!valueCollationTimeZonesCollationTimeZone["TimeZone"].isNull())
			collationTimeZonesObject.timeZone = valueCollationTimeZonesCollationTimeZone["TimeZone"].asString();
		collationTimeZones_.push_back(collationTimeZonesObject);
	}

}

std::vector<DescribeCollationTimeZonesResult::CollationTimeZone> DescribeCollationTimeZonesResult::getCollationTimeZones()const
{
	return collationTimeZones_;
}

