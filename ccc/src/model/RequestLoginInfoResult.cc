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

#include <alibabacloud/ccc/model/RequestLoginInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

RequestLoginInfoResult::RequestLoginInfoResult() :
	ServiceResult()
{}

RequestLoginInfoResult::RequestLoginInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RequestLoginInfoResult::~RequestLoginInfoResult()
{}

void RequestLoginInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLoginInfo = value["LoginInfo"];
	for (auto value : allLoginInfo)
	{
		LoginInfo loginInfoObject;
		if(!value["UserName"].isNull())
			loginInfoObject.userName = value["UserName"].asString();
		if(!value["DisplayName"].isNull())
			loginInfoObject.displayName = value["DisplayName"].asString();
		if(!value["PhoneNumber"].isNull())
			loginInfoObject.phoneNumber = value["PhoneNumber"].asString();
		if(!value["Region"].isNull())
			loginInfoObject.region = value["Region"].asString();
		if(!value["WebRtcUrl"].isNull())
			loginInfoObject.webRtcUrl = value["WebRtcUrl"].asString();
		if(!value["AgentServerUrl"].isNull())
			loginInfoObject.agentServerUrl = value["AgentServerUrl"].asString();
		if(!value["Extension"].isNull())
			loginInfoObject.extension = value["Extension"].asString();
		if(!value["TenantId"].isNull())
			loginInfoObject.tenantId = value["TenantId"].asString();
		if(!value["Signature"].isNull())
			loginInfoObject.signature = value["Signature"].asString();
		if(!value["SignData"].isNull())
			loginInfoObject.signData = value["SignData"].asString();
		loginInfo_.push_back(loginInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::vector<RequestLoginInfoResult::LoginInfo> RequestLoginInfoResult::getLoginInfo()const
{
	return loginInfo_;
}

std::string RequestLoginInfoResult::getMessage()const
{
	return message_;
}

int RequestLoginInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string RequestLoginInfoResult::getCode()const
{
	return code_;
}

bool RequestLoginInfoResult::getSuccess()const
{
	return success_;
}

