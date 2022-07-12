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

#include <alibabacloud/antiddos-public/model/DescribeIpLocationServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeIpLocationServiceResult::DescribeIpLocationServiceResult() :
	ServiceResult()
{}

DescribeIpLocationServiceResult::DescribeIpLocationServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpLocationServiceResult::~DescribeIpLocationServiceResult()
{}

void DescribeIpLocationServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["InternetIp"].isNull())
		instance_.internetIp = instanceNode["InternetIp"].asString();
	if(!instanceNode["InstanceType"].isNull())
		instance_.instanceType = instanceNode["InstanceType"].asString();
	if(!instanceNode["Region"].isNull())
		instance_.region = instanceNode["Region"].asString();

}

DescribeIpLocationServiceResult::Instance DescribeIpLocationServiceResult::getInstance()const
{
	return instance_;
}

