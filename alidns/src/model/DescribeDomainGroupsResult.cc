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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomainGroups = value["DomainGroups"]["DomainGroup"];
	for (auto value : allDomainGroups)
	{
		DomainGroup domainGroupsObject;
		if(!value["GroupId"].isNull())
			domainGroupsObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			domainGroupsObject.groupName = value["GroupName"].asString();
		if(!value["DomainCount"].isNull())
			domainGroupsObject.domainCount = std::stol(value["DomainCount"].asString());
		domainGroups_.push_back(domainGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

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

