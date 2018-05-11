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
	auto domainBaseDetailModelNode = value["DomainBaseDetailModel"];
	if(!domainBaseDetailModelNode["Cname"].isNull())
		domainBaseDetailModel_.cname = domainBaseDetailModelNode["Cname"].asString();
	if(!domainBaseDetailModelNode["CdnType"].isNull())
		domainBaseDetailModel_.cdnType = domainBaseDetailModelNode["CdnType"].asString();
	if(!domainBaseDetailModelNode["DomainStatus"].isNull())
		domainBaseDetailModel_.domainStatus = domainBaseDetailModelNode["DomainStatus"].asString();
	if(!domainBaseDetailModelNode["SourceType"].isNull())
		domainBaseDetailModel_.sourceType = domainBaseDetailModelNode["SourceType"].asString();
	if(!domainBaseDetailModelNode["Region"].isNull())
		domainBaseDetailModel_.region = domainBaseDetailModelNode["Region"].asString();
	if(!domainBaseDetailModelNode["DomainName"].isNull())
		domainBaseDetailModel_.domainName = domainBaseDetailModelNode["DomainName"].asString();
	if(!domainBaseDetailModelNode["Remark"].isNull())
		domainBaseDetailModel_.remark = domainBaseDetailModelNode["Remark"].asString();
	if(!domainBaseDetailModelNode["GmtModified"].isNull())
		domainBaseDetailModel_.gmtModified = domainBaseDetailModelNode["GmtModified"].asString();
	if(!domainBaseDetailModelNode["GmtCreated"].isNull())
		domainBaseDetailModel_.gmtCreated = domainBaseDetailModelNode["GmtCreated"].asString();
		auto allSources = domainBaseDetailModelNode["Sources"]["Source"];
		for (auto value : allSources)
			domainBaseDetailModel_.sources.push_back(value.asString());

}

DescribeCdnDomainBaseDetailResult::DomainBaseDetailModel DescribeCdnDomainBaseDetailResult::getDomainBaseDetailModel()const
{
	return domainBaseDetailModel_;
}

