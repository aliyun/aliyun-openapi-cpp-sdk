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

#include <alibabacloud/ims/model/AddFingerprintToOIDCProviderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

AddFingerprintToOIDCProviderResult::AddFingerprintToOIDCProviderResult() :
	ServiceResult()
{}

AddFingerprintToOIDCProviderResult::AddFingerprintToOIDCProviderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddFingerprintToOIDCProviderResult::~AddFingerprintToOIDCProviderResult()
{}

void AddFingerprintToOIDCProviderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto oIDCProviderNode = value["OIDCProvider"];
	if(!oIDCProviderNode["UpdateDate"].isNull())
		oIDCProvider_.updateDate = oIDCProviderNode["UpdateDate"].asString();
	if(!oIDCProviderNode["Description"].isNull())
		oIDCProvider_.description = oIDCProviderNode["Description"].asString();
	if(!oIDCProviderNode["OIDCProviderName"].isNull())
		oIDCProvider_.oIDCProviderName = oIDCProviderNode["OIDCProviderName"].asString();
	if(!oIDCProviderNode["CreateDate"].isNull())
		oIDCProvider_.createDate = oIDCProviderNode["CreateDate"].asString();
	if(!oIDCProviderNode["Arn"].isNull())
		oIDCProvider_.arn = oIDCProviderNode["Arn"].asString();
	if(!oIDCProviderNode["IssuerUrl"].isNull())
		oIDCProvider_.issuerUrl = oIDCProviderNode["IssuerUrl"].asString();
	if(!oIDCProviderNode["Fingerprints"].isNull())
		oIDCProvider_.fingerprints = oIDCProviderNode["Fingerprints"].asString();
	if(!oIDCProviderNode["ClientIds"].isNull())
		oIDCProvider_.clientIds = oIDCProviderNode["ClientIds"].asString();
	if(!oIDCProviderNode["GmtCreate"].isNull())
		oIDCProvider_.gmtCreate = oIDCProviderNode["GmtCreate"].asString();
	if(!oIDCProviderNode["GmtModified"].isNull())
		oIDCProvider_.gmtModified = oIDCProviderNode["GmtModified"].asString();
	if(!oIDCProviderNode["IssuanceLimitTime"].isNull())
		oIDCProvider_.issuanceLimitTime = std::stol(oIDCProviderNode["IssuanceLimitTime"].asString());

}

AddFingerprintToOIDCProviderResult::OIDCProvider AddFingerprintToOIDCProviderResult::getOIDCProvider()const
{
	return oIDCProvider_;
}

