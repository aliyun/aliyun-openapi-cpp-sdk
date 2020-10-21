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

#include <alibabacloud/sgw/model/DescribeGatewayLoggingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayLoggingResult::DescribeGatewayLoggingResult() :
	ServiceResult()
{}

DescribeGatewayLoggingResult::DescribeGatewayLoggingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayLoggingResult::~DescribeGatewayLoggingResult()
{}

void DescribeGatewayLoggingResult::parse(const std::string &payload)
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
	if(!value["GatewayLoggingStatus"].isNull())
		gatewayLoggingStatus_ = value["GatewayLoggingStatus"].asString();
	if(!value["SlsProject"].isNull())
		slsProject_ = value["SlsProject"].asString();
	if(!value["SlsLogstore"].isNull())
		slsLogstore_ = value["SlsLogstore"].asString();

}

std::string DescribeGatewayLoggingResult::getSlsProject()const
{
	return slsProject_;
}

std::string DescribeGatewayLoggingResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayLoggingResult::getGatewayLoggingStatus()const
{
	return gatewayLoggingStatus_;
}

std::string DescribeGatewayLoggingResult::getCode()const
{
	return code_;
}

std::string DescribeGatewayLoggingResult::getSlsLogstore()const
{
	return slsLogstore_;
}

bool DescribeGatewayLoggingResult::getSuccess()const
{
	return success_;
}

