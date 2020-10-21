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

#include <alibabacloud/sgw/model/DescribeAccountConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeAccountConfigResult::DescribeAccountConfigResult() :
	ServiceResult()
{}

DescribeAccountConfigResult::DescribeAccountConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountConfigResult::~DescribeAccountConfigResult()
{}

void DescribeAccountConfigResult::parse(const std::string &payload)
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
	if(!value["IsSupportServerSideEncryption"].isNull())
		isSupportServerSideEncryption_ = value["IsSupportServerSideEncryption"].asString() == "true";
	if(!value["IsSupportClientSideEncryption"].isNull())
		isSupportClientSideEncryption_ = value["IsSupportClientSideEncryption"].asString() == "true";
	if(!value["IsSupportGatewayLogging"].isNull())
		isSupportGatewayLogging_ = value["IsSupportGatewayLogging"].asString() == "true";
	if(!value["IsSupportElasticGatewayBeta"].isNull())
		isSupportElasticGatewayBeta_ = value["IsSupportElasticGatewayBeta"].asString() == "true";

}

std::string DescribeAccountConfigResult::getMessage()const
{
	return message_;
}

bool DescribeAccountConfigResult::getIsSupportServerSideEncryption()const
{
	return isSupportServerSideEncryption_;
}

bool DescribeAccountConfigResult::getIsSupportClientSideEncryption()const
{
	return isSupportClientSideEncryption_;
}

std::string DescribeAccountConfigResult::getCode()const
{
	return code_;
}

bool DescribeAccountConfigResult::getIsSupportGatewayLogging()const
{
	return isSupportGatewayLogging_;
}

bool DescribeAccountConfigResult::getSuccess()const
{
	return success_;
}

bool DescribeAccountConfigResult::getIsSupportElasticGatewayBeta()const
{
	return isSupportElasticGatewayBeta_;
}

