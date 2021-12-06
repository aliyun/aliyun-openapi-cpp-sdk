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
	auto allVpcsNode = value["Vpcs"]["Vpc"];
	for (auto valueVpcsVpc : allVpcsNode)
	{
		Vpc vpcsObject;
		if(!valueVpcsVpc["CreationTime"].isNull())
			vpcsObject.creationTime = valueVpcsVpc["CreationTime"].asString();
		if(!valueVpcsVpc["VpcName"].isNull())
			vpcsObject.vpcName = valueVpcsVpc["VpcName"].asString();
		if(!valueVpcsVpc["Status"].isNull())
			vpcsObject.status = valueVpcsVpc["Status"].asString();
		if(!valueVpcsVpc["VpcId"].isNull())
			vpcsObject.vpcId = valueVpcsVpc["VpcId"].asString();
		if(!valueVpcsVpc["VRouterId"].isNull())
			vpcsObject.vRouterId = valueVpcsVpc["VRouterId"].asString();
		if(!valueVpcsVpc["IsDefault"].isNull())
			vpcsObject.isDefault = valueVpcsVpc["IsDefault"].asString() == "true";
		if(!valueVpcsVpc["CidrBlock"].isNull())
			vpcsObject.cidrBlock = valueVpcsVpc["CidrBlock"].asString();
		if(!valueVpcsVpc["Description"].isNull())
			vpcsObject.description = valueVpcsVpc["Description"].asString();
		if(!valueVpcsVpc["RegionId"].isNull())
			vpcsObject.regionId = valueVpcsVpc["RegionId"].asString();
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			vpcsObject.vSwitchIds.push_back(value.asString());
		auto allUserCidrs = value["UserCidrs"]["UserCidr"];
		for (auto value : allUserCidrs)
			vpcsObject.userCidrs.push_back(value.asString());
		vpcs_.push_back(vpcsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeVpcsResult::Vpc> DescribeVpcsResult::getVpcs()const
{
	return vpcs_;
}

int DescribeVpcsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVpcsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVpcsResult::getPageNumber()const
{
	return pageNumber_;
}

