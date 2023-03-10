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

#include <alibabacloud/vpc/model/ListIpv4GatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListIpv4GatewaysResult::ListIpv4GatewaysResult() :
	ServiceResult()
{}

ListIpv4GatewaysResult::ListIpv4GatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIpv4GatewaysResult::~ListIpv4GatewaysResult()
{}

void ListIpv4GatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv4GatewayModelsNode = value["Ipv4GatewayModels"]["Ipv4GatewayModelsItem"];
	for (auto valueIpv4GatewayModelsIpv4GatewayModelsItem : allIpv4GatewayModelsNode)
	{
		Ipv4GatewayModelsItem ipv4GatewayModelsObject;
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["VpcId"].isNull())
			ipv4GatewayModelsObject.vpcId = valueIpv4GatewayModelsIpv4GatewayModelsItem["VpcId"].asString();
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["Status"].isNull())
			ipv4GatewayModelsObject.status = valueIpv4GatewayModelsIpv4GatewayModelsItem["Status"].asString();
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayId"].isNull())
			ipv4GatewayModelsObject.ipv4GatewayId = valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayId"].asString();
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayDescription"].isNull())
			ipv4GatewayModelsObject.ipv4GatewayDescription = valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayDescription"].asString();
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["Enabled"].isNull())
			ipv4GatewayModelsObject.enabled = valueIpv4GatewayModelsIpv4GatewayModelsItem["Enabled"].asString() == "true";
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["GmtCreate"].isNull())
			ipv4GatewayModelsObject.gmtCreate = valueIpv4GatewayModelsIpv4GatewayModelsItem["GmtCreate"].asString();
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayRouteTableId"].isNull())
			ipv4GatewayModelsObject.ipv4GatewayRouteTableId = valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayRouteTableId"].asString();
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayName"].isNull())
			ipv4GatewayModelsObject.ipv4GatewayName = valueIpv4GatewayModelsIpv4GatewayModelsItem["Ipv4GatewayName"].asString();
		if(!valueIpv4GatewayModelsIpv4GatewayModelsItem["ResourceGroupId"].isNull())
			ipv4GatewayModelsObject.resourceGroupId = valueIpv4GatewayModelsIpv4GatewayModelsItem["ResourceGroupId"].asString();
		auto allTagsNode = valueIpv4GatewayModelsIpv4GatewayModelsItem["Tags"]["Tag"];
		for (auto valueIpv4GatewayModelsIpv4GatewayModelsItemTagsTag : allTagsNode)
		{
			Ipv4GatewayModelsItem::Tag tagsObject;
			if(!valueIpv4GatewayModelsIpv4GatewayModelsItemTagsTag["Key"].isNull())
				tagsObject.key = valueIpv4GatewayModelsIpv4GatewayModelsItemTagsTag["Key"].asString();
			if(!valueIpv4GatewayModelsIpv4GatewayModelsItemTagsTag["Value"].isNull())
				tagsObject.value = valueIpv4GatewayModelsIpv4GatewayModelsItemTagsTag["Value"].asString();
			ipv4GatewayModelsObject.tags.push_back(tagsObject);
		}
		ipv4GatewayModels_.push_back(ipv4GatewayModelsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListIpv4GatewaysResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListIpv4GatewaysResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListIpv4GatewaysResult::Ipv4GatewayModelsItem> ListIpv4GatewaysResult::getIpv4GatewayModels()const
{
	return ipv4GatewayModels_;
}

