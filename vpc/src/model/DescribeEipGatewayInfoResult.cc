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

#include <alibabacloud/vpc/model/DescribeEipGatewayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeEipGatewayInfoResult::DescribeEipGatewayInfoResult() :
	ServiceResult()
{}

DescribeEipGatewayInfoResult::DescribeEipGatewayInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEipGatewayInfoResult::~DescribeEipGatewayInfoResult()
{}

void DescribeEipGatewayInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEipInfosNode = value["EipInfos"]["EipInfo"];
	for (auto valueEipInfosEipInfo : allEipInfosNode)
	{
		EipInfo eipInfosObject;
		if(!valueEipInfosEipInfo["Ip"].isNull())
			eipInfosObject.ip = valueEipInfosEipInfo["Ip"].asString();
		if(!valueEipInfosEipInfo["IpGw"].isNull())
			eipInfosObject.ipGw = valueEipInfosEipInfo["IpGw"].asString();
		if(!valueEipInfosEipInfo["IpMask"].isNull())
			eipInfosObject.ipMask = valueEipInfosEipInfo["IpMask"].asString();
		eipInfos_.push_back(eipInfosObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeEipGatewayInfoResult::getMessage()const
{
	return message_;
}

std::string DescribeEipGatewayInfoResult::getCode()const
{
	return code_;
}

std::vector<DescribeEipGatewayInfoResult::EipInfo> DescribeEipGatewayInfoResult::getEipInfos()const
{
	return eipInfos_;
}

