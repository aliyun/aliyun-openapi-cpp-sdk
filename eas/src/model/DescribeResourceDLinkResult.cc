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

#include <alibabacloud/eas/model/DescribeResourceDLinkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeResourceDLinkResult::DescribeResourceDLinkResult() :
	ServiceResult()
{}

DescribeResourceDLinkResult::DescribeResourceDLinkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceDLinkResult::~DescribeResourceDLinkResult()
{}

void DescribeResourceDLinkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuxVSwitchList = value["AuxVSwitchList"]["AuxVSwitch"];
	for (const auto &item : allAuxVSwitchList)
		auxVSwitchList_.push_back(item.asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["SecurityGroupId"].isNull())
		securityGroupId_ = value["SecurityGroupId"].asString();
	if(!value["DestinationCIDRs"].isNull())
		destinationCIDRs_ = value["DestinationCIDRs"].asString();

}

std::vector<std::string> DescribeResourceDLinkResult::getAuxVSwitchList()const
{
	return auxVSwitchList_;
}

std::string DescribeResourceDLinkResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeResourceDLinkResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeResourceDLinkResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

std::string DescribeResourceDLinkResult::getDestinationCIDRs()const
{
	return destinationCIDRs_;
}

