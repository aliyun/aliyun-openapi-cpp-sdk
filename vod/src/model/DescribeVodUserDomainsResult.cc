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

#include <alibabacloud/vod/model/DescribeVodUserDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodUserDomainsResult::DescribeVodUserDomainsResult() :
	ServiceResult()
{}

DescribeVodUserDomainsResult::DescribeVodUserDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodUserDomainsResult::~DescribeVodUserDomainsResult()
{}

void DescribeVodUserDomainsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomains = value["Domains"]["PageData"];
	for (auto value : allDomains)
	{
		PageData domainsObject;
		if(!value["DomainName"].isNull())
			domainsObject.domainName = value["DomainName"].asString();
		if(!value["Cname"].isNull())
			domainsObject.cname = value["Cname"].asString();
		if(!value["CdnType"].isNull())
			domainsObject.cdnType = value["CdnType"].asString();
		if(!value["DomainStatus"].isNull())
			domainsObject.domainStatus = value["DomainStatus"].asString();
		if(!value["GmtCreated"].isNull())
			domainsObject.gmtCreated = value["GmtCreated"].asString();
		if(!value["GmtModified"].isNull())
			domainsObject.gmtModified = value["GmtModified"].asString();
		if(!value["Description"].isNull())
			domainsObject.description = value["Description"].asString();
		if(!value["SslProtocol"].isNull())
			domainsObject.sslProtocol = value["SslProtocol"].asString();
		if(!value["Weight"].isNull())
			domainsObject.weight = value["Weight"].asString();
		if(!value["Sandbox"].isNull())
			domainsObject.sandbox = value["Sandbox"].asString();
		auto allSources = value["Sources"]["Source"];
		for (auto value : allSources)
		{
			PageData::Source sourcesObject;
			if(!value["Type"].isNull())
				sourcesObject.type = value["Type"].asString();
			if(!value["Content"].isNull())
				sourcesObject.content = value["Content"].asString();
			if(!value["Port"].isNull())
				sourcesObject.port = std::stoi(value["Port"].asString());
			if(!value["Priority"].isNull())
				sourcesObject.priority = value["Priority"].asString();
			domainsObject.sources.push_back(sourcesObject);
		}
		domains_.push_back(domainsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeVodUserDomainsResult::PageData> DescribeVodUserDomainsResult::getDomains()const
{
	return domains_;
}

long DescribeVodUserDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeVodUserDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeVodUserDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

