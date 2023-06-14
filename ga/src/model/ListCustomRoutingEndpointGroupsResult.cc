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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListCustomRoutingEndpointGroupsResult::ListCustomRoutingEndpointGroupsResult() :
	ServiceResult()
{}

ListCustomRoutingEndpointGroupsResult::ListCustomRoutingEndpointGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomRoutingEndpointGroupsResult::~ListCustomRoutingEndpointGroupsResult()
{}

void ListCustomRoutingEndpointGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointGroupsNode = value["EndpointGroups"]["endpointGroupsItem"];
	for (auto valueEndpointGroupsendpointGroupsItem : allEndpointGroupsNode)
	{
		EndpointGroupsItem endpointGroupsObject;
		if(!valueEndpointGroupsendpointGroupsItem["AcceleratorId"].isNull())
			endpointGroupsObject.acceleratorId = valueEndpointGroupsendpointGroupsItem["AcceleratorId"].asString();
		if(!valueEndpointGroupsendpointGroupsItem["ListenerId"].isNull())
			endpointGroupsObject.listenerId = valueEndpointGroupsendpointGroupsItem["ListenerId"].asString();
		if(!valueEndpointGroupsendpointGroupsItem["EndpointGroupId"].isNull())
			endpointGroupsObject.endpointGroupId = valueEndpointGroupsendpointGroupsItem["EndpointGroupId"].asString();
		if(!valueEndpointGroupsendpointGroupsItem["Name"].isNull())
			endpointGroupsObject.name = valueEndpointGroupsendpointGroupsItem["Name"].asString();
		if(!valueEndpointGroupsendpointGroupsItem["Description"].isNull())
			endpointGroupsObject.description = valueEndpointGroupsendpointGroupsItem["Description"].asString();
		if(!valueEndpointGroupsendpointGroupsItem["EndpointGroupRegion"].isNull())
			endpointGroupsObject.endpointGroupRegion = valueEndpointGroupsendpointGroupsItem["EndpointGroupRegion"].asString();
		if(!valueEndpointGroupsendpointGroupsItem["State"].isNull())
			endpointGroupsObject.state = valueEndpointGroupsendpointGroupsItem["State"].asString();
		auto allEndpointGroupIpList = value["EndpointGroupIpList"]["endpointGroupIpList"];
		for (auto value : allEndpointGroupIpList)
			endpointGroupsObject.endpointGroupIpList.push_back(value.asString());
		auto allEndpointGroupUnconfirmedIpList = value["EndpointGroupUnconfirmedIpList"]["endpointGroupUnconfirmedIpList"];
		for (auto value : allEndpointGroupUnconfirmedIpList)
			endpointGroupsObject.endpointGroupUnconfirmedIpList.push_back(value.asString());
		endpointGroups_.push_back(endpointGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListCustomRoutingEndpointGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCustomRoutingEndpointGroupsResult::getPageSize()const
{
	return pageSize_;
}

int ListCustomRoutingEndpointGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCustomRoutingEndpointGroupsResult::EndpointGroupsItem> ListCustomRoutingEndpointGroupsResult::getEndpointGroups()const
{
	return endpointGroups_;
}

