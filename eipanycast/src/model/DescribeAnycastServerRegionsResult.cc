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

#include <alibabacloud/eipanycast/model/DescribeAnycastServerRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eipanycast;
using namespace AlibabaCloud::Eipanycast::Model;

DescribeAnycastServerRegionsResult::DescribeAnycastServerRegionsResult() :
	ServiceResult()
{}

DescribeAnycastServerRegionsResult::DescribeAnycastServerRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAnycastServerRegionsResult::~DescribeAnycastServerRegionsResult()
{}

void DescribeAnycastServerRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnycastServerRegionListNode = value["AnycastServerRegionList"]["AnycastServerRegion"];
	for (auto valueAnycastServerRegionListAnycastServerRegion : allAnycastServerRegionListNode)
	{
		AnycastServerRegion anycastServerRegionListObject;
		if(!valueAnycastServerRegionListAnycastServerRegion["RegionName"].isNull())
			anycastServerRegionListObject.regionName = valueAnycastServerRegionListAnycastServerRegion["RegionName"].asString();
		if(!valueAnycastServerRegionListAnycastServerRegion["RegionId"].isNull())
			anycastServerRegionListObject.regionId = valueAnycastServerRegionListAnycastServerRegion["RegionId"].asString();
		anycastServerRegionList_.push_back(anycastServerRegionListObject);
	}
	if(!value["Count"].isNull())
		count_ = value["Count"].asString();

}

std::string DescribeAnycastServerRegionsResult::getCount()const
{
	return count_;
}

std::vector<DescribeAnycastServerRegionsResult::AnycastServerRegion> DescribeAnycastServerRegionsResult::getAnycastServerRegionList()const
{
	return anycastServerRegionList_;
}

