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

#include <alibabacloud/cdn/model/DescribeCdnWafDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnWafDomainResult::DescribeCdnWafDomainResult() :
	ServiceResult()
{}

DescribeCdnWafDomainResult::DescribeCdnWafDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnWafDomainResult::~DescribeCdnWafDomainResult()
{}

void DescribeCdnWafDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOutPutDomainsNode = value["OutPutDomains"]["OutPutDomain"];
	for (auto valueOutPutDomainsOutPutDomain : allOutPutDomainsNode)
	{
		OutPutDomain outPutDomainsObject;
		if(!valueOutPutDomainsOutPutDomain["AclStatus"].isNull())
			outPutDomainsObject.aclStatus = valueOutPutDomainsOutPutDomain["AclStatus"].asString();
		if(!valueOutPutDomainsOutPutDomain["Status"].isNull())
			outPutDomainsObject.status = valueOutPutDomainsOutPutDomain["Status"].asString();
		if(!valueOutPutDomainsOutPutDomain["Domain"].isNull())
			outPutDomainsObject.domain = valueOutPutDomainsOutPutDomain["Domain"].asString();
		if(!valueOutPutDomainsOutPutDomain["CcStatus"].isNull())
			outPutDomainsObject.ccStatus = valueOutPutDomainsOutPutDomain["CcStatus"].asString();
		if(!valueOutPutDomainsOutPutDomain["WafStatus"].isNull())
			outPutDomainsObject.wafStatus = valueOutPutDomainsOutPutDomain["WafStatus"].asString();
		outPutDomains_.push_back(outPutDomainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCdnWafDomainResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCdnWafDomainResult::OutPutDomain> DescribeCdnWafDomainResult::getOutPutDomains()const
{
	return outPutDomains_;
}

