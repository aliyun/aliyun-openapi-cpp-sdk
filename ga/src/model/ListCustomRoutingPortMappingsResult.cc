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

#include <alibabacloud/ga/model/ListCustomRoutingPortMappingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListCustomRoutingPortMappingsResult::ListCustomRoutingPortMappingsResult() :
	ServiceResult()
{}

ListCustomRoutingPortMappingsResult::ListCustomRoutingPortMappingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomRoutingPortMappingsResult::~ListCustomRoutingPortMappingsResult()
{}

void ListCustomRoutingPortMappingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortMappingsNode = value["PortMappings"]["portMappingsItem"];
	for (auto valuePortMappingsportMappingsItem : allPortMappingsNode)
	{
		PortMappingsItem portMappingsObject;
		if(!valuePortMappingsportMappingsItem["AcceleratorId"].isNull())
			portMappingsObject.acceleratorId = valuePortMappingsportMappingsItem["AcceleratorId"].asString();
		if(!valuePortMappingsportMappingsItem["ListenerId"].isNull())
			portMappingsObject.listenerId = valuePortMappingsportMappingsItem["ListenerId"].asString();
		if(!valuePortMappingsportMappingsItem["EndpointGroupId"].isNull())
			portMappingsObject.endpointGroupId = valuePortMappingsportMappingsItem["EndpointGroupId"].asString();
		if(!valuePortMappingsportMappingsItem["EndpointId"].isNull())
			portMappingsObject.endpointId = valuePortMappingsportMappingsItem["EndpointId"].asString();
		if(!valuePortMappingsportMappingsItem["EndpointGroupRegion"].isNull())
			portMappingsObject.endpointGroupRegion = valuePortMappingsportMappingsItem["EndpointGroupRegion"].asString();
		if(!valuePortMappingsportMappingsItem["Vswitch"].isNull())
			portMappingsObject.vswitch = valuePortMappingsportMappingsItem["Vswitch"].asString();
		if(!valuePortMappingsportMappingsItem["AcceleratorPort"].isNull())
			portMappingsObject.acceleratorPort = std::stoi(valuePortMappingsportMappingsItem["AcceleratorPort"].asString());
		if(!valuePortMappingsportMappingsItem["DestinationTrafficState"].isNull())
			portMappingsObject.destinationTrafficState = valuePortMappingsportMappingsItem["DestinationTrafficState"].asString();
		auto destinationSocketAddressNode = value["DestinationSocketAddress"];
		if(!destinationSocketAddressNode["IpAddress"].isNull())
			portMappingsObject.destinationSocketAddress.ipAddress = destinationSocketAddressNode["IpAddress"].asString();
		if(!destinationSocketAddressNode["Port"].isNull())
			portMappingsObject.destinationSocketAddress.port = std::stoi(destinationSocketAddressNode["Port"].asString());
		auto allProtocols = value["Protocols"]["protocols"];
		for (auto value : allProtocols)
			portMappingsObject.protocols.push_back(value.asString());
		portMappings_.push_back(portMappingsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListCustomRoutingPortMappingsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListCustomRoutingPortMappingsResult::PortMappingsItem> ListCustomRoutingPortMappingsResult::getPortMappings()const
{
	return portMappings_;
}

int ListCustomRoutingPortMappingsResult::getPageSize()const
{
	return pageSize_;
}

int ListCustomRoutingPortMappingsResult::getPageNumber()const
{
	return pageNumber_;
}

