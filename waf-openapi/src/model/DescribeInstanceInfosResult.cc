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

#include <alibabacloud/waf-openapi/model/DescribeInstanceInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeInstanceInfosResult::DescribeInstanceInfosResult() :
	ServiceResult()
{}

DescribeInstanceInfosResult::DescribeInstanceInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceInfosResult::~DescribeInstanceInfosResult()
{}

void DescribeInstanceInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceInfosNode = value["InstanceInfos"]["InstanceInfo"];
	for (auto valueInstanceInfosInstanceInfo : allInstanceInfosNode)
	{
		InstanceInfo instanceInfosObject;
		if(!valueInstanceInfosInstanceInfo["InDebt"].isNull())
			instanceInfosObject.inDebt = std::stoi(valueInstanceInfosInstanceInfo["InDebt"].asString());
		if(!valueInstanceInfosInstanceInfo["InstanceId"].isNull())
			instanceInfosObject.instanceId = valueInstanceInfosInstanceInfo["InstanceId"].asString();
		if(!valueInstanceInfosInstanceInfo["PayType"].isNull())
			instanceInfosObject.payType = std::stoi(valueInstanceInfosInstanceInfo["PayType"].asString());
		if(!valueInstanceInfosInstanceInfo["EndDate"].isNull())
			instanceInfosObject.endDate = std::stol(valueInstanceInfosInstanceInfo["EndDate"].asString());
		if(!valueInstanceInfosInstanceInfo["RemainDay"].isNull())
			instanceInfosObject.remainDay = std::stoi(valueInstanceInfosInstanceInfo["RemainDay"].asString());
		if(!valueInstanceInfosInstanceInfo["Region"].isNull())
			instanceInfosObject.region = valueInstanceInfosInstanceInfo["Region"].asString();
		if(!valueInstanceInfosInstanceInfo["Trial"].isNull())
			instanceInfosObject.trial = std::stoi(valueInstanceInfosInstanceInfo["Trial"].asString());
		if(!valueInstanceInfosInstanceInfo["Status"].isNull())
			instanceInfosObject.status = std::stoi(valueInstanceInfosInstanceInfo["Status"].asString());
		if(!valueInstanceInfosInstanceInfo["SubscriptionType"].isNull())
			instanceInfosObject.subscriptionType = valueInstanceInfosInstanceInfo["SubscriptionType"].asString();
		instanceInfos_.push_back(instanceInfosObject);
	}

}

std::vector<DescribeInstanceInfosResult::InstanceInfo> DescribeInstanceInfosResult::getInstanceInfos()const
{
	return instanceInfos_;
}

