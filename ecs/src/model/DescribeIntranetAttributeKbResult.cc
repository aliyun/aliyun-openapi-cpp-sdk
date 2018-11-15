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

#include <alibabacloud/ecs/model/DescribeIntranetAttributeKbResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeIntranetAttributeKbResult::DescribeIntranetAttributeKbResult() :
	ServiceResult()
{}

DescribeIntranetAttributeKbResult::DescribeIntranetAttributeKbResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIntranetAttributeKbResult::~DescribeIntranetAttributeKbResult()
{}

void DescribeIntranetAttributeKbResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["VlanId"].isNull())
		vlanId_ = value["VlanId"].asString();
	if(!value["IntranetIpAddress"].isNull())
		intranetIpAddress_ = value["IntranetIpAddress"].asString();
	if(!value["IntranetMaxBandwidthIn"].isNull())
		intranetMaxBandwidthIn_ = std::stoi(value["IntranetMaxBandwidthIn"].asString());
	if(!value["IntranetMaxBandwidthOut"].isNull())
		intranetMaxBandwidthOut_ = std::stoi(value["IntranetMaxBandwidthOut"].asString());

}

std::string DescribeIntranetAttributeKbResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeIntranetAttributeKbResult::getIntranetMaxBandwidthOut()const
{
	return intranetMaxBandwidthOut_;
}

std::string DescribeIntranetAttributeKbResult::getVlanId()const
{
	return vlanId_;
}

std::string DescribeIntranetAttributeKbResult::getIntranetIpAddress()const
{
	return intranetIpAddress_;
}

int DescribeIntranetAttributeKbResult::getIntranetMaxBandwidthIn()const
{
	return intranetMaxBandwidthIn_;
}

