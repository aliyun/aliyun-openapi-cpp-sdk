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

#include <alibabacloud/rds/model/DescribeVpcZoneNosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeVpcZoneNosResult::DescribeVpcZoneNosResult() :
	ServiceResult()
{}

DescribeVpcZoneNosResult::DescribeVpcZoneNosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpcZoneNosResult::~DescribeVpcZoneNosResult()
{}

void DescribeVpcZoneNosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["VpcZoneId"];
	for (auto value : allItems)
	{
		VpcZoneId itemsObject;
		if(!value["ZoneId"].isNull())
			itemsObject.zoneId = value["ZoneId"].asString();
		if(!value["Region"].isNull())
			itemsObject.region = value["Region"].asString();
		if(!value["SubDomain"].isNull())
			itemsObject.subDomain = value["SubDomain"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeVpcZoneNosResult::VpcZoneId> DescribeVpcZoneNosResult::getItems()const
{
	return items_;
}

