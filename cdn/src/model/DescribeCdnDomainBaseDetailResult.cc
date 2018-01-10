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

#include <alibabacloud/cdn/model/DescribeCdnDomainBaseDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnDomainBaseDetailResult::DescribeCdnDomainBaseDetailResult() :
	ServiceResult()
{}

DescribeCdnDomainBaseDetailResult::DescribeCdnDomainBaseDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnDomainBaseDetailResult::~DescribeCdnDomainBaseDetailResult()
{}

void DescribeCdnDomainBaseDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomainBaseDetailModel = value["DomainBaseDetailModel"];
	for (auto value : allDomainBaseDetailModel)
	{
		DomainBaseDetailModel domainBaseDetailModelObject;
		domainBaseDetailModelObject.cname = value["Cname"].asString();
		domainBaseDetailModelObject.cdnType = value["CdnType"].asString();
		domainBaseDetailModelObject.domainStatus = value["DomainStatus"].asString();
		domainBaseDetailModelObject.sourceType = value["SourceType"].asString();
		domainBaseDetailModelObject.region = value["Region"].asString();
		domainBaseDetailModelObject.domainName = value["DomainName"].asString();
		domainBaseDetailModelObject.remark = value["Remark"].asString();
		domainBaseDetailModelObject.gmtModified = value["GmtModified"].asString();
		domainBaseDetailModelObject.gmtCreated = value["GmtCreated"].asString();
		auto allSources = value["Sources"]["Source"];
		for (auto value : allSources)
			domainBaseDetailModelObject.sources.push_back(value.asString());
		domainBaseDetailModel_.push_back(domainBaseDetailModelObject);
	}

}

