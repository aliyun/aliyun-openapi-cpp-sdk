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

#include <alibabacloud/sgw/model/DescribeGatewayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayInfoResult::DescribeGatewayInfoResult() :
	ServiceResult()
{}

DescribeGatewayInfoResult::DescribeGatewayInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayInfoResult::~DescribeGatewayInfoResult()
{}

void DescribeGatewayInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewayInfosNode = value["GatewayInfos"]["GatewayInfo"];
	for (auto valueGatewayInfosGatewayInfo : allGatewayInfosNode)
	{
		GatewayInfo gatewayInfosObject;
		if(!valueGatewayInfosGatewayInfo["Time"].isNull())
			gatewayInfosObject.time = std::stol(valueGatewayInfosGatewayInfo["Time"].asString());
		if(!valueGatewayInfosGatewayInfo["Info"].isNull())
			gatewayInfosObject.info = valueGatewayInfosGatewayInfo["Info"].asString();
		gatewayInfos_.push_back(gatewayInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeGatewayInfoResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayInfoResult::getCode()const
{
	return code_;
}

bool DescribeGatewayInfoResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeGatewayInfoResult::GatewayInfo> DescribeGatewayInfoResult::getGatewayInfos()const
{
	return gatewayInfos_;
}

