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
	if(!domainDetailNode["SSLPub"].isNull())
		domainDetail_.sSLPub = domainDetailNode["SSLPub"].asString();
	if(!domainDetailNode["Description"].isNull())
		domainDetail_.description = domainDetailNode["Description"].asString();
	if(!domainDetailNode["SSLProtocol"].isNull())
		domainDetail_.sSLProtocol = domainDetailNode["SSLProtocol"].asString();
	if(!domainDetailNode["ResourceGroupId"].isNull())
		domainDetail_.resourceGroupId = domainDetailNode["ResourceGroupId"].asString();
	if(!domainDetailNode["Scope"].isNull())
		domainDetail_.scope = domainDetailNode["Scope"].asString();
	if(!domainDetailNode["Cname"].isNull())
		domainDetail_.cname = domainDetailNode["Cname"].asString();
	if(!domainDetailNode["DomainStatus"].isNull())
		domainDetail_.domainStatus = domainDetailNode["DomainStatus"].asString();
	if(!domainDetailNode["GmtModified"].isNull())
		domainDetail_.gmtModified = domainDetailNode["GmtModified"].asString();
	if(!domainDetailNode["DomainName"].isNull())
		domainDetail_.domainName = domainDetailNode["DomainName"].asString();
	if(!domainDetailNode["Scene"].isNull())
		domainDetail_.scene = domainDetailNode["Scene"].asString();
	if(!domainDetailNode["FunctionType"].isNull())
		domainDetail_.functionType = domainDetailNode["FunctionType"].asString();
	auto allSourcesNode = domainDetailNode["Sources"]["Source"];
	for (auto domainDetailNodeSourcesSource : allSourcesNode)
	{
		DomainDetail::Source sourceObject;
		if(!domainDetailNodeSourcesSource["Type"].isNull())
			sourceObject.type = domainDetailNodeSourcesSource["Type"].asString();
		if(!domainDetailNodeSourcesSource["Weight"].isNull())
			sourceObject.weight = domainDetailNodeSourcesSource["Weight"].asString();
		if(!domainDetailNodeSourcesSource["Enabled"].isNull())
			sourceObject.enabled = domainDetailNodeSourcesSource["Enabled"].asString();
		if(!domainDetailNodeSourcesSource["Priority"].isNull())
			sourceObject.priority = domainDetailNodeSourcesSource["Priority"].asString();
		if(!domainDetailNodeSourcesSource["Port"].isNull())
			sourceObject.port = std::stoi(domainDetailNodeSourcesSource["Port"].asString());
		if(!domainDetailNodeSourcesSource["Content"].isNull())
			sourceObject.content = domainDetailNodeSourcesSource["Content"].asString();
		domainDetail_.sources.push_back(sourceObject);
	}

}

DescribeDcdnDomainDetailResult::DomainDetail DescribeDcdnDomainDetailResult::getDomainDetail()const
{
	return domainDetail_;
}

