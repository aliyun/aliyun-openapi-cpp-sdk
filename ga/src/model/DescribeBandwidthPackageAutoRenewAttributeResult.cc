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

#include <alibabacloud/ga/model/DescribeBandwidthPackageAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeBandwidthPackageAutoRenewAttributeResult::DescribeBandwidthPackageAutoRenewAttributeResult() :
	ServiceResult()
{}

DescribeBandwidthPackageAutoRenewAttributeResult::DescribeBandwidthPackageAutoRenewAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBandwidthPackageAutoRenewAttributeResult::~DescribeBandwidthPackageAutoRenewAttributeResult()
{}

void DescribeBandwidthPackageAutoRenewAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["AutoRenew"].isNull())
		autoRenew_ = value["AutoRenew"].asString() == "true";
	if(!value["AutoRenewDuration"].isNull())
		autoRenewDuration_ = std::stoi(value["AutoRenewDuration"].asString());
	if(!value["RenewalStatus"].isNull())
		renewalStatus_ = value["RenewalStatus"].asString();

}

std::string DescribeBandwidthPackageAutoRenewAttributeResult::getInstanceId()const
{
	return instanceId_;
}

bool DescribeBandwidthPackageAutoRenewAttributeResult::getAutoRenew()const
{
	return autoRenew_;
}

std::string DescribeBandwidthPackageAutoRenewAttributeResult::getRenewalStatus()const
{
	return renewalStatus_;
}

int DescribeBandwidthPackageAutoRenewAttributeResult::getAutoRenewDuration()const
{
	return autoRenewDuration_;
}

