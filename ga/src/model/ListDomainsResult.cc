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

#include <alibabacloud/ga/model/ListDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListDomainsResult::ListDomainsResult() :
	ServiceResult()
{}

ListDomainsResult::ListDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDomainsResult::~ListDomainsResult()
{}

void ListDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["DomainsItem"];
	for (auto valueDomainsDomainsItem : allDomainsNode)
	{
		DomainsItem domainsObject;
		if(!valueDomainsDomainsItem["Domain"].isNull())
			domainsObject.domain = valueDomainsDomainsItem["Domain"].asString();
		if(!valueDomainsDomainsItem["State"].isNull())
			domainsObject.state = valueDomainsDomainsItem["State"].asString();
		auto allAcceleratorsNode = valueDomainsDomainsItem["Accelerators"]["AcceleratorsItem"];
		for (auto valueDomainsDomainsItemAcceleratorsAcceleratorsItem : allAcceleratorsNode)
		{
			DomainsItem::AcceleratorsItem acceleratorsObject;
			if(!valueDomainsDomainsItemAcceleratorsAcceleratorsItem["AcceleratorId"].isNull())
				acceleratorsObject.acceleratorId = valueDomainsDomainsItemAcceleratorsAcceleratorsItem["AcceleratorId"].asString();
			if(!valueDomainsDomainsItemAcceleratorsAcceleratorsItem["Name"].isNull())
				acceleratorsObject.name = valueDomainsDomainsItemAcceleratorsAcceleratorsItem["Name"].asString();
			domainsObject.accelerators.push_back(acceleratorsObject);
		}
		domains_.push_back(domainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListDomainsResult::DomainsItem> ListDomainsResult::getDomains()const
{
	return domains_;
}

int ListDomainsResult::getTotalCount()const
{
	return totalCount_;
}

int ListDomainsResult::getPageSize()const
{
	return pageSize_;
}

int ListDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

