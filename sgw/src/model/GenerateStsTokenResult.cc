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

#include <alibabacloud/sgw/model/GenerateStsTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

GenerateStsTokenResult::GenerateStsTokenResult() :
	ServiceResult()
{}

GenerateStsTokenResult::GenerateStsTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateStsTokenResult::~GenerateStsTokenResult()
{}

void GenerateStsTokenResult::parse(const std::string &payload)
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
	if(!value["AccessKeyId"].isNull())
		accessKeyId_ = value["AccessKeyId"].asString();
	if(!value["AccessKeySecret"].isNull())
		accessKeySecret_ = value["AccessKeySecret"].asString();
	if(!value["Expiration"].isNull())
		expiration_ = value["Expiration"].asString();
	if(!value["SecurityToken"].isNull())
		securityToken_ = value["SecurityToken"].asString();
	if(!value["SupportBundleTarget"].isNull())
		supportBundleTarget_ = value["SupportBundleTarget"].asString();
	if(!value["Environment"].isNull())
		environment_ = value["Environment"].asString();

}

std::string GenerateStsTokenResult::getSecurityToken()const
{
	return securityToken_;
}

std::string GenerateStsTokenResult::getMessage()const
{
	return message_;
}

std::string GenerateStsTokenResult::getSupportBundleTarget()const
{
	return supportBundleTarget_;
}

std::string GenerateStsTokenResult::getAccessKeyId()const
{
	return accessKeyId_;
}

std::string GenerateStsTokenResult::getAccessKeySecret()const
{
	return accessKeySecret_;
}

std::string GenerateStsTokenResult::getExpiration()const
{
	return expiration_;
}

std::string GenerateStsTokenResult::getEnvironment()const
{
	return environment_;
}

std::string GenerateStsTokenResult::getCode()const
{
	return code_;
}

bool GenerateStsTokenResult::getSuccess()const
{
	return success_;
}

