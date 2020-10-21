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

#include <alibabacloud/sgw/model/DescribeGatewayCredentialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayCredentialResult::DescribeGatewayCredentialResult() :
	ServiceResult()
{}

DescribeGatewayCredentialResult::DescribeGatewayCredentialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayCredentialResult::~DescribeGatewayCredentialResult()
{}

void DescribeGatewayCredentialResult::parse(const std::string &payload)
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
	if(!value["EcsIp"].isNull())
		ecsIp_ = value["EcsIp"].asString();
	if(!value["EcsPassword"].isNull())
		ecsPassword_ = value["EcsPassword"].asString();
	if(!value["ConsoleUsername"].isNull())
		consoleUsername_ = value["ConsoleUsername"].asString();
	if(!value["ConsolePassword"].isNull())
		consolePassword_ = value["ConsolePassword"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();

}

std::string DescribeGatewayCredentialResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayCredentialResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeGatewayCredentialResult::getEcsIp()const
{
	return ecsIp_;
}

std::string DescribeGatewayCredentialResult::getConsoleUsername()const
{
	return consoleUsername_;
}

std::string DescribeGatewayCredentialResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeGatewayCredentialResult::getConsolePassword()const
{
	return consolePassword_;
}

std::string DescribeGatewayCredentialResult::getEcsPassword()const
{
	return ecsPassword_;
}

std::string DescribeGatewayCredentialResult::getCode()const
{
	return code_;
}

bool DescribeGatewayCredentialResult::getSuccess()const
{
	return success_;
}

