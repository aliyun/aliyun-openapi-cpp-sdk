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

#include <alibabacloud/vpc/model/ListPublicIpAddressPoolsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListPublicIpAddressPoolsResult::ListPublicIpAddressPoolsResult() :
	ServiceResult()
{}

ListPublicIpAddressPoolsResult::ListPublicIpAddressPoolsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPublicIpAddressPoolsResult::~ListPublicIpAddressPoolsResult()
{}

void ListPublicIpAddressPoolsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPublicIpAddressPoolListNode = value["PublicIpAddressPoolList"]["PublicIpAddressPool"];
	for (auto valuePublicIpAddressPoolListPublicIpAddressPool : allPublicIpAddressPoolListNode)
	{
		PublicIpAddressPool publicIpAddressPoolListObject;
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["PublicIpAddressPoolId"].isNull())
			publicIpAddressPoolListObject.publicIpAddressPoolId = valuePublicIpAddressPoolListPublicIpAddressPool["PublicIpAddressPoolId"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["RegionId"].isNull())
			publicIpAddressPoolListObject.regionId = valuePublicIpAddressPoolListPublicIpAddressPool["RegionId"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["CreationTime"].isNull())
			publicIpAddressPoolListObject.creationTime = valuePublicIpAddressPoolListPublicIpAddressPool["CreationTime"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["Isp"].isNull())
			publicIpAddressPoolListObject.isp = valuePublicIpAddressPoolListPublicIpAddressPool["Isp"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["Name"].isNull())
			publicIpAddressPoolListObject.name = valuePublicIpAddressPoolListPublicIpAddressPool["Name"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["Status"].isNull())
			publicIpAddressPoolListObject.status = valuePublicIpAddressPoolListPublicIpAddressPool["Status"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["Description"].isNull())
			publicIpAddressPoolListObject.description = valuePublicIpAddressPoolListPublicIpAddressPool["Description"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["TotalIpNum"].isNull())
			publicIpAddressPoolListObject.totalIpNum = std::stoi(valuePublicIpAddressPoolListPublicIpAddressPool["TotalIpNum"].asString());
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["UsedIpNum"].isNull())
			publicIpAddressPoolListObject.usedIpNum = std::stoi(valuePublicIpAddressPoolListPublicIpAddressPool["UsedIpNum"].asString());
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["IpAddressRemaining"].isNull())
			publicIpAddressPoolListObject.ipAddressRemaining = valuePublicIpAddressPoolListPublicIpAddressPool["IpAddressRemaining"].asString() == "true";
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["UserType"].isNull())
			publicIpAddressPoolListObject.userType = valuePublicIpAddressPoolListPublicIpAddressPool["UserType"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["OwnerId"].isNull())
			publicIpAddressPoolListObject.ownerId = std::stol(valuePublicIpAddressPoolListPublicIpAddressPool["OwnerId"].asString());
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["ShareType"].isNull())
			publicIpAddressPoolListObject.shareType = valuePublicIpAddressPoolListPublicIpAddressPool["ShareType"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["ResourceGroupId"].isNull())
			publicIpAddressPoolListObject.resourceGroupId = valuePublicIpAddressPoolListPublicIpAddressPool["ResourceGroupId"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["BizType"].isNull())
			publicIpAddressPoolListObject.bizType = valuePublicIpAddressPoolListPublicIpAddressPool["BizType"].asString();
		if(!valuePublicIpAddressPoolListPublicIpAddressPool["BusinessStatus"].isNull())
			publicIpAddressPoolListObject.businessStatus = valuePublicIpAddressPoolListPublicIpAddressPool["BusinessStatus"].asString();
		auto allPublicIpCidrBlockListNode = valuePublicIpAddressPoolListPublicIpAddressPool["PublicIpCidrBlockList"]["PublicIpCidrBlock"];
		for (auto valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock : allPublicIpCidrBlockListNode)
		{
			PublicIpAddressPool::PublicIpCidrBlock publicIpCidrBlockListObject;
			if(!valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["CidrBlock"].isNull())
				publicIpCidrBlockListObject.cidrBlock = valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["CidrBlock"].asString();
			if(!valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["Status"].isNull())
				publicIpCidrBlockListObject.status = valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["Status"].asString();
			if(!valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["TotalIpNum"].isNull())
				publicIpCidrBlockListObject.totalIpNum = std::stoi(valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["TotalIpNum"].asString());
			if(!valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["UsedIpNum"].isNull())
				publicIpCidrBlockListObject.usedIpNum = std::stoi(valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["UsedIpNum"].asString());
			if(!valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["CreationTime"].isNull())
				publicIpCidrBlockListObject.creationTime = valuePublicIpAddressPoolListPublicIpAddressPoolPublicIpCidrBlockListPublicIpCidrBlock["CreationTime"].asString();
			publicIpAddressPoolListObject.publicIpCidrBlockList.push_back(publicIpCidrBlockListObject);
		}
		auto allTagsNode = valuePublicIpAddressPoolListPublicIpAddressPool["Tags"]["Tag"];
		for (auto valuePublicIpAddressPoolListPublicIpAddressPoolTagsTag : allTagsNode)
		{
			PublicIpAddressPool::Tag tagsObject;
			if(!valuePublicIpAddressPoolListPublicIpAddressPoolTagsTag["Key"].isNull())
				tagsObject.key = valuePublicIpAddressPoolListPublicIpAddressPoolTagsTag["Key"].asString();
			if(!valuePublicIpAddressPoolListPublicIpAddressPoolTagsTag["Value"].isNull())
				tagsObject.value = valuePublicIpAddressPoolListPublicIpAddressPoolTagsTag["Value"].asString();
			publicIpAddressPoolListObject.tags.push_back(tagsObject);
		}
		auto allZones = value["Zones"]["Zone"];
		for (auto value : allZones)
			publicIpAddressPoolListObject.zones.push_back(value.asString());
		auto allSecurityProtectionTypes = value["SecurityProtectionTypes"]["SecurityProtectionType"];
		for (auto value : allSecurityProtectionTypes)
			publicIpAddressPoolListObject.securityProtectionTypes.push_back(value.asString());
		publicIpAddressPoolList_.push_back(publicIpAddressPoolListObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListPublicIpAddressPoolsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPublicIpAddressPoolsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListPublicIpAddressPoolsResult::PublicIpAddressPool> ListPublicIpAddressPoolsResult::getPublicIpAddressPoolList()const
{
	return publicIpAddressPoolList_;
}

int ListPublicIpAddressPoolsResult::getMaxResults()const
{
	return maxResults_;
}

