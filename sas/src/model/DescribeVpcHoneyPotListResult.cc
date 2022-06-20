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

#include <alibabacloud/sas/model/DescribeVpcHoneyPotListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVpcHoneyPotListResult::DescribeVpcHoneyPotListResult() :
	ServiceResult()
{}

DescribeVpcHoneyPotListResult::DescribeVpcHoneyPotListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpcHoneyPotListResult::~DescribeVpcHoneyPotListResult()
{}

void DescribeVpcHoneyPotListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpcHoneyPotDTOListNode = value["VpcHoneyPotDTOList"]["VpcHoneyPotDTO"];
	for (auto valueVpcHoneyPotDTOListVpcHoneyPotDTO : allVpcHoneyPotDTOListNode)
	{
		VpcHoneyPotDTO vpcHoneyPotDTOListObject;
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcName"].isNull())
			vpcHoneyPotDTOListObject.vpcName = valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcName"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcId"].isNull())
			vpcHoneyPotDTOListObject.vpcId = valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcId"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotEniInstanceId"].isNull())
			vpcHoneyPotDTOListObject.honeyPotEniInstanceId = valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotEniInstanceId"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["CidrBlock"].isNull())
			vpcHoneyPotDTOListObject.cidrBlock = valueVpcHoneyPotDTOListVpcHoneyPotDTO["CidrBlock"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcStatus"].isNull())
			vpcHoneyPotDTOListObject.vpcStatus = valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcStatus"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["CreateTime"].isNull())
			vpcHoneyPotDTOListObject.createTime = std::stol(valueVpcHoneyPotDTOListVpcHoneyPotDTO["CreateTime"].asString());
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotVpcSwitchId"].isNull())
			vpcHoneyPotDTOListObject.honeyPotVpcSwitchId = valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotVpcSwitchId"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotExistence"].isNull())
			vpcHoneyPotDTOListObject.honeyPotExistence = valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotExistence"].asString() == "true";
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcRegionId"].isNull())
			vpcHoneyPotDTOListObject.vpcRegionId = valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcRegionId"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotEcsInstanceStatus"].isNull())
			vpcHoneyPotDTOListObject.honeyPotEcsInstanceStatus = valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotEcsInstanceStatus"].asString();
		if(!valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotInstanceStatus"].isNull())
			vpcHoneyPotDTOListObject.honeyPotInstanceStatus = valueVpcHoneyPotDTOListVpcHoneyPotDTO["HoneyPotInstanceStatus"].asString();
		auto allVpcSwitchIdListNode = valueVpcHoneyPotDTOListVpcHoneyPotDTO["VpcSwitchIdList"]["VpcSwitchInfo"];
		for (auto valueVpcHoneyPotDTOListVpcHoneyPotDTOVpcSwitchIdListVpcSwitchInfo : allVpcSwitchIdListNode)
		{
			VpcHoneyPotDTO::VpcSwitchInfo vpcSwitchIdListObject;
			if(!valueVpcHoneyPotDTOListVpcHoneyPotDTOVpcSwitchIdListVpcSwitchInfo["VpcSwitchName"].isNull())
				vpcSwitchIdListObject.vpcSwitchName = valueVpcHoneyPotDTOListVpcHoneyPotDTOVpcSwitchIdListVpcSwitchInfo["VpcSwitchName"].asString();
			if(!valueVpcHoneyPotDTOListVpcHoneyPotDTOVpcSwitchIdListVpcSwitchInfo["ZoneId"].isNull())
				vpcSwitchIdListObject.zoneId = valueVpcHoneyPotDTOListVpcHoneyPotDTOVpcSwitchIdListVpcSwitchInfo["ZoneId"].asString();
			if(!valueVpcHoneyPotDTOListVpcHoneyPotDTOVpcSwitchIdListVpcSwitchInfo["VpcSwitchId"].isNull())
				vpcSwitchIdListObject.vpcSwitchId = valueVpcHoneyPotDTOListVpcHoneyPotDTOVpcSwitchIdListVpcSwitchInfo["VpcSwitchId"].asString();
			vpcHoneyPotDTOListObject.vpcSwitchIdList.push_back(vpcSwitchIdListObject);
		}
		vpcHoneyPotDTOList_.push_back(vpcHoneyPotDTOListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribeVpcHoneyPotListResult::VpcHoneyPotDTO> DescribeVpcHoneyPotListResult::getVpcHoneyPotDTOList()const
{
	return vpcHoneyPotDTOList_;
}

DescribeVpcHoneyPotListResult::PageInfo DescribeVpcHoneyPotListResult::getPageInfo()const
{
	return pageInfo_;
}

