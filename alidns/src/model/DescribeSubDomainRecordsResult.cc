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
	auto allDomainRecords = value["DomainRecords"]["Record"];
	for (auto value : allDomainRecords)
	{
		Record domainRecordsObject;
		if(!value["DomainName"].isNull())
			domainRecordsObject.domainName = value["DomainName"].asString();
		if(!value["RecordId"].isNull())
			domainRecordsObject.recordId = value["RecordId"].asString();
		if(!value["RR"].isNull())
			domainRecordsObject.rR = value["RR"].asString();
		if(!value["Type"].isNull())
			domainRecordsObject.type = value["Type"].asString();
		if(!value["Value"].isNull())
			domainRecordsObject.value = value["Value"].asString();
		if(!value["TTL"].isNull())
			domainRecordsObject.tTL = std::stol(value["TTL"].asString());
		if(!value["Priority"].isNull())
			domainRecordsObject.priority = std::stol(value["Priority"].asString());
		if(!value["Line"].isNull())
			domainRecordsObject.line = value["Line"].asString();
		if(!value["Status"].isNull())
			domainRecordsObject.status = value["Status"].asString();
		if(!value["Locked"].isNull())
			domainRecordsObject.locked = value["Locked"].asString() == "true";
		if(!value["Weight"].isNull())
			domainRecordsObject.weight = std::stoi(value["Weight"].asString());
		domainRecords_.push_back(domainRecordsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

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

