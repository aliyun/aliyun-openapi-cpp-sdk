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

#include <alibabacloud/r-kvstore/model/DescribeRdsVSwitchsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeRdsVSwitchsResult::DescribeRdsVSwitchsResult() :
	ServiceResult()
{}

DescribeRdsVSwitchsResult::DescribeRdsVSwitchsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsVSwitchsResult::~DescribeRdsVSwitchsResult()
{}

void DescribeRdsVSwitchsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto vSwitchesNode = value["VSwitches"];
	auto allVSwitch = value["VSwitch"]["VSwitchItem"];
	for (auto value : allVSwitch)
	{
		VSwitches::VSwitchItem vSwitchItemObject;
		if(!value["VSwitchId"].isNull())
			vSwitchItemObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["VSwitchName"].isNull())
			vSwitchItemObject.vSwitchName = value["VSwitchName"].asString();
		if(!value["IzNo"].isNull())
			vSwitchItemObject.izNo = value["IzNo"].asString();
		if(!value["Bid"].isNull())
			vSwitchItemObject.bid = value["Bid"].asString();
		if(!value["AliUid"].isNull())
			vSwitchItemObject.aliUid = value["AliUid"].asString();
		if(!value["RegionNo"].isNull())
			vSwitchItemObject.regionNo = value["RegionNo"].asString();
		if(!value["CidrBlock"].isNull())
			vSwitchItemObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["IsDefault"].isNull())
			vSwitchItemObject.isDefault = value["IsDefault"].asString() == "true";
		if(!value["Status"].isNull())
			vSwitchItemObject.status = value["Status"].asString();
		if(!value["GmtCreate"].isNull())
			vSwitchItemObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			vSwitchItemObject.gmtModified = value["GmtModified"].asString();
		vSwitches_.vSwitch.push_back(vSwitchItemObject);
	}

}

DescribeRdsVSwitchsResult::VSwitches DescribeRdsVSwitchsResult::getVSwitches()const
{
	return vSwitches_;
}

