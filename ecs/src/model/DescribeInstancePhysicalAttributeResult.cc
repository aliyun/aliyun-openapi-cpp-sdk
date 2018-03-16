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

#include <alibabacloud/ecs/model/DescribeInstancePhysicalAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstancePhysicalAttributeResult::DescribeInstancePhysicalAttributeResult() :
	ServiceResult()
{}

DescribeInstancePhysicalAttributeResult::DescribeInstancePhysicalAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancePhysicalAttributeResult::~DescribeInstancePhysicalAttributeResult()
{}

void DescribeInstancePhysicalAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["VlanId"].isNull())
		vlanId_ = value["VlanId"].asString();
	if(!value["NodeControllerId"].isNull())
		nodeControllerId_ = value["NodeControllerId"].asString();
	if(!value["RackId"].isNull())
		rackId_ = value["RackId"].asString();

}

std::string DescribeInstancePhysicalAttributeResult::getRackId()const
{
	return rackId_;
}

std::string DescribeInstancePhysicalAttributeResult::getNodeControllerId()const
{
	return nodeControllerId_;
}

std::string DescribeInstancePhysicalAttributeResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeInstancePhysicalAttributeResult::getVlanId()const
{
	return vlanId_;
}

