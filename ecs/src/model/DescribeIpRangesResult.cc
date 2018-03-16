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

#include <alibabacloud/ecs/model/DescribeIpRangesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeIpRangesResult::DescribeIpRangesResult() :
	ServiceResult()
{}

DescribeIpRangesResult::DescribeIpRangesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpRangesResult::~DescribeIpRangesResult()
{}

void DescribeIpRangesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allIpRanges = value["IpRanges"]["IpRange"];
	for (auto value : allIpRanges)
	{
		IpRange ipRangesObject;
		if(!value["IpAddress"].isNull())
			ipRangesObject.ipAddress = value["IpAddress"].asString();
		if(!value["NicType"].isNull())
			ipRangesObject.nicType = value["NicType"].asString();
		ipRanges_.push_back(ipRangesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeIpRangesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIpRangesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeIpRangesResult::getClusterId()const
{
	return clusterId_;
}

int DescribeIpRangesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeIpRangesResult::IpRange> DescribeIpRangesResult::getIpRanges()const
{
	return ipRanges_;
}

std::string DescribeIpRangesResult::getRegionId()const
{
	return regionId_;
}

