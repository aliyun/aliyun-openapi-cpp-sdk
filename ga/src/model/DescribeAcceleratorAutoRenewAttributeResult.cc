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

#include <alibabacloud/ga/model/DescribeAcceleratorAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeAcceleratorAutoRenewAttributeResult::DescribeAcceleratorAutoRenewAttributeResult() :
	ServiceResult()
{}

DescribeAcceleratorAutoRenewAttributeResult::DescribeAcceleratorAutoRenewAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAcceleratorAutoRenewAttributeResult::~DescribeAcceleratorAutoRenewAttributeResult()
{}

void DescribeAcceleratorAutoRenewAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["AutoRenew"].isNull())
		autoRenew_ = value["AutoRenew"].asString() == "true";
	if(!value["AutoRenewDuration"].isNull())
		autoRenewDuration_ = std::stoi(value["AutoRenewDuration"].asString());
	if(!value["RenewalStatus"].isNull())
		renewalStatus_ = value["RenewalStatus"].asString();

}

bool DescribeAcceleratorAutoRenewAttributeResult::getAutoRenew()const
{
	return autoRenew_;
}

std::string DescribeAcceleratorAutoRenewAttributeResult::getRenewalStatus()const
{
	return renewalStatus_;
}

std::string DescribeAcceleratorAutoRenewAttributeResult::getAcceleratorId()const
{
	return acceleratorId_;
}

int DescribeAcceleratorAutoRenewAttributeResult::getAutoRenewDuration()const
{
	return autoRenewDuration_;
}

