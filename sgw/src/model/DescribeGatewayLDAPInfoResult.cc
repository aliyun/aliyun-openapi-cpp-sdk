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

#include <alibabacloud/sgw/model/DescribeGatewayLDAPInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayLDAPInfoResult::DescribeGatewayLDAPInfoResult() :
	ServiceResult()
{}

DescribeGatewayLDAPInfoResult::DescribeGatewayLDAPInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayLDAPInfoResult::~DescribeGatewayLDAPInfoResult()
{}

void DescribeGatewayLDAPInfoResult::parse(const std::string &payload)
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
	if(!value["BaseDN"].isNull())
		baseDN_ = value["BaseDN"].asString();
	if(!value["RootDN"].isNull())
		rootDN_ = value["RootDN"].asString();
	if(!value["ServerIp"].isNull())
		serverIp_ = value["ServerIp"].asString();
	if(!value["IsTls"].isNull())
		isTls_ = value["IsTls"].asString() == "true";
	if(!value["IsEnabled"].isNull())
		isEnabled_ = value["IsEnabled"].asString() == "true";

}

std::string DescribeGatewayLDAPInfoResult::getRootDN()const
{
	return rootDN_;
}

std::string DescribeGatewayLDAPInfoResult::getMessage()const
{
	return message_;
}

bool DescribeGatewayLDAPInfoResult::getIsEnabled()const
{
	return isEnabled_;
}

std::string DescribeGatewayLDAPInfoResult::getBaseDN()const
{
	return baseDN_;
}

std::string DescribeGatewayLDAPInfoResult::getServerIp()const
{
	return serverIp_;
}

bool DescribeGatewayLDAPInfoResult::getIsTls()const
{
	return isTls_;
}

std::string DescribeGatewayLDAPInfoResult::getCode()const
{
	return code_;
}

bool DescribeGatewayLDAPInfoResult::getSuccess()const
{
	return success_;
}

