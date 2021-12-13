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

#include <alibabacloud/gpdb/model/DescribeRdsVpcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeRdsVpcsResult::DescribeRdsVpcsResult() :
	ServiceResult()
{}

DescribeRdsVpcsResult::DescribeRdsVpcsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsVpcsResult::~DescribeRdsVpcsResult()
{}

void DescribeRdsVpcsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto vpcsNode = value["Vpcs"];
	auto allVpcNode = vpcsNode["Vpc"]["VpcItem"];
	for (auto vpcsNodeVpcVpcItem : allVpcNode)
	{
		Vpcs::VpcItem vpcItemObject;
		if(!vpcsNodeVpcVpcItem["Status"].isNull())
			vpcItemObject.status = vpcsNodeVpcVpcItem["Status"].asString();
		if(!vpcsNodeVpcVpcItem["VpcName"].isNull())
			vpcItemObject.vpcName = vpcsNodeVpcVpcItem["VpcName"].asString();
		if(!vpcsNodeVpcVpcItem["VpcId"].isNull())
			vpcItemObject.vpcId = vpcsNodeVpcVpcItem["VpcId"].asString();
		if(!vpcsNodeVpcVpcItem["IsDefault"].isNull())
			vpcItemObject.isDefault = vpcsNodeVpcVpcItem["IsDefault"].asString() == "true";
		if(!vpcsNodeVpcVpcItem["CidrBlock"].isNull())
			vpcItemObject.cidrBlock = vpcsNodeVpcVpcItem["CidrBlock"].asString();
		if(!vpcsNodeVpcVpcItem["RegionNo"].isNull())
			vpcItemObject.regionNo = vpcsNodeVpcVpcItem["RegionNo"].asString();
		if(!vpcsNodeVpcVpcItem["GmtCreate"].isNull())
			vpcItemObject.gmtCreate = vpcsNodeVpcVpcItem["GmtCreate"].asString();
		if(!vpcsNodeVpcVpcItem["AliUid"].isNull())
			vpcItemObject.aliUid = vpcsNodeVpcVpcItem["AliUid"].asString();
		if(!vpcsNodeVpcVpcItem["GmtModified"].isNull())
			vpcItemObject.gmtModified = vpcsNodeVpcVpcItem["GmtModified"].asString();
		if(!vpcsNodeVpcVpcItem["Bid"].isNull())
			vpcItemObject.bid = vpcsNodeVpcVpcItem["Bid"].asString();
		auto allVSwitchsNode = vpcsNodeVpcVpcItem["VSwitchs"]["VSwitch"];
		for (auto vpcsNodeVpcVpcItemVSwitchsVSwitch : allVSwitchsNode)
		{
			Vpcs::VpcItem::VSwitch vSwitchsObject;
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["Status"].isNull())
				vSwitchsObject.status = vpcsNodeVpcVpcItemVSwitchsVSwitch["Status"].asString();
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["VSwitchId"].isNull())
				vSwitchsObject.vSwitchId = vpcsNodeVpcVpcItemVSwitchsVSwitch["VSwitchId"].asString();
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["IsDefault"].isNull())
				vSwitchsObject.isDefault = vpcsNodeVpcVpcItemVSwitchsVSwitch["IsDefault"].asString() == "true";
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["CidrBlock"].isNull())
				vSwitchsObject.cidrBlock = vpcsNodeVpcVpcItemVSwitchsVSwitch["CidrBlock"].asString();
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["GmtCreate"].isNull())
				vSwitchsObject.gmtCreate = vpcsNodeVpcVpcItemVSwitchsVSwitch["GmtCreate"].asString();
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["GmtModified"].isNull())
				vSwitchsObject.gmtModified = vpcsNodeVpcVpcItemVSwitchsVSwitch["GmtModified"].asString();
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["IzNo"].isNull())
				vSwitchsObject.izNo = vpcsNodeVpcVpcItemVSwitchsVSwitch["IzNo"].asString();
			if(!vpcsNodeVpcVpcItemVSwitchsVSwitch["VSwitchName"].isNull())
				vSwitchsObject.vSwitchName = vpcsNodeVpcVpcItemVSwitchsVSwitch["VSwitchName"].asString();
			vpcItemObject.vSwitchs.push_back(vSwitchsObject);
		}
		vpcs_.vpc.push_back(vpcItemObject);
	}

}

DescribeRdsVpcsResult::Vpcs DescribeRdsVpcsResult::getVpcs()const
{
	return vpcs_;
}

