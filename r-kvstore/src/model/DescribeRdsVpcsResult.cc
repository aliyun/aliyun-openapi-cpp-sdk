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

#include <alibabacloud/r-kvstore/model/DescribeRdsVpcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
		if(!vpcsNodeVpcVpcItem["VpcId"].isNull())
			vpcItemObject.vpcId = vpcsNodeVpcVpcItem["VpcId"].asString();
		if(!vpcsNodeVpcVpcItem["VpcName"].isNull())
			vpcItemObject.vpcName = vpcsNodeVpcVpcItem["VpcName"].asString();
		if(!vpcsNodeVpcVpcItem["Bid"].isNull())
			vpcItemObject.bid = vpcsNodeVpcVpcItem["Bid"].asString();
		if(!vpcsNodeVpcVpcItem["AliUid"].isNull())
			vpcItemObject.aliUid = vpcsNodeVpcVpcItem["AliUid"].asString();
		if(!vpcsNodeVpcVpcItem["RegionNo"].isNull())
			vpcItemObject.regionNo = vpcsNodeVpcVpcItem["RegionNo"].asString();
		if(!vpcsNodeVpcVpcItem["CidrBlock"].isNull())
			vpcItemObject.cidrBlock = vpcsNodeVpcVpcItem["CidrBlock"].asString();
		if(!vpcsNodeVpcVpcItem["IsDefault"].isNull())
			vpcItemObject.isDefault = vpcsNodeVpcVpcItem["IsDefault"].asString() == "true";
		if(!vpcsNodeVpcVpcItem["Status"].isNull())
			vpcItemObject.status = vpcsNodeVpcVpcItem["Status"].asString();
		if(!vpcsNodeVpcVpcItem["GmtCreate"].isNull())
			vpcItemObject.gmtCreate = vpcsNodeVpcVpcItem["GmtCreate"].asString();
		if(!vpcsNodeVpcVpcItem["GmtModified"].isNull())
			vpcItemObject.gmtModified = vpcsNodeVpcVpcItem["GmtModified"].asString();
		auto allVSwitchsNode = allVpcNode["VSwitchs"]["VSwitch"];
		for (auto allVpcNodeVSwitchsVSwitch : allVSwitchsNode)
		{
			Vpcs::VpcItem::VSwitch vSwitchsObject;
			if(!allVpcNodeVSwitchsVSwitch["VSwitchId"].isNull())
				vSwitchsObject.vSwitchId = allVpcNodeVSwitchsVSwitch["VSwitchId"].asString();
			if(!allVpcNodeVSwitchsVSwitch["VSwitchName"].isNull())
				vSwitchsObject.vSwitchName = allVpcNodeVSwitchsVSwitch["VSwitchName"].asString();
			if(!allVpcNodeVSwitchsVSwitch["IzNo"].isNull())
				vSwitchsObject.izNo = allVpcNodeVSwitchsVSwitch["IzNo"].asString();
			if(!allVpcNodeVSwitchsVSwitch["CidrBlock"].isNull())
				vSwitchsObject.cidrBlock = allVpcNodeVSwitchsVSwitch["CidrBlock"].asString();
			if(!allVpcNodeVSwitchsVSwitch["IsDefault"].isNull())
				vSwitchsObject.isDefault = allVpcNodeVSwitchsVSwitch["IsDefault"].asString() == "true";
			if(!allVpcNodeVSwitchsVSwitch["Status"].isNull())
				vSwitchsObject.status = allVpcNodeVSwitchsVSwitch["Status"].asString();
			if(!allVpcNodeVSwitchsVSwitch["GmtCreate"].isNull())
				vSwitchsObject.gmtCreate = allVpcNodeVSwitchsVSwitch["GmtCreate"].asString();
			if(!allVpcNodeVSwitchsVSwitch["GmtModified"].isNull())
				vSwitchsObject.gmtModified = allVpcNodeVSwitchsVSwitch["GmtModified"].asString();
			vpcItemObject.vSwitchs.push_back(vSwitchsObject);
		}
		vpcs_.vpc.push_back(vpcItemObject);
	}

}

DescribeRdsVpcsResult::Vpcs DescribeRdsVpcsResult::getVpcs()const
{
	return vpcs_;
}

