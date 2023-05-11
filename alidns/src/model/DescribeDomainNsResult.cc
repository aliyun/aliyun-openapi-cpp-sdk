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

#include <alibabacloud/alidns/model/DescribeDomainNsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainNsResult::DescribeDomainNsResult() :
	ServiceResult()
{}

DescribeDomainNsResult::DescribeDomainNsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainNsResult::~DescribeDomainNsResult()
{}

void DescribeDomainNsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExpectDnsServers = value["ExpectDnsServers"]["ExpectDnsServer"];
	for (const auto &item : allExpectDnsServers)
		expectDnsServers_.push_back(item.asString());
	auto allDnsServers = value["DnsServers"]["DnsServer"];
	for (const auto &item : allDnsServers)
		dnsServers_.push_back(item.asString());
	if(!value["AllAliDns"].isNull())
		allAliDns_ = value["AllAliDns"].asString() == "true";
	if(!value["IncludeAliDns"].isNull())
		includeAliDns_ = value["IncludeAliDns"].asString() == "true";
	if(!value["DetectFailedReasonCode"].isNull())
		detectFailedReasonCode_ = value["DetectFailedReasonCode"].asString();

}

bool DescribeDomainNsResult::getAllAliDns()const
{
	return allAliDns_;
}

std::vector<std::string> DescribeDomainNsResult::getExpectDnsServers()const
{
	return expectDnsServers_;
}

std::vector<std::string> DescribeDomainNsResult::getDnsServers()const
{
	return dnsServers_;
}

bool DescribeDomainNsResult::getIncludeAliDns()const
{
	return includeAliDns_;
}

std::string DescribeDomainNsResult::getDetectFailedReasonCode()const
{
	return detectFailedReasonCode_;
}

