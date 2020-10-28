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

#include <alibabacloud/drds/model/DescribeInstanceSwitchNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeInstanceSwitchNetworkResult::DescribeInstanceSwitchNetworkResult() :
	ServiceResult()
{}

DescribeInstanceSwitchNetworkResult::DescribeInstanceSwitchNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSwitchNetworkResult::~DescribeInstanceSwitchNetworkResult()
{}

void DescribeInstanceSwitchNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpcInfosNode = value["VpcInfos"]["VpcInfo"];
	for (auto valueVpcInfosVpcInfo : allVpcInfosNode)
	{
		VpcInfo vpcInfosObject;
		if(!valueVpcInfosVpcInfo["VpcId"].isNull())
			vpcInfosObject.vpcId = valueVpcInfosVpcInfo["VpcId"].asString();
		if(!valueVpcInfosVpcInfo["RegionId"].isNull())
			vpcInfosObject.regionId = valueVpcInfosVpcInfo["RegionId"].asString();
		if(!valueVpcInfosVpcInfo["VpcName"].isNull())
			vpcInfosObject.vpcName = valueVpcInfosVpcInfo["VpcName"].asString();
		auto allVswitchInfosNode = allVpcInfosNode["VswitchInfos"]["VswitchInfo"];
		for (auto allVpcInfosNodeVswitchInfosVswitchInfo : allVswitchInfosNode)
		{
			VpcInfo::VswitchInfo vswitchInfosObject;
			if(!allVpcInfosNodeVswitchInfosVswitchInfo["VswitchId"].isNull())
				vswitchInfosObject.vswitchId = allVpcInfosNodeVswitchInfosVswitchInfo["VswitchId"].asString();
			if(!allVpcInfosNodeVswitchInfosVswitchInfo["VpcId"].isNull())
				vswitchInfosObject.vpcId = allVpcInfosNodeVswitchInfosVswitchInfo["VpcId"].asString();
			if(!allVpcInfosNodeVswitchInfosVswitchInfo["VswitchName"].isNull())
				vswitchInfosObject.vswitchName = allVpcInfosNodeVswitchInfosVswitchInfo["VswitchName"].asString();
			if(!allVpcInfosNodeVswitchInfosVswitchInfo["AzoneId"].isNull())
				vswitchInfosObject.azoneId = allVpcInfosNodeVswitchInfosVswitchInfo["AzoneId"].asString();
			if(!allVpcInfosNodeVswitchInfosVswitchInfo["DrdsSupported"].isNull())
				vswitchInfosObject.drdsSupported = allVpcInfosNodeVswitchInfosVswitchInfo["DrdsSupported"].asString() == "true";
			vpcInfosObject.vswitchInfos.push_back(vswitchInfosObject);
		}
		vpcInfos_.push_back(vpcInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeInstanceSwitchNetworkResult::VpcInfo> DescribeInstanceSwitchNetworkResult::getVpcInfos()const
{
	return vpcInfos_;
}

bool DescribeInstanceSwitchNetworkResult::getSuccess()const
{
	return success_;
}

