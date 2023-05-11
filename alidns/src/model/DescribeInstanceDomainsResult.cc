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

#include <alibabacloud/alidns/model/DescribeInstanceDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeInstanceDomainsResult::DescribeInstanceDomainsResult() :
	ServiceResult()
{}

DescribeInstanceDomainsResult::DescribeInstanceDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceDomainsResult::~DescribeInstanceDomainsResult()
{}

void DescribeInstanceDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceDomainsNode = value["InstanceDomains"]["InstanceDomain"];
	for (auto valueInstanceDomainsInstanceDomain : allInstanceDomainsNode)
	{
		InstanceDomain instanceDomainsObject;
		if(!valueInstanceDomainsInstanceDomain["CreateTime"].isNull())
			instanceDomainsObject.createTime = valueInstanceDomainsInstanceDomain["CreateTime"].asString();
		if(!valueInstanceDomainsInstanceDomain["DomainName"].isNull())
			instanceDomainsObject.domainName = valueInstanceDomainsInstanceDomain["DomainName"].asString();
		if(!valueInstanceDomainsInstanceDomain["CreateTimestamp"].isNull())
			instanceDomainsObject.createTimestamp = std::stol(valueInstanceDomainsInstanceDomain["CreateTimestamp"].asString());
		instanceDomains_.push_back(instanceDomainsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

int DescribeInstanceDomainsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceDomainsResult::InstanceDomain> DescribeInstanceDomainsResult::getInstanceDomains()const
{
	return instanceDomains_;
}

int DescribeInstanceDomainsResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeInstanceDomainsResult::getTotalItems()const
{
	return totalItems_;
}

