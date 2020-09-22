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

#include <alibabacloud/vs/model/DescribeVsDomainDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsDomainDetailResult::DescribeVsDomainDetailResult() :
	ServiceResult()
{}

DescribeVsDomainDetailResult::DescribeVsDomainDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsDomainDetailResult::~DescribeVsDomainDetailResult()
{}

void DescribeVsDomainDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto domainConfigNode = value["DomainConfig"];
	if(!domainConfigNode["GmtCreated"].isNull())
		domainConfig_.gmtCreated = domainConfigNode["GmtCreated"].asString();
	if(!domainConfigNode["GmtModified"].isNull())
		domainConfig_.gmtModified = domainConfigNode["GmtModified"].asString();
	if(!domainConfigNode["DomainStatus"].isNull())
		domainConfig_.domainStatus = domainConfigNode["DomainStatus"].asString();
	if(!domainConfigNode["Cname"].isNull())
		domainConfig_.cname = domainConfigNode["Cname"].asString();
	if(!domainConfigNode["DomainName"].isNull())
		domainConfig_.domainName = domainConfigNode["DomainName"].asString();
	if(!domainConfigNode["DomainType"].isNull())
		domainConfig_.domainType = domainConfigNode["DomainType"].asString();
	if(!domainConfigNode["Region"].isNull())
		domainConfig_.region = domainConfigNode["Region"].asString();
	if(!domainConfigNode["Description"].isNull())
		domainConfig_.description = domainConfigNode["Description"].asString();
	if(!domainConfigNode["SSLProtocol"].isNull())
		domainConfig_.sSLProtocol = domainConfigNode["SSLProtocol"].asString();
	if(!domainConfigNode["Scope"].isNull())
		domainConfig_.scope = domainConfigNode["Scope"].asString();

}

DescribeVsDomainDetailResult::DomainConfig DescribeVsDomainDetailResult::getDomainConfig()const
{
	return domainConfig_;
}

