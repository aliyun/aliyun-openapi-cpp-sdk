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

#include <alibabacloud/sgw/model/DescribeGatewayADInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayADInfoResult::DescribeGatewayADInfoResult() :
	ServiceResult()
{}

DescribeGatewayADInfoResult::DescribeGatewayADInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayADInfoResult::~DescribeGatewayADInfoResult()
{}

void DescribeGatewayADInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Username"].isNull())
		username_ = value["Username"].asString();
	if(!value["ServerIp"].isNull())
		serverIp_ = value["ServerIp"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["IsEnabled"].isNull())
		isEnabled_ = value["IsEnabled"].asString() == "true";

}

std::string DescribeGatewayADInfoResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayADInfoResult::getUsername()const
{
	return username_;
}

std::string DescribeGatewayADInfoResult::getDomainName()const
{
	return domainName_;
}

bool DescribeGatewayADInfoResult::getIsEnabled()const
{
	return isEnabled_;
}

std::string DescribeGatewayADInfoResult::getServerIp()const
{
	return serverIp_;
}

std::string DescribeGatewayADInfoResult::getCode()const
{
	return code_;
}

bool DescribeGatewayADInfoResult::getSuccess()const
{
	return success_;
}

