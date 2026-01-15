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

#include <alibabacloud/websitebuild/model/GetDomainInfoForPartnerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

GetDomainInfoForPartnerResult::GetDomainInfoForPartnerResult() :
	ServiceResult()
{}

GetDomainInfoForPartnerResult::GetDomainInfoForPartnerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDomainInfoForPartnerResult::~GetDomainInfoForPartnerResult()
{}

void GetDomainInfoForPartnerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DomainName"].isNull())
		data_.domainName = dataNode["DomainName"].asString();
	if(!dataNode["Registrar"].isNull())
		data_.registrar = dataNode["Registrar"].asString();
	if(!dataNode["NameServers"].isNull())
		data_.nameServers = dataNode["NameServers"].asString();
	auto ownershipNode = dataNode["Ownership"];
	if(!ownershipNode["Account"].isNull())
		data_.ownership.account = ownershipNode["Account"].asString();
	if(!ownershipNode["Provider"].isNull())
		data_.ownership.provider = ownershipNode["Provider"].asString();

}

GetDomainInfoForPartnerResult::Data GetDomainInfoForPartnerResult::getData()const
{
	return data_;
}

