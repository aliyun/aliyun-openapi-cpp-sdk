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

#include <alibabacloud/alidns/model/DescribePdnsAccountSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsAccountSummaryResult::DescribePdnsAccountSummaryResult() :
	ServiceResult()
{}

DescribePdnsAccountSummaryResult::DescribePdnsAccountSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsAccountSummaryResult::~DescribePdnsAccountSummaryResult()
{}

void DescribePdnsAccountSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UserId"].isNull())
		data_.userId = std::stol(dataNode["UserId"].asString());
	if(!dataNode["DomainCount"].isNull())
		data_.domainCount = std::stol(dataNode["DomainCount"].asString());
	if(!dataNode["SubDomainCount"].isNull())
		data_.subDomainCount = std::stol(dataNode["SubDomainCount"].asString());
	if(!dataNode["HttpCount"].isNull())
		data_.httpCount = std::stol(dataNode["HttpCount"].asString());
	if(!dataNode["HttpsCount"].isNull())
		data_.httpsCount = std::stol(dataNode["HttpsCount"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	if(!dataNode["ThreatCount"].isNull())
		data_.threatCount = std::stol(dataNode["ThreatCount"].asString());

}

DescribePdnsAccountSummaryResult::Data DescribePdnsAccountSummaryResult::getData()const
{
	return data_;
}

