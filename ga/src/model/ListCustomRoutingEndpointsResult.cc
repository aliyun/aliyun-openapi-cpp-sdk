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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListCustomRoutingEndpointsResult::ListCustomRoutingEndpointsResult() :
	ServiceResult()
{}

ListCustomRoutingEndpointsResult::ListCustomRoutingEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomRoutingEndpointsResult::~ListCustomRoutingEndpointsResult()
{}

void ListCustomRoutingEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointsNode = value["Endpoints"]["endpointsItem"];
	for (auto valueEndpointsendpointsItem : allEndpointsNode)
	{
		EndpointsItem endpointsObject;
		if(!valueEndpointsendpointsItem["AcceleratorId"].isNull())
			endpointsObject.acceleratorId = valueEndpointsendpointsItem["AcceleratorId"].asString();
		if(!valueEndpointsendpointsItem["ListenerId"].isNull())
			endpointsObject.listenerId = valueEndpointsendpointsItem["ListenerId"].asString();
		if(!valueEndpointsendpointsItem["EndpointGroupId"].isNull())
			endpointsObject.endpointGroupId = valueEndpointsendpointsItem["EndpointGroupId"].asString();
		if(!valueEndpointsendpointsItem["EndpointId"].isNull())
			endpointsObject.endpointId = valueEndpointsendpointsItem["EndpointId"].asString();
		if(!valueEndpointsendpointsItem["Type"].isNull())
			endpointsObject.type = valueEndpointsendpointsItem["Type"].asString();
		if(!valueEndpointsendpointsItem["Endpoint"].isNull())
			endpointsObject.endpoint = valueEndpointsendpointsItem["Endpoint"].asString();
		if(!valueEndpointsendpointsItem["TrafficToEndpointPolicy"].isNull())
			endpointsObject.trafficToEndpointPolicy = valueEndpointsendpointsItem["TrafficToEndpointPolicy"].asString();
		endpoints_.push_back(endpointsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListCustomRoutingEndpointsResult::EndpointsItem> ListCustomRoutingEndpointsResult::getEndpoints()const
{
	return endpoints_;
}

int ListCustomRoutingEndpointsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCustomRoutingEndpointsResult::getPageSize()const
{
	return pageSize_;
}

int ListCustomRoutingEndpointsResult::getPageNumber()const
{
	return pageNumber_;
}

