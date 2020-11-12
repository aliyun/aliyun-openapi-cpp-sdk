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

#include <alibabacloud/openanalytics-open/model/DecodeStsTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

DecodeStsTokenResult::DecodeStsTokenResult() :
	ServiceResult()
{}

DecodeStsTokenResult::DecodeStsTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DecodeStsTokenResult::~DecodeStsTokenResult()
{}

void DecodeStsTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccountUid"].isNull())
		data_.accountUid = std::stol(dataNode["AccountUid"].asString());
	if(!dataNode["AccountBid"].isNull())
		data_.accountBid = std::stol(dataNode["AccountBid"].asString());
	if(!dataNode["GrantorId"].isNull())
		data_.grantorId = std::stol(dataNode["GrantorId"].asString());
	if(!dataNode["TokenPrincipalId"].isNull())
		data_.tokenPrincipalId = dataNode["TokenPrincipalId"].asString();
	if(!dataNode["TokenPrincipalName"].isNull())
		data_.tokenPrincipalName = dataNode["TokenPrincipalName"].asString();
	if(!dataNode["MfaAuthenticated"].isNull())
		data_.mfaAuthenticated = dataNode["MfaAuthenticated"].asString() == "true";
	if(!dataNode["RoleId"].isNull())
		data_.roleId = std::stol(dataNode["RoleId"].asString());
	if(!dataNode["AkProxy"].isNull())
		data_.akProxy = dataNode["AkProxy"].asString();
	if(!dataNode["ProxyTrustTransportInfo"].isNull())
		data_.proxyTrustTransportInfo = dataNode["ProxyTrustTransportInfo"].asString() == "true";
	if(!dataNode["Policy"].isNull())
		data_.policy = dataNode["Policy"].asString();
	if(!dataNode["RoleName"].isNull())
		data_.roleName = dataNode["RoleName"].asString();
	if(!dataNode["PlayerUid"].isNull())
		data_.playerUid = dataNode["PlayerUid"].asString();
	if(!dataNode["ExpireDate"].isNull())
		data_.expireDate = std::stol(dataNode["ExpireDate"].asString());
	if(!dataNode["TokenType"].isNull())
		data_.tokenType = dataNode["TokenType"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

DecodeStsTokenResult::Data DecodeStsTokenResult::getData()const
{
	return data_;
}

std::string DecodeStsTokenResult::getRegionId()const
{
	return regionId_;
}

