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

#include <alibabacloud/waf-openapi/model/DescribeInstanceSpecInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeInstanceSpecInfoResult::DescribeInstanceSpecInfoResult() :
	ServiceResult()
{}

DescribeInstanceSpecInfoResult::DescribeInstanceSpecInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSpecInfoResult::~DescribeInstanceSpecInfoResult()
{}

void DescribeInstanceSpecInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceSpecInfosNode = value["InstanceSpecInfos"]["InstanceSpecInfo"];
	for (auto valueInstanceSpecInfosInstanceSpecInfo : allInstanceSpecInfosNode)
	{
		InstanceSpecInfo instanceSpecInfosObject;
		if(!valueInstanceSpecInfosInstanceSpecInfo["Code"].isNull())
			instanceSpecInfosObject.code = valueInstanceSpecInfosInstanceSpecInfo["Code"].asString();
		if(!valueInstanceSpecInfosInstanceSpecInfo["Value"].isNull())
			instanceSpecInfosObject.value = valueInstanceSpecInfosInstanceSpecInfo["Value"].asString();
		instanceSpecInfos_.push_back(instanceSpecInfosObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = std::stol(value["ExpireTime"].asString());
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();

}

std::vector<DescribeInstanceSpecInfoResult::InstanceSpecInfo> DescribeInstanceSpecInfoResult::getInstanceSpecInfos()const
{
	return instanceSpecInfos_;
}

std::string DescribeInstanceSpecInfoResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeInstanceSpecInfoResult::getVersion()const
{
	return version_;
}

long DescribeInstanceSpecInfoResult::getExpireTime()const
{
	return expireTime_;
}

