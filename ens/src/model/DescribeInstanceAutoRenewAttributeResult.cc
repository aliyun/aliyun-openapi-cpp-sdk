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

#include <alibabacloud/ens/model/DescribeInstanceAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeInstanceAutoRenewAttributeResult::DescribeInstanceAutoRenewAttributeResult() :
	ServiceResult()
{}

DescribeInstanceAutoRenewAttributeResult::DescribeInstanceAutoRenewAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAutoRenewAttributeResult::~DescribeInstanceAutoRenewAttributeResult()
{}

void DescribeInstanceAutoRenewAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceRenewAttributesNode = value["InstanceRenewAttributes"]["InstanceRenewAttribute"];
	for (auto valueInstanceRenewAttributesInstanceRenewAttribute : allInstanceRenewAttributesNode)
	{
		InstanceRenewAttribute instanceRenewAttributesObject;
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["AutoRenewal"].isNull())
			instanceRenewAttributesObject.autoRenewal = valueInstanceRenewAttributesInstanceRenewAttribute["AutoRenewal"].asString() == "true";
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["Duration"].isNull())
			instanceRenewAttributesObject.duration = valueInstanceRenewAttributesInstanceRenewAttribute["Duration"].asString();
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["InstanceId"].isNull())
			instanceRenewAttributesObject.instanceId = valueInstanceRenewAttributesInstanceRenewAttribute["InstanceId"].asString();
		instanceRenewAttributes_.push_back(instanceRenewAttributesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::vector<DescribeInstanceAutoRenewAttributeResult::InstanceRenewAttribute> DescribeInstanceAutoRenewAttributeResult::getInstanceRenewAttributes()const
{
	return instanceRenewAttributes_;
}

int DescribeInstanceAutoRenewAttributeResult::getCode()const
{
	return code_;
}

