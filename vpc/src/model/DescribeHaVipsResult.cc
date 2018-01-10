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

#include <alibabacloud/vpc/model/DescribeHaVipsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeHaVipsResult::DescribeHaVipsResult() :
	ServiceResult()
{}

DescribeHaVipsResult::DescribeHaVipsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHaVipsResult::~DescribeHaVipsResult()
{}

void DescribeHaVipsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allHaVips = value["HaVips"]["HaVip"];
	for (auto value : allHaVips)
	{
		HaVip haVipObject;
		haVipObject.haVipId = value["HaVipId"].asString();
		haVipObject.regionId = value["RegionId"].asString();
		haVipObject.vpcId = value["VpcId"].asString();
		haVipObject.vSwitchId = value["VSwitchId"].asString();
		haVipObject.ipAddress = value["IpAddress"].asString();
		haVipObject.status = value["Status"].asString();
		haVipObject.masterInstanceId = value["MasterInstanceId"].asString();
		haVipObject.description = value["Description"].asString();
		haVipObject.createTime = value["CreateTime"].asString();
		auto allAssociatedInstances = value["AssociatedInstances"]["associatedInstance"];
		for (auto value : allAssociatedInstances)
			haVipObject.associatedInstances.push_back(value.asString());
		auto allAssociatedEipAddresses = value["AssociatedEipAddresses"]["associatedEipAddresse"];
		for (auto value : allAssociatedEipAddresses)
			haVipObject.associatedEipAddresses.push_back(value.asString());
		haVips_.push_back(haVipObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeHaVipsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeHaVipsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeHaVipsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeHaVipsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeHaVipsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeHaVipsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

