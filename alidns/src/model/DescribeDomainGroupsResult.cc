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

#include <alibabacloud/alidns/model/DescribeDomainGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainGroupsResult::DescribeDomainGroupsResult() :
	ServiceResult()
{}

DescribeDomainGroupsResult::DescribeDomainGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainGroupsResult::~DescribeDomainGroupsResult()
{}

void DescribeDomainGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainGroupsNode = value["DomainGroups"]["DomainGroup"];
	for (auto valueDomainGroupsDomainGroup : allDomainGroupsNode)
	{
		DomainGroup domainGroupsObject;
		if(!valueDomainGroupsDomainGroup["GroupId"].isNull())
			domainGroupsObject.groupId = valueDomainGroupsDomainGroup["GroupId"].asString();
		if(!valueDomainGroupsDomainGroup["GroupName"].isNull())
			domainGroupsObject.groupName = valueDomainGroupsDomainGroup["GroupName"].asString();
		if(!valueDomainGroupsDomainGroup["DomainCount"].isNull())
			domainGroupsObject.domainCount = std::stol(valueDomainGroupsDomainGroup["DomainCount"].asString());
		domainGroups_.push_back(domainGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

std::vector<DescribeDomainGroupsResult::DomainGroup> DescribeDomainGroupsResult::getDomainGroups()const
{
	return domainGroups_;
}

long DescribeDomainGroupsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDomainGroupsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDomainGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

