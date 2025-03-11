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
		if(!valueVpcInfosVpcInfo["VpcName"].isNull())
			vpcInfosObject.vpcName = valueVpcInfosVpcInfo["VpcName"].asString();
		if(!valueVpcInfosVpcInfo["RegionId"].isNull())
			vpcInfosObject.regionId = valueVpcInfosVpcInfo["RegionId"].asString();
		auto allVswitchInfosNode = valueVpcInfosVpcInfo["VswitchInfos"]["VswitchInfo"];
		for (auto valueVpcInfosVpcInfoVswitchInfosVswitchInfo : allVswitchInfosNode)
		{
			VpcInfo::VswitchInfo vswitchInfosObject;
			if(!valueVpcInfosVpcInfoVswitchInfosVswitchInfo["VpcId"].isNull())
				vswitchInfosObject.vpcId = valueVpcInfosVpcInfoVswitchInfosVswitchInfo["VpcId"].asString();
			if(!valueVpcInfosVpcInfoVswitchInfosVswitchInfo["DrdsSupported"].isNull())
				vswitchInfosObject.drdsSupported = valueVpcInfosVpcInfoVswitchInfosVswitchInfo["DrdsSupported"].asString() == "true";
			if(!valueVpcInfosVpcInfoVswitchInfosVswitchInfo["VswitchId"].isNull())
				vswitchInfosObject.vswitchId = valueVpcInfosVpcInfoVswitchInfosVswitchInfo["VswitchId"].asString();
			if(!valueVpcInfosVpcInfoVswitchInfosVswitchInfo["AzoneId"].isNull())
				vswitchInfosObject.azoneId = valueVpcInfosVpcInfoVswitchInfosVswitchInfo["AzoneId"].asString();
			if(!valueVpcInfosVpcInfoVswitchInfosVswitchInfo["VswitchName"].isNull())
				vswitchInfosObject.vswitchName = valueVpcInfosVpcInfoVswitchInfosVswitchInfo["VswitchName"].asString();
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

