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

#include <alibabacloud/httpdns/model/DescribeDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Httpdns;
using namespace AlibabaCloud::Httpdns::Model;

DescribeDomainsResult::DescribeDomainsResult() :
	ServiceResult()
{}

DescribeDomainsResult::DescribeDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainsResult::~DescribeDomainsResult()
{}

void DescribeDomainsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomains = value["Domains"]["Domain"];
	for (auto value : allDomains)
	{
		Domain domainsObject;
		if(!value["DomainName"].isNull())
			domainsObject.domainName = value["DomainName"].asString();
		domains_.push_back(domainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::vector<DescribeDomainsResult::Domain> DescribeDomainsResult::getDomains()const
{
	return domains_;
}

long DescribeDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

