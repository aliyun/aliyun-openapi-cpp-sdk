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

#include <alibabacloud/edas/model/GetSecureTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetSecureTokenResult::GetSecureTokenResult() :
	ServiceResult()
{}

GetSecureTokenResult::GetSecureTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSecureTokenResult::~GetSecureTokenResult()
{}

void GetSecureTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto secureTokenNode = value["SecureToken"];
	if(!secureTokenNode["Id"].isNull())
		secureToken_.id = std::stol(secureTokenNode["Id"].asString());
	if(!secureTokenNode["UserId"].isNull())
		secureToken_.userId = secureTokenNode["UserId"].asString();
	if(!secureTokenNode["EdasId"].isNull())
		secureToken_.edasId = secureTokenNode["EdasId"].asString();
	if(!secureTokenNode["RegionId"].isNull())
		secureToken_.regionId = secureTokenNode["RegionId"].asString();
	if(!secureTokenNode["RegionName"].isNull())
		secureToken_.regionName = secureTokenNode["RegionName"].asString();
	if(!secureTokenNode["Description"].isNull())
		secureToken_.description = secureTokenNode["Description"].asString();
	if(!secureTokenNode["BelongRegion"].isNull())
		secureToken_.belongRegion = secureTokenNode["BelongRegion"].asString();
	if(!secureTokenNode["AccessKey"].isNull())
		secureToken_.accessKey = secureTokenNode["AccessKey"].asString();
	if(!secureTokenNode["SecretKey"].isNull())
		secureToken_.secretKey = secureTokenNode["SecretKey"].asString();
	if(!secureTokenNode["TenantId"].isNull())
		secureToken_.tenantId = secureTokenNode["TenantId"].asString();
	if(!secureTokenNode["AddressServerHost"].isNull())
		secureToken_.addressServerHost = secureTokenNode["AddressServerHost"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

GetSecureTokenResult::SecureToken GetSecureTokenResult::getSecureToken()const
{
	return secureToken_;
}

std::string GetSecureTokenResult::getMessage()const
{
	return message_;
}

int GetSecureTokenResult::getCode()const
{
	return code_;
}

