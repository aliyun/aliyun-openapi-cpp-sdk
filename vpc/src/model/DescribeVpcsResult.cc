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

#include <alibabacloud/vpc/model/DescribeVpcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
		if(!valueVpcsVpc["VpcId"].isNull())
			vpcsObject.vpcId = valueVpcsVpc["VpcId"].asString();
		if(!valueVpcsVpc["RegionId"].isNull())
			vpcsObject.regionId = valueVpcsVpc["RegionId"].asString();
		if(!valueVpcsVpc["Status"].isNull())
			vpcsObject.status = valueVpcsVpc["Status"].asString();
		if(!valueVpcsVpc["VpcName"].isNull())
			vpcsObject.vpcName = valueVpcsVpc["VpcName"].asString();
		if(!valueVpcsVpc["CreationTime"].isNull())
			vpcsObject.creationTime = valueVpcsVpc["CreationTime"].asString();
		if(!valueVpcsVpc["CidrBlock"].isNull())
			vpcsObject.cidrBlock = valueVpcsVpc["CidrBlock"].asString();
		if(!valueVpcsVpc["Ipv6CidrBlock"].isNull())
			vpcsObject.ipv6CidrBlock = valueVpcsVpc["Ipv6CidrBlock"].asString();
		if(!valueVpcsVpc["VRouterId"].isNull())
			vpcsObject.vRouterId = valueVpcsVpc["VRouterId"].asString();
		if(!valueVpcsVpc["Description"].isNull())
			vpcsObject.description = valueVpcsVpc["Description"].asString();
		if(!valueVpcsVpc["IsDefault"].isNull())
			vpcsObject.isDefault = valueVpcsVpc["IsDefault"].asString() == "true";
		if(!valueVpcsVpc["NetworkAclNum"].isNull())
			vpcsObject.networkAclNum = valueVpcsVpc["NetworkAclNum"].asString();
		if(!valueVpcsVpc["ResourceGroupId"].isNull())
			vpcsObject.resourceGroupId = valueVpcsVpc["ResourceGroupId"].asString();
		if(!valueVpcsVpc["CenStatus"].isNull())
			vpcsObject.cenStatus = valueVpcsVpc["CenStatus"].asString();
		auto allTagsNode = allVpcsNode["Tags"]["Tag"];
		for (auto allVpcsNodeTagsTag : allTagsNode)
		{
			Vpc::Tag tagsObject;
			if(!allVpcsNodeTagsTag["Key"].isNull())
				tagsObject.key = allVpcsNodeTagsTag["Key"].asString();
			if(!allVpcsNodeTagsTag["Value"].isNull())
				tagsObject.value = allVpcsNodeTagsTag["Value"].asString();
			vpcsObject.tags.push_back(tagsObject);
		}
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			vpcsObject.vSwitchIds.push_back(value.asString());
		auto allUserCidrs = value["UserCidrs"]["UserCidr"];
		for (auto value : allUserCidrs)
			vpcsObject.userCidrs.push_back(value.asString());
		auto allNatGatewayIds = value["NatGatewayIds"]["NatGatewayIds"];
		for (auto value : allNatGatewayIds)
			vpcsObject.natGatewayIds.push_back(value.asString());
		auto allRouterTableIds = value["RouterTableIds"]["RouterTableIds"];
		for (auto value : allRouterTableIds)
			vpcsObject.routerTableIds.push_back(value.asString());
		auto allSecondaryCidrBlocks = value["SecondaryCidrBlocks"]["SecondaryCidrBlock"];
		for (auto value : allSecondaryCidrBlocks)
			vpcsObject.secondaryCidrBlocks.push_back(value.asString());
		vpcs_.push_back(vpcsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

