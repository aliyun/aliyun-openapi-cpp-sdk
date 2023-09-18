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

#include <alibabacloud/adb/model/DescribeVSwitchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

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
	auto vSwitchesNode = value["VSwitches"];
	auto allVSwitchNode = vSwitchesNode["VSwitch"]["VSwitchItem"];
	for (auto vSwitchesNodeVSwitchVSwitchItem : allVSwitchNode)
	{
		VSwitches::VSwitchItem vSwitchItemObject;
		if(!vSwitchesNodeVSwitchVSwitchItem["Status"].isNull())
			vSwitchItemObject.status = vSwitchesNodeVSwitchVSwitchItem["Status"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["IsDefault"].isNull())
			vSwitchItemObject.isDefault = vSwitchesNodeVSwitchVSwitchItem["IsDefault"].asString() == "true";
		if(!vSwitchesNodeVSwitchVSwitchItem["VSwitchId"].isNull())
			vSwitchItemObject.vSwitchId = vSwitchesNodeVSwitchVSwitchItem["VSwitchId"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["CidrBlock"].isNull())
			vSwitchItemObject.cidrBlock = vSwitchesNodeVSwitchVSwitchItem["CidrBlock"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["RegionNo"].isNull())
			vSwitchItemObject.regionNo = vSwitchesNodeVSwitchVSwitchItem["RegionNo"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["GmtCreate"].isNull())
			vSwitchItemObject.gmtCreate = vSwitchesNodeVSwitchVSwitchItem["GmtCreate"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["AliUid"].isNull())
			vSwitchItemObject.aliUid = vSwitchesNodeVSwitchVSwitchItem["AliUid"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["GmtModified"].isNull())
			vSwitchItemObject.gmtModified = vSwitchesNodeVSwitchVSwitchItem["GmtModified"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["Bid"].isNull())
			vSwitchItemObject.bid = vSwitchesNodeVSwitchVSwitchItem["Bid"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["IzNo"].isNull())
			vSwitchItemObject.izNo = vSwitchesNodeVSwitchVSwitchItem["IzNo"].asString();
		if(!vSwitchesNodeVSwitchVSwitchItem["VSwitchName"].isNull())
			vSwitchItemObject.vSwitchName = vSwitchesNodeVSwitchVSwitchItem["VSwitchName"].asString();
		vSwitches_.vSwitch.push_back(vSwitchItemObject);
	}

}

DescribeVSwitchesResult::VSwitches DescribeVSwitchesResult::getVSwitches()const
{
	return vSwitches_;
}

