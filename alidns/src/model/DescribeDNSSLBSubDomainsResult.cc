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

#include <alibabacloud/alidns/model/DescribeDNSSLBSubDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDNSSLBSubDomainsResult::DescribeDNSSLBSubDomainsResult() :
	ServiceResult()
{}

DescribeDNSSLBSubDomainsResult::DescribeDNSSLBSubDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDNSSLBSubDomainsResult::~DescribeDNSSLBSubDomainsResult()
{}

void DescribeDNSSLBSubDomainsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSlbSubDomains = value["SlbSubDomains"]["SlbSubDomain"];
	for (auto value : allSlbSubDomains)
	{
		SlbSubDomain slbSubDomainsObject;
		if(!value["SubDomain"].isNull())
			slbSubDomainsObject.subDomain = value["SubDomain"].asString();
		if(!value["RecordCount"].isNull())
			slbSubDomainsObject.recordCount = std::stol(value["RecordCount"].asString());
		if(!value["Open"].isNull())
			slbSubDomainsObject.open = value["Open"].asString() == "true";
		if(!value["Type"].isNull())
			slbSubDomainsObject.type = value["Type"].asString();
		slbSubDomains_.push_back(slbSubDomainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeDNSSLBSubDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDNSSLBSubDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDNSSLBSubDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDNSSLBSubDomainsResult::SlbSubDomain> DescribeDNSSLBSubDomainsResult::getSlbSubDomains()const
{
	return slbSubDomains_;
}

