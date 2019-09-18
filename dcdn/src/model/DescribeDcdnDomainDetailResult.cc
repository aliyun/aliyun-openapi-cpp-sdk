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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainDetailResult::DescribeDcdnDomainDetailResult() :
	ServiceResult()
{}

DescribeDcdnDomainDetailResult::DescribeDcdnDomainDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainDetailResult::~DescribeDcdnDomainDetailResult()
{}

void DescribeDcdnDomainDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto domainDetailNode = value["DomainDetail"];
	if(!domainDetailNode["GmtCreated"].isNull())
		domainDetail_.gmtCreated = domainDetailNode["GmtCreated"].asString();
	if(!domainDetailNode["GmtModified"].isNull())
		domainDetail_.gmtModified = domainDetailNode["GmtModified"].asString();
	if(!domainDetailNode["DomainStatus"].isNull())
		domainDetail_.domainStatus = domainDetailNode["DomainStatus"].asString();
	if(!domainDetailNode["Cname"].isNull())
		domainDetail_.cname = domainDetailNode["Cname"].asString();
	if(!domainDetailNode["DomainName"].isNull())
		domainDetail_.domainName = domainDetailNode["DomainName"].asString();
	if(!domainDetailNode["Description"].isNull())
		domainDetail_.description = domainDetailNode["Description"].asString();
	if(!domainDetailNode["SSLProtocol"].isNull())
		domainDetail_.sSLProtocol = domainDetailNode["SSLProtocol"].asString();
	if(!domainDetailNode["SSLPub"].isNull())
		domainDetail_.sSLPub = domainDetailNode["SSLPub"].asString();
	if(!domainDetailNode["Scope"].isNull())
		domainDetail_.scope = domainDetailNode["Scope"].asString();
	if(!domainDetailNode["CertName"].isNull())
		domainDetail_.certName = domainDetailNode["CertName"].asString();
	if(!domainDetailNode["ResourceGroupId"].isNull())
		domainDetail_.resourceGroupId = domainDetailNode["ResourceGroupId"].asString();
	auto allSources = value["Sources"]["Source"];
	for (auto value : allSources)
	{
		DomainDetail::Source sourceObject;
		if(!value["Content"].isNull())
			sourceObject.content = value["Content"].asString();
		if(!value["Type"].isNull())
			sourceObject.type = value["Type"].asString();
		if(!value["Port"].isNull())
			sourceObject.port = std::stoi(value["Port"].asString());
		if(!value["Enabled"].isNull())
			sourceObject.enabled = value["Enabled"].asString();
		if(!value["Priority"].isNull())
			sourceObject.priority = value["Priority"].asString();
		if(!value["Weight"].isNull())
			sourceObject.weight = value["Weight"].asString();
		domainDetail_.sources.push_back(sourceObject);
	}

}

DescribeDcdnDomainDetailResult::DomainDetail DescribeDcdnDomainDetailResult::getDomainDetail()const
{
	return domainDetail_;
}

