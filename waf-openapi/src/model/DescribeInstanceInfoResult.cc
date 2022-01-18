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

#include <alibabacloud/waf-openapi/model/DescribeInstanceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeInstanceInfoResult::DescribeInstanceInfoResult() :
	ServiceResult()
{}

DescribeInstanceInfoResult::DescribeInstanceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceInfoResult::~DescribeInstanceInfoResult()
{}

void DescribeInstanceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceInfoNode = value["InstanceInfo"];
	if(!instanceInfoNode["Status"].isNull())
		instanceInfo_.status = std::stoi(instanceInfoNode["Status"].asString());
	if(!instanceInfoNode["EndDate"].isNull())
		instanceInfo_.endDate = std::stol(instanceInfoNode["EndDate"].asString());
	if(!instanceInfoNode["Version"].isNull())
		instanceInfo_.version = instanceInfoNode["Version"].asString();
	if(!instanceInfoNode["RemainDay"].isNull())
		instanceInfo_.remainDay = std::stoi(instanceInfoNode["RemainDay"].asString());
	if(!instanceInfoNode["Region"].isNull())
		instanceInfo_.region = instanceInfoNode["Region"].asString();
	if(!instanceInfoNode["PayType"].isNull())
		instanceInfo_.payType = std::stoi(instanceInfoNode["PayType"].asString());
	if(!instanceInfoNode["InDebt"].isNull())
		instanceInfo_.inDebt = std::stoi(instanceInfoNode["InDebt"].asString());
	if(!instanceInfoNode["InstanceId"].isNull())
		instanceInfo_.instanceId = instanceInfoNode["InstanceId"].asString();
	if(!instanceInfoNode["SubscriptionType"].isNull())
		instanceInfo_.subscriptionType = instanceInfoNode["SubscriptionType"].asString();
	if(!instanceInfoNode["Trial"].isNull())
		instanceInfo_.trial = std::stoi(instanceInfoNode["Trial"].asString());

}

DescribeInstanceInfoResult::InstanceInfo DescribeInstanceInfoResult::getInstanceInfo()const
{
	return instanceInfo_;
}

