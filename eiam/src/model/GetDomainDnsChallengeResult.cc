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

#include <alibabacloud/eiam/model/GetDomainDnsChallengeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetDomainDnsChallengeResult::GetDomainDnsChallengeResult() :
	ServiceResult()
{}

GetDomainDnsChallengeResult::GetDomainDnsChallengeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDomainDnsChallengeResult::~GetDomainDnsChallengeResult()
{}

void GetDomainDnsChallengeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto domainDnsChallengeNode = value["DomainDnsChallenge"];
	if(!domainDnsChallengeNode["DnsChallengeName"].isNull())
		domainDnsChallenge_.dnsChallengeName = domainDnsChallengeNode["DnsChallengeName"].asString();
	if(!domainDnsChallengeNode["DnsType"].isNull())
		domainDnsChallenge_.dnsType = domainDnsChallengeNode["DnsType"].asString();
	if(!domainDnsChallengeNode["DnsChallengeValue"].isNull())
		domainDnsChallenge_.dnsChallengeValue = domainDnsChallengeNode["DnsChallengeValue"].asString();

}

GetDomainDnsChallengeResult::DomainDnsChallenge GetDomainDnsChallengeResult::getDomainDnsChallenge()const
{
	return domainDnsChallenge_;
}

