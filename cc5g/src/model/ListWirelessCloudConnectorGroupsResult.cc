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

#include <alibabacloud/cc5g/model/ListWirelessCloudConnectorGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListWirelessCloudConnectorGroupsResult::ListWirelessCloudConnectorGroupsResult() :
	ServiceResult()
{}

ListWirelessCloudConnectorGroupsResult::ListWirelessCloudConnectorGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWirelessCloudConnectorGroupsResult::~ListWirelessCloudConnectorGroupsResult()
{}

void ListWirelessCloudConnectorGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWirelessCloudConnectorGroupsNode = value["WirelessCloudConnectorGroups"]["WirelessCloudConnectorGroup"];
	for (auto valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup : allWirelessCloudConnectorGroupsNode)
	{
		WirelessCloudConnectorGroup wirelessCloudConnectorGroupsObject;
		if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["WirelessCloudConnectorGroupId"].isNull())
			wirelessCloudConnectorGroupsObject.wirelessCloudConnectorGroupId = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["WirelessCloudConnectorGroupId"].asString();
		if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["Status"].isNull())
			wirelessCloudConnectorGroupsObject.status = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["Status"].asString();
		if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["Name"].isNull())
			wirelessCloudConnectorGroupsObject.name = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["Name"].asString();
		if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["Description"].isNull())
			wirelessCloudConnectorGroupsObject.description = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["Description"].asString();
		if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["RegionId"].isNull())
			wirelessCloudConnectorGroupsObject.regionId = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["RegionId"].asString();
		if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["CreateTime"].isNull())
			wirelessCloudConnectorGroupsObject.createTime = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["CreateTime"].asString();
		auto allWirelessCloudConnectorsNode = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroup["WirelessCloudConnectors"]["WirelessCloudConnector"];
		for (auto valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector : allWirelessCloudConnectorsNode)
		{
			WirelessCloudConnectorGroup::WirelessCloudConnector wirelessCloudConnectorsObject;
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorId"].isNull())
				wirelessCloudConnectorsObject.wirelessCloudConnectorId = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorId"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["Status"].isNull())
				wirelessCloudConnectorsObject.status = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["Status"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["Name"].isNull())
				wirelessCloudConnectorsObject.name = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["Name"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["Description"].isNull())
				wirelessCloudConnectorsObject.description = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["Description"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["RegionId"].isNull())
				wirelessCloudConnectorsObject.regionId = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["RegionId"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["UseCase"].isNull())
				wirelessCloudConnectorsObject.useCase = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["UseCase"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["DataPackageId"].isNull())
				wirelessCloudConnectorsObject.dataPackageId = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["DataPackageId"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["DataPackageType"].isNull())
				wirelessCloudConnectorsObject.dataPackageType = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["DataPackageType"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["CardCount"].isNull())
				wirelessCloudConnectorsObject.cardCount = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["CardCount"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["CreateTime"].isNull())
				wirelessCloudConnectorsObject.createTime = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["CreateTime"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["BusinessType"].isNull())
				wirelessCloudConnectorsObject.businessType = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["BusinessType"].asString();
			if(!valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["ServiceType"].isNull())
				wirelessCloudConnectorsObject.serviceType = valueWirelessCloudConnectorGroupsWirelessCloudConnectorGroupWirelessCloudConnectorsWirelessCloudConnector["ServiceType"].asString();
			wirelessCloudConnectorGroupsObject.wirelessCloudConnectors.push_back(wirelessCloudConnectorsObject);
		}
		wirelessCloudConnectorGroups_.push_back(wirelessCloudConnectorGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListWirelessCloudConnectorGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListWirelessCloudConnectorGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListWirelessCloudConnectorGroupsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListWirelessCloudConnectorGroupsResult::WirelessCloudConnectorGroup> ListWirelessCloudConnectorGroupsResult::getWirelessCloudConnectorGroups()const
{
	return wirelessCloudConnectorGroups_;
}

