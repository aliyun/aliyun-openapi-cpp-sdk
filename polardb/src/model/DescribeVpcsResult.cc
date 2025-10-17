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

#include <alibabacloud/polardb/model/DescribeVpcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
		if(!valueVpcsVpc["AliUid"].isNull())
			vpcsObject.aliUid = valueVpcsVpc["AliUid"].asString();
		if(!valueVpcsVpc["Bid"].isNull())
			vpcsObject.bid = valueVpcsVpc["Bid"].asString();
		if(!valueVpcsVpc["CidrBlock"].isNull())
			vpcsObject.cidrBlock = valueVpcsVpc["CidrBlock"].asString();
		if(!valueVpcsVpc["GmtCreate"].isNull())
			vpcsObject.gmtCreate = valueVpcsVpc["GmtCreate"].asString();
		if(!valueVpcsVpc["GmtModified"].isNull())
			vpcsObject.gmtModified = valueVpcsVpc["GmtModified"].asString();
		if(!valueVpcsVpc["IsDefault"].isNull())
			vpcsObject.isDefault = valueVpcsVpc["IsDefault"].asString() == "true";
		if(!valueVpcsVpc["RegionNo"].isNull())
			vpcsObject.regionNo = valueVpcsVpc["RegionNo"].asString();
		if(!valueVpcsVpc["Status"].isNull())
			vpcsObject.status = valueVpcsVpc["Status"].asString();
		if(!valueVpcsVpc["VpcId"].isNull())
			vpcsObject.vpcId = valueVpcsVpc["VpcId"].asString();
		if(!valueVpcsVpc["VpcName"].isNull())
			vpcsObject.vpcName = valueVpcsVpc["VpcName"].asString();
		auto allVSwitchsNode = valueVpcsVpc["VSwitchs"]["VSwitch"];
		for (auto valueVpcsVpcVSwitchsVSwitch : allVSwitchsNode)
		{
			Vpc::VSwitch vSwitchsObject;
			if(!valueVpcsVpcVSwitchsVSwitch["CidrBlock"].isNull())
				vSwitchsObject.cidrBlock = valueVpcsVpcVSwitchsVSwitch["CidrBlock"].asString();
			if(!valueVpcsVpcVSwitchsVSwitch["GmtCreate"].isNull())
				vSwitchsObject.gmtCreate = valueVpcsVpcVSwitchsVSwitch["GmtCreate"].asString();
			if(!valueVpcsVpcVSwitchsVSwitch["GmtModified"].isNull())
				vSwitchsObject.gmtModified = valueVpcsVpcVSwitchsVSwitch["GmtModified"].asString();
			if(!valueVpcsVpcVSwitchsVSwitch["IsDefault"].isNull())
				vSwitchsObject.isDefault = valueVpcsVpcVSwitchsVSwitch["IsDefault"].asString() == "true";
			if(!valueVpcsVpcVSwitchsVSwitch["IzNo"].isNull())
				vSwitchsObject.izNo = valueVpcsVpcVSwitchsVSwitch["IzNo"].asString();
			if(!valueVpcsVpcVSwitchsVSwitch["Status"].isNull())
				vSwitchsObject.status = valueVpcsVpcVSwitchsVSwitch["Status"].asString();
			if(!valueVpcsVpcVSwitchsVSwitch["VSwitchId"].isNull())
				vSwitchsObject.vSwitchId = valueVpcsVpcVSwitchsVSwitch["VSwitchId"].asString();
			if(!valueVpcsVpcVSwitchsVSwitch["VSwitchName"].isNull())
				vSwitchsObject.vSwitchName = valueVpcsVpcVSwitchsVSwitch["VSwitchName"].asString();
			vpcsObject.vSwitchs.push_back(vSwitchsObject);
		}
		vpcs_.push_back(vpcsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
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

