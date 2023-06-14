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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointGroupDestinationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListCustomRoutingEndpointGroupDestinationsResult::ListCustomRoutingEndpointGroupDestinationsResult() :
	ServiceResult()
{}

ListCustomRoutingEndpointGroupDestinationsResult::ListCustomRoutingEndpointGroupDestinationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomRoutingEndpointGroupDestinationsResult::~ListCustomRoutingEndpointGroupDestinationsResult()
{}

void ListCustomRoutingEndpointGroupDestinationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDestinationsNode = value["Destinations"]["endpoints"];
	for (auto valueDestinationsendpoints : allDestinationsNode)
	{
		Endpoints destinationsObject;
		if(!valueDestinationsendpoints["AcceleratorId"].isNull())
			destinationsObject.acceleratorId = valueDestinationsendpoints["AcceleratorId"].asString();
		if(!valueDestinationsendpoints["ListenerId"].isNull())
			destinationsObject.listenerId = valueDestinationsendpoints["ListenerId"].asString();
		if(!valueDestinationsendpoints["EndpointGroupId"].isNull())
			destinationsObject.endpointGroupId = valueDestinationsendpoints["EndpointGroupId"].asString();
		if(!valueDestinationsendpoints["DestinationId"].isNull())
			destinationsObject.destinationId = valueDestinationsendpoints["DestinationId"].asString();
		if(!valueDestinationsendpoints["FromPort"].isNull())
			destinationsObject.fromPort = std::stoi(valueDestinationsendpoints["FromPort"].asString());
		if(!valueDestinationsendpoints["ToPort"].isNull())
			destinationsObject.toPort = std::stoi(valueDestinationsendpoints["ToPort"].asString());
		auto allProtocols = value["Protocols"]["protocols"];
		for (auto value : allProtocols)
			destinationsObject.protocols.push_back(value.asString());
		destinations_.push_back(destinationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListCustomRoutingEndpointGroupDestinationsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCustomRoutingEndpointGroupDestinationsResult::getPageSize()const
{
	return pageSize_;
}

int ListCustomRoutingEndpointGroupDestinationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCustomRoutingEndpointGroupDestinationsResult::Endpoints> ListCustomRoutingEndpointGroupDestinationsResult::getDestinations()const
{
	return destinations_;
}

