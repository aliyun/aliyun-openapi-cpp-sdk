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
	instanceId_ = value["InstanceId"].asString();
	vlanId_ = value["VlanId"].asString();
	intranetIpAddress_ = value["IntranetIpAddress"].asString();
	intranetMaxBandwidthIn_ = std::stoi(value["IntranetMaxBandwidthIn"].asString());
	intranetMaxBandwidthOut_ = std::stoi(value["IntranetMaxBandwidthOut"].asString());

}

std::string DescribeIntranetAttributeKbResult::getInstanceId()const
{
	return instanceId_;
}

void DescribeIntranetAttributeKbResult::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
}

int DescribeIntranetAttributeKbResult::getIntranetMaxBandwidthOut()const
{
	return intranetMaxBandwidthOut_;
}

void DescribeIntranetAttributeKbResult::setIntranetMaxBandwidthOut(int intranetMaxBandwidthOut)
{
	intranetMaxBandwidthOut_ = intranetMaxBandwidthOut;
}

std::string DescribeIntranetAttributeKbResult::getVlanId()const
{
	return vlanId_;
}

void DescribeIntranetAttributeKbResult::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
}

std::string DescribeIntranetAttributeKbResult::getIntranetIpAddress()const
{
	return intranetIpAddress_;
}

void DescribeIntranetAttributeKbResult::setIntranetIpAddress(const std::string& intranetIpAddress)
{
	intranetIpAddress_ = intranetIpAddress;
}

int DescribeIntranetAttributeKbResult::getIntranetMaxBandwidthIn()const
{
	return intranetMaxBandwidthIn_;
}

void DescribeIntranetAttributeKbResult::setIntranetMaxBandwidthIn(int intranetMaxBandwidthIn)
{
	intranetMaxBandwidthIn_ = intranetMaxBandwidthIn;
}

