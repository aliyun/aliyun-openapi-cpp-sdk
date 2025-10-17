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

#include <alibabacloud/polardb/model/DescribeGlobalDataNetworkListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeGlobalDataNetworkListResult::DescribeGlobalDataNetworkListResult() :
	ServiceResult()
{}

DescribeGlobalDataNetworkListResult::DescribeGlobalDataNetworkListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalDataNetworkListResult::~DescribeGlobalDataNetworkListResult()
{}

void DescribeGlobalDataNetworkListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto itemsNode = value["Items"];
	auto allNetworksNode = itemsNode["Networks"]["Network"];
	for (auto itemsNodeNetworksNetwork : allNetworksNode)
	{
		Items::Network networkObject;
		if(!itemsNodeNetworksNetwork["NetworkId"].isNull())
			networkObject.networkId = itemsNodeNetworksNetwork["NetworkId"].asString();
		if(!itemsNodeNetworksNetwork["NetworkDescription"].isNull())
			networkObject.networkDescription = itemsNodeNetworksNetwork["NetworkDescription"].asString();
		if(!itemsNodeNetworksNetwork["NetworkStatus"].isNull())
			networkObject.networkStatus = itemsNodeNetworksNetwork["NetworkStatus"].asString();
		if(!itemsNodeNetworksNetwork["CreateTime"].isNull())
			networkObject.createTime = itemsNodeNetworksNetwork["CreateTime"].asString();
		auto allChannelsNode = itemsNodeNetworksNetwork["Channels"]["Channel"];
		for (auto itemsNodeNetworksNetworkChannelsChannel : allChannelsNode)
		{
			Items::Network::Channel channelsObject;
			if(!itemsNodeNetworksNetworkChannelsChannel["ChannelId"].isNull())
				channelsObject.channelId = itemsNodeNetworksNetworkChannelsChannel["ChannelId"].asString();
			if(!itemsNodeNetworksNetworkChannelsChannel["ChannelStatus"].isNull())
				channelsObject.channelStatus = itemsNodeNetworksNetworkChannelsChannel["ChannelStatus"].asString();
			if(!itemsNodeNetworksNetworkChannelsChannel["Progress"].isNull())
				channelsObject.progress = itemsNodeNetworksNetworkChannelsChannel["Progress"].asString();
			if(!itemsNodeNetworksNetworkChannelsChannel["FreezeSourceDuringSync"].isNull())
				channelsObject.freezeSourceDuringSync = itemsNodeNetworksNetworkChannelsChannel["FreezeSourceDuringSync"].asString() == "true";
			networkObject.channels.push_back(channelsObject);
		}
		auto networkTopologyNode = value["NetworkTopology"];
		auto allSourcesNode = networkTopologyNode["Sources"]["Source"];
		for (auto networkTopologyNodeSourcesSource : allSourcesNode)
		{
			Items::Network::NetworkTopology::Source sourceObject;
			if(!networkTopologyNodeSourcesSource["SourceFileSystemPath"].isNull())
				sourceObject.sourceFileSystemPath = networkTopologyNodeSourcesSource["SourceFileSystemPath"].asString();
			if(!networkTopologyNodeSourcesSource["SourceType"].isNull())
				sourceObject.sourceType = networkTopologyNodeSourcesSource["SourceType"].asString();
			if(!networkTopologyNodeSourcesSource["SourceRegion"].isNull())
				sourceObject.sourceRegion = networkTopologyNodeSourcesSource["SourceRegion"].asString();
			if(!networkTopologyNodeSourcesSource["SourceId"].isNull())
				sourceObject.sourceId = networkTopologyNodeSourcesSource["SourceId"].asString();
			networkObject.networkTopology.sources.push_back(sourceObject);
		}
		auto allDestinationsNode = networkTopologyNode["Destinations"]["Destination"];
		for (auto networkTopologyNodeDestinationsDestination : allDestinationsNode)
		{
			Items::Network::NetworkTopology::Destination destinationObject;
			if(!networkTopologyNodeDestinationsDestination["DestinationFileSystemPath"].isNull())
				destinationObject.destinationFileSystemPath = networkTopologyNodeDestinationsDestination["DestinationFileSystemPath"].asString();
			if(!networkTopologyNodeDestinationsDestination["DestinationRegion"].isNull())
				destinationObject.destinationRegion = networkTopologyNodeDestinationsDestination["DestinationRegion"].asString();
			if(!networkTopologyNodeDestinationsDestination["DestinationType"].isNull())
				destinationObject.destinationType = networkTopologyNodeDestinationsDestination["DestinationType"].asString();
			if(!networkTopologyNodeDestinationsDestination["DestinationId"].isNull())
				destinationObject.destinationId = networkTopologyNodeDestinationsDestination["DestinationId"].asString();
			networkObject.networkTopology.destinations.push_back(destinationObject);
		}
		items_.networks.push_back(networkObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = value["TotalRecordCount"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = value["PageRecordCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string DescribeGlobalDataNetworkListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeGlobalDataNetworkListResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeGlobalDataNetworkListResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeGlobalDataNetworkListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeGlobalDataNetworkListResult::getMaxResults()const
{
	return maxResults_;
}

DescribeGlobalDataNetworkListResult::Items DescribeGlobalDataNetworkListResult::getItems()const
{
	return items_;
}

