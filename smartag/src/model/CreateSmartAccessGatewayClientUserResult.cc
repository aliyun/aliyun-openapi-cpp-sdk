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

#include <alibabacloud/smartag/model/CreateSmartAccessGatewayClientUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

CreateSmartAccessGatewayClientUserResult::CreateSmartAccessGatewayClientUserResult() :
	ServiceResult()
{}

CreateSmartAccessGatewayClientUserResult::CreateSmartAccessGatewayClientUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSmartAccessGatewayClientUserResult::~CreateSmartAccessGatewayClientUserResult()
{}

void CreateSmartAccessGatewayClientUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["UserMail"].isNull())
		userMail_ = value["UserMail"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["ClientIp"].isNull())
		clientIp_ = value["ClientIp"].asString();

}

std::string CreateSmartAccessGatewayClientUserResult::getUserName()const
{
	return userName_;
}

std::string CreateSmartAccessGatewayClientUserResult::getUserMail()const
{
	return userMail_;
}

int CreateSmartAccessGatewayClientUserResult::getBandwidth()const
{
	return bandwidth_;
}

std::string CreateSmartAccessGatewayClientUserResult::getClientIp()const
{
	return clientIp_;
}

