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

#include <alibabacloud/eipanycast/model/DescribeAnycastPopLocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eipanycast;
using namespace AlibabaCloud::Eipanycast::Model;

DescribeAnycastPopLocationsResult::DescribeAnycastPopLocationsResult() :
	ServiceResult()
{}

DescribeAnycastPopLocationsResult::DescribeAnycastPopLocationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAnycastPopLocationsResult::~DescribeAnycastPopLocationsResult()
{}

void DescribeAnycastPopLocationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnycastPopLocationListNode = value["AnycastPopLocationList"]["AnycastPopLocation"];
	for (auto valueAnycastPopLocationListAnycastPopLocation : allAnycastPopLocationListNode)
	{
		AnycastPopLocation anycastPopLocationListObject;
		if(!valueAnycastPopLocationListAnycastPopLocation["RegionName"].isNull())
			anycastPopLocationListObject.regionName = valueAnycastPopLocationListAnycastPopLocation["RegionName"].asString();
		if(!valueAnycastPopLocationListAnycastPopLocation["RegionId"].isNull())
			anycastPopLocationListObject.regionId = valueAnycastPopLocationListAnycastPopLocation["RegionId"].asString();
		anycastPopLocationList_.push_back(anycastPopLocationListObject);
	}
	if(!value["Count"].isNull())
		count_ = value["Count"].asString();

}

std::vector<DescribeAnycastPopLocationsResult::AnycastPopLocation> DescribeAnycastPopLocationsResult::getAnycastPopLocationList()const
{
	return anycastPopLocationList_;
}

std::string DescribeAnycastPopLocationsResult::getCount()const
{
	return count_;
}

