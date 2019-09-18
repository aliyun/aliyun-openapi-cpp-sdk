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
	auto allVpc = value["Vpc"]["VpcItem"];
	for (auto value : allVpc)
	{
		Vpcs::VpcItem vpcItemObject;
		if(!value["VpcId"].isNull())
			vpcItemObject.vpcId = value["VpcId"].asString();
		if(!value["VpcName"].isNull())
			vpcItemObject.vpcName = value["VpcName"].asString();
		if(!value["Bid"].isNull())
			vpcItemObject.bid = value["Bid"].asString();
		if(!value["AliUid"].isNull())
			vpcItemObject.aliUid = value["AliUid"].asString();
		if(!value["RegionNo"].isNull())
			vpcItemObject.regionNo = value["RegionNo"].asString();
		if(!value["CidrBlock"].isNull())
			vpcItemObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["IsDefault"].isNull())
			vpcItemObject.isDefault = value["IsDefault"].asString() == "true";
		if(!value["Status"].isNull())
			vpcItemObject.status = value["Status"].asString();
		if(!value["GmtCreate"].isNull())
			vpcItemObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			vpcItemObject.gmtModified = value["GmtModified"].asString();
		auto allVSwitchs = value["VSwitchs"]["VSwitch"];
		for (auto value : allVSwitchs)
		{
			Vpcs::VpcItem::VSwitch vSwitchsObject;
			if(!value["VSwitchId"].isNull())
				vSwitchsObject.vSwitchId = value["VSwitchId"].asString();
			if(!value["VSwitchName"].isNull())
				vSwitchsObject.vSwitchName = value["VSwitchName"].asString();
			if(!value["IzNo"].isNull())
				vSwitchsObject.izNo = value["IzNo"].asString();
			if(!value["CidrBlock"].isNull())
				vSwitchsObject.cidrBlock = value["CidrBlock"].asString();
			if(!value["IsDefault"].isNull())
				vSwitchsObject.isDefault = value["IsDefault"].asString() == "true";
			if(!value["Status"].isNull())
				vSwitchsObject.status = value["Status"].asString();
			if(!value["GmtCreate"].isNull())
				vSwitchsObject.gmtCreate = value["GmtCreate"].asString();
			if(!value["GmtModified"].isNull())
				vSwitchsObject.gmtModified = value["GmtModified"].asString();
			vpcItemObject.vSwitchs.push_back(vSwitchsObject);
		}
		vpcs_.vpc.push_back(vpcItemObject);
	}

}

DescribeRdsVpcsResult::Vpcs DescribeRdsVpcsResult::getVpcs()const
{
	return vpcs_;
}

