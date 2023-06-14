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

#include <alibabacloud/ga/model/ListIpSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListIpSetsResult::ListIpSetsResult() :
	ServiceResult()
{}

ListIpSetsResult::ListIpSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIpSetsResult::~ListIpSetsResult()
{}

void ListIpSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpSetsNode = value["IpSets"]["IpSetsItem"];
	for (auto valueIpSetsIpSetsItem : allIpSetsNode)
	{
		IpSetsItem ipSetsObject;
		if(!valueIpSetsIpSetsItem["AccelerateRegionId"].isNull())
			ipSetsObject.accelerateRegionId = valueIpSetsIpSetsItem["AccelerateRegionId"].asString();
		if(!valueIpSetsIpSetsItem["IpVersion"].isNull())
			ipSetsObject.ipVersion = valueIpSetsIpSetsItem["IpVersion"].asString();
		if(!valueIpSetsIpSetsItem["Bandwidth"].isNull())
			ipSetsObject.bandwidth = std::stoi(valueIpSetsIpSetsItem["Bandwidth"].asString());
		if(!valueIpSetsIpSetsItem["IspType"].isNull())
			ipSetsObject.ispType = valueIpSetsIpSetsItem["IspType"].asString();
		if(!valueIpSetsIpSetsItem["State"].isNull())
			ipSetsObject.state = valueIpSetsIpSetsItem["State"].asString();
		if(!valueIpSetsIpSetsItem["IpSetId"].isNull())
			ipSetsObject.ipSetId = valueIpSetsIpSetsItem["IpSetId"].asString();
		auto allIpAddressList = value["IpAddressList"]["IpAddressList"];
		for (auto value : allIpAddressList)
			ipSetsObject.ipAddressList.push_back(value.asString());
		ipSets_.push_back(ipSetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListIpSetsResult::getTotalCount()const
{
	return totalCount_;
}

int ListIpSetsResult::getPageSize()const
{
	return pageSize_;
}

int ListIpSetsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListIpSetsResult::IpSetsItem> ListIpSetsResult::getIpSets()const
{
	return ipSets_;
}

