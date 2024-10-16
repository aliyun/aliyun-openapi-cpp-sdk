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

#include <alibabacloud/gwlb/model/DescribeZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

DescribeZonesResult::DescribeZonesResult() :
	ServiceResult()
{}

DescribeZonesResult::DescribeZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZonesResult::~DescribeZonesResult()
{}

void DescribeZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZonesNode = value["Zones"]["Data"];
	for (auto valueZonesData : allZonesNode)
	{
		Data zonesObject;
		if(!valueZonesData["LocalName"].isNull())
			zonesObject.localName = valueZonesData["LocalName"].asString();
		if(!valueZonesData["ZoneId"].isNull())
			zonesObject.zoneId = valueZonesData["ZoneId"].asString();
		zones_.push_back(zonesObject);
	}

}

std::vector<DescribeZonesResult::Data> DescribeZonesResult::getZones()const
{
	return zones_;
}

