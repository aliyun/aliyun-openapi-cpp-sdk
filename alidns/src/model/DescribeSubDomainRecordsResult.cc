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

#include <alibabacloud/alidns/model/DescribeSubDomainRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeSubDomainRecordsResult::DescribeSubDomainRecordsResult() :
	ServiceResult()
{}

DescribeSubDomainRecordsResult::DescribeSubDomainRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSubDomainRecordsResult::~DescribeSubDomainRecordsResult()
{}

void DescribeSubDomainRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainRecordsNode = value["DomainRecords"]["Record"];
	for (auto valueDomainRecordsRecord : allDomainRecordsNode)
	{
		Record domainRecordsObject;
		if(!valueDomainRecordsRecord["Status"].isNull())
			domainRecordsObject.status = valueDomainRecordsRecord["Status"].asString();
		if(!valueDomainRecordsRecord["Type"].isNull())
			domainRecordsObject.type = valueDomainRecordsRecord["Type"].asString();
		if(!valueDomainRecordsRecord["Weight"].isNull())
			domainRecordsObject.weight = std::stoi(valueDomainRecordsRecord["Weight"].asString());
		if(!valueDomainRecordsRecord["Value"].isNull())
			domainRecordsObject.value = valueDomainRecordsRecord["Value"].asString();
		if(!valueDomainRecordsRecord["TTL"].isNull())
			domainRecordsObject.tTL = std::stol(valueDomainRecordsRecord["TTL"].asString());
		if(!valueDomainRecordsRecord["Line"].isNull())
			domainRecordsObject.line = valueDomainRecordsRecord["Line"].asString();
		if(!valueDomainRecordsRecord["RecordId"].isNull())
			domainRecordsObject.recordId = valueDomainRecordsRecord["RecordId"].asString();
		if(!valueDomainRecordsRecord["Priority"].isNull())
			domainRecordsObject.priority = std::stol(valueDomainRecordsRecord["Priority"].asString());
		if(!valueDomainRecordsRecord["RR"].isNull())
			domainRecordsObject.rR = valueDomainRecordsRecord["RR"].asString();
		if(!valueDomainRecordsRecord["DomainName"].isNull())
			domainRecordsObject.domainName = valueDomainRecordsRecord["DomainName"].asString();
		if(!valueDomainRecordsRecord["Locked"].isNull())
			domainRecordsObject.locked = valueDomainRecordsRecord["Locked"].asString() == "true";
		if(!valueDomainRecordsRecord["Remark"].isNull())
			domainRecordsObject.remark = valueDomainRecordsRecord["Remark"].asString();
		domainRecords_.push_back(domainRecordsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribeSubDomainRecordsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeSubDomainRecordsResult::Record> DescribeSubDomainRecordsResult::getDomainRecords()const
{
	return domainRecords_;
}

long DescribeSubDomainRecordsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeSubDomainRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

