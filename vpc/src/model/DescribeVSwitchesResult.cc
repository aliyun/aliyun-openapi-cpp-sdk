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

#include <alibabacloud/vpc/model/DescribeVSwitchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVSwitchesResult::DescribeVSwitchesResult() :
	ServiceResult()
{}

DescribeVSwitchesResult::DescribeVSwitchesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVSwitchesResult::~DescribeVSwitchesResult()
{}

void DescribeVSwitchesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVSwitches = value["VSwitches"]["VSwitch"];
	for (auto value : allVSwitches)
	{
		VSwitch vSwitchObject;
		vSwitchObject.vSwitchId = value["VSwitchId"].asString();
		vSwitchObject.vpcId = value["VpcId"].asString();
		vSwitchObject.status = value["Status"].asString();
		vSwitchObject.cidrBlock = value["CidrBlock"].asString();
		vSwitchObject.zoneId = value["ZoneId"].asString();
		vSwitchObject.availableIpAddressCount = std::stol(value["AvailableIpAddressCount"].asString());
		vSwitchObject.description = value["Description"].asString();
		vSwitchObject.vSwitchName = value["VSwitchName"].asString();
		vSwitchObject.creationTime = value["CreationTime"].asString();
		vSwitchObject.isDefault = std::stoi(value["IsDefault"].asString());
		vSwitches_.push_back(vSwitchObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVSwitchesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeVSwitchesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeVSwitchesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeVSwitchesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeVSwitchesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVSwitchesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

