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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["PageData"];
	for (auto valueDomainsPageData : allDomainsNode)
	{
		PageData domainsObject;
		if(!valueDomainsPageData["DomainName"].isNull())
			domainsObject.domainName = valueDomainsPageData["DomainName"].asString();
		if(!valueDomainsPageData["Cname"].isNull())
			domainsObject.cname = valueDomainsPageData["Cname"].asString();
		if(!valueDomainsPageData["CdnType"].isNull())
			domainsObject.cdnType = valueDomainsPageData["CdnType"].asString();
		if(!valueDomainsPageData["DomainStatus"].isNull())
			domainsObject.domainStatus = valueDomainsPageData["DomainStatus"].asString();
		if(!valueDomainsPageData["GmtCreated"].isNull())
			domainsObject.gmtCreated = valueDomainsPageData["GmtCreated"].asString();
		if(!valueDomainsPageData["GmtModified"].isNull())
			domainsObject.gmtModified = valueDomainsPageData["GmtModified"].asString();
		if(!valueDomainsPageData["Description"].isNull())
			domainsObject.description = valueDomainsPageData["Description"].asString();
		if(!valueDomainsPageData["SslProtocol"].isNull())
			domainsObject.sslProtocol = valueDomainsPageData["SslProtocol"].asString();
		if(!valueDomainsPageData["Weight"].isNull())
			domainsObject.weight = valueDomainsPageData["Weight"].asString();
		if(!valueDomainsPageData["Sandbox"].isNull())
			domainsObject.sandbox = valueDomainsPageData["Sandbox"].asString();
		auto allSourcesNode = allDomainsNode["Sources"]["Source"];
		for (auto allDomainsNodeSourcesSource : allSourcesNode)
		{
			PageData::Source sourcesObject;
			if(!allDomainsNodeSourcesSource["Type"].isNull())
				sourcesObject.type = allDomainsNodeSourcesSource["Type"].asString();
			if(!allDomainsNodeSourcesSource["Content"].isNull())
				sourcesObject.content = allDomainsNodeSourcesSource["Content"].asString();
			if(!allDomainsNodeSourcesSource["Port"].isNull())
				sourcesObject.port = std::stoi(allDomainsNodeSourcesSource["Port"].asString());
			if(!allDomainsNodeSourcesSource["Priority"].isNull())
				sourcesObject.priority = allDomainsNodeSourcesSource["Priority"].asString();
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

