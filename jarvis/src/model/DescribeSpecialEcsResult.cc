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

#include <alibabacloud/jarvis/model/DescribeSpecialEcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeSpecialEcsResult::DescribeSpecialEcsResult() :
	ServiceResult()
{}

DescribeSpecialEcsResult::DescribeSpecialEcsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSpecialEcsResult::~DescribeSpecialEcsResult()
{}

void DescribeSpecialEcsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ecsInfoNode = value["EcsInfo"];
	if(!ecsInfoNode["InstanceId"].isNull())
		ecsInfo_.instanceId = ecsInfoNode["InstanceId"].asString();
	if(!ecsInfoNode["InstanceName"].isNull())
		ecsInfo_.instanceName = ecsInfoNode["InstanceName"].asString();
	if(!ecsInfoNode["IP"].isNull())
		ecsInfo_.iP = ecsInfoNode["IP"].asString();
	if(!ecsInfoNode["Region"].isNull())
		ecsInfo_.region = ecsInfoNode["Region"].asString();
	if(!ecsInfoNode["ItemSign"].isNull())
		ecsInfo_.itemSign = ecsInfoNode["ItemSign"].asString();
	if(!value["EcsFound"].isNull())
		ecsFound_ = value["EcsFound"].asString() == "true";
	if(!value["module"].isNull())
		module_ = value["module"].asString();

}

DescribeSpecialEcsResult::EcsInfo DescribeSpecialEcsResult::getEcsInfo()const
{
	return ecsInfo_;
}

bool DescribeSpecialEcsResult::getEcsFound()const
{
	return ecsFound_;
}

std::string DescribeSpecialEcsResult::getModule()const
{
	return module_;
}

