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

#include <alibabacloud/dms-enterprise/model/GetProxyAccessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetProxyAccessResult::GetProxyAccessResult() :
	ServiceResult()
{}

GetProxyAccessResult::GetProxyAccessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProxyAccessResult::~GetProxyAccessResult()
{}

void GetProxyAccessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto proxyAccessNode = value["ProxyAccess"];
	if(!proxyAccessNode["ProxyAccessId"].isNull())
		proxyAccess_.proxyAccessId = std::stol(proxyAccessNode["ProxyAccessId"].asString());
	if(!proxyAccessNode["GmtCreate"].isNull())
		proxyAccess_.gmtCreate = proxyAccessNode["GmtCreate"].asString();
	if(!proxyAccessNode["AccessId"].isNull())
		proxyAccess_.accessId = proxyAccessNode["AccessId"].asString();
	if(!proxyAccessNode["OriginInfo"].isNull())
		proxyAccess_.originInfo = proxyAccessNode["OriginInfo"].asString();
	if(!proxyAccessNode["IndepAccount"].isNull())
		proxyAccess_.indepAccount = proxyAccessNode["IndepAccount"].asString();
	if(!proxyAccessNode["UserId"].isNull())
		proxyAccess_.userId = std::stol(proxyAccessNode["UserId"].asString());
	if(!proxyAccessNode["UserUid"].isNull())
		proxyAccess_.userUid = proxyAccessNode["UserUid"].asString();
	if(!proxyAccessNode["UserName"].isNull())
		proxyAccess_.userName = proxyAccessNode["UserName"].asString();
	if(!proxyAccessNode["ProxyId"].isNull())
		proxyAccess_.proxyId = std::stol(proxyAccessNode["ProxyId"].asString());
	if(!proxyAccessNode["InstanceId"].isNull())
		proxyAccess_.instanceId = std::stol(proxyAccessNode["InstanceId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetProxyAccessResult::ProxyAccess GetProxyAccessResult::getProxyAccess()const
{
	return proxyAccess_;
}

std::string GetProxyAccessResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetProxyAccessResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetProxyAccessResult::getSuccess()const
{
	return success_;
}

