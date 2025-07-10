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

#include <alibabacloud/vpc/model/DescribeEipSegmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeEipSegmentResult::DescribeEipSegmentResult() :
	ServiceResult()
{}

DescribeEipSegmentResult::DescribeEipSegmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEipSegmentResult::~DescribeEipSegmentResult()
{}

void DescribeEipSegmentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEipSegmentsNode = value["EipSegments"]["EipSegment"];
	for (auto valueEipSegmentsEipSegment : allEipSegmentsNode)
	{
		EipSegment eipSegmentsObject;
		if(!valueEipSegmentsEipSegment["CreationTime"].isNull())
			eipSegmentsObject.creationTime = valueEipSegmentsEipSegment["CreationTime"].asString();
		if(!valueEipSegmentsEipSegment["Status"].isNull())
			eipSegmentsObject.status = valueEipSegmentsEipSegment["Status"].asString();
		if(!valueEipSegmentsEipSegment["Descritpion"].isNull())
			eipSegmentsObject.descritpion = valueEipSegmentsEipSegment["Descritpion"].asString();
		if(!valueEipSegmentsEipSegment["InstanceId"].isNull())
			eipSegmentsObject.instanceId = valueEipSegmentsEipSegment["InstanceId"].asString();
		if(!valueEipSegmentsEipSegment["IpCount"].isNull())
			eipSegmentsObject.ipCount = valueEipSegmentsEipSegment["IpCount"].asString();
		if(!valueEipSegmentsEipSegment["Name"].isNull())
			eipSegmentsObject.name = valueEipSegmentsEipSegment["Name"].asString();
		if(!valueEipSegmentsEipSegment["Segment"].isNull())
			eipSegmentsObject.segment = valueEipSegmentsEipSegment["Segment"].asString();
		if(!valueEipSegmentsEipSegment["RegionId"].isNull())
			eipSegmentsObject.regionId = valueEipSegmentsEipSegment["RegionId"].asString();
		if(!valueEipSegmentsEipSegment["Zone"].isNull())
			eipSegmentsObject.zone = valueEipSegmentsEipSegment["Zone"].asString();
		eipSegments_.push_back(eipSegmentsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeEipSegmentResult::EipSegment> DescribeEipSegmentResult::getEipSegments()const
{
	return eipSegments_;
}

int DescribeEipSegmentResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEipSegmentResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEipSegmentResult::getPageNumber()const
{
	return pageNumber_;
}

