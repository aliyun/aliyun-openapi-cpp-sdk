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

#include <alibabacloud/ecs/model/DescribeVpcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeVpcsResult::DescribeVpcsResult() :
	ServiceResult()
{}

DescribeVpcsResult::DescribeVpcsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpcsResult::~DescribeVpcsResult()
{}

void DescribeVpcsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVpcs = value["Vpcs"]["Vpc"];
	for (auto value : allVpcs)
	{
		Vpc vpcObject;
		vpcObject.vpcId = value["VpcId"].asString();
		vpcObject.regionId = value["RegionId"].asString();
		vpcObject.status = value["Status"].asString();
		vpcObject.vpcName = value["VpcName"].asString();
		vpcObject.creationTime = value["CreationTime"].asString();
		vpcObject.cidrBlock = value["CidrBlock"].asString();
		vpcObject.vRouterId = value["VRouterId"].asString();
		vpcObject.description = value["Description"].asString();
		vpcObject.isDefault = std::stoi(value["IsDefault"].asString());
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			vpcObject.vSwitchIds.push_back(value.asString());
		auto allUserCidrs = value["UserCidrs"]["UserCidr"];
		for (auto value : allUserCidrs)
			vpcObject.userCidrs.push_back(value.asString());
		vpcs_.push_back(vpcObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVpcsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeVpcsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeVpcsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeVpcsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeVpcsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpcsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

