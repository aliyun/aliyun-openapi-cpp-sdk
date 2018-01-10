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
		IpRange ipRangeObject;
		ipRangeObject.ipAddress = value["IpAddress"].asString();
		ipRangeObject.nicType = value["NicType"].asString();
		ipRanges_.push_back(ipRangeObject);
	}
	regionId_ = value["RegionId"].asString();
	clusterId_ = value["ClusterId"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeIpRangesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeIpRangesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeIpRangesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeIpRangesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

std::string DescribeIpRangesResult::getClusterId()const
{
	return clusterId_;
}

void DescribeIpRangesResult::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
}

int DescribeIpRangesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIpRangesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeIpRangesResult::getRegionId()const
{
	return regionId_;
}

void DescribeIpRangesResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

