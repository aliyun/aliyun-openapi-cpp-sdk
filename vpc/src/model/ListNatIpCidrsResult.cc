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

#include <alibabacloud/vpc/model/ListNatIpCidrsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListNatIpCidrsResult::ListNatIpCidrsResult() :
	ServiceResult()
{}

ListNatIpCidrsResult::ListNatIpCidrsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNatIpCidrsResult::~ListNatIpCidrsResult()
{}

void ListNatIpCidrsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNatIpCidrsNode = value["NatIpCidrs"]["NatIpCidr"];
	for (auto valueNatIpCidrsNatIpCidr : allNatIpCidrsNode)
	{
		NatIpCidr natIpCidrsObject;
		if(!valueNatIpCidrsNatIpCidr["CreationTime"].isNull())
			natIpCidrsObject.creationTime = valueNatIpCidrsNatIpCidr["CreationTime"].asString();
		if(!valueNatIpCidrsNatIpCidr["NatIpCidrId"].isNull())
			natIpCidrsObject.natIpCidrId = valueNatIpCidrsNatIpCidr["NatIpCidrId"].asString();
		if(!valueNatIpCidrsNatIpCidr["IsDefault"].isNull())
			natIpCidrsObject.isDefault = valueNatIpCidrsNatIpCidr["IsDefault"].asString() == "true";
		if(!valueNatIpCidrsNatIpCidr["NatIpCidrStatus"].isNull())
			natIpCidrsObject.natIpCidrStatus = valueNatIpCidrsNatIpCidr["NatIpCidrStatus"].asString();
		if(!valueNatIpCidrsNatIpCidr["NatIpCidrName"].isNull())
			natIpCidrsObject.natIpCidrName = valueNatIpCidrsNatIpCidr["NatIpCidrName"].asString();
		if(!valueNatIpCidrsNatIpCidr["NatIpCidr"].isNull())
			natIpCidrsObject.natIpCidr = valueNatIpCidrsNatIpCidr["NatIpCidr"].asString();
		if(!valueNatIpCidrsNatIpCidr["NatGatewayId"].isNull())
			natIpCidrsObject.natGatewayId = valueNatIpCidrsNatIpCidr["NatGatewayId"].asString();
		if(!valueNatIpCidrsNatIpCidr["NatIpCidrDescription"].isNull())
			natIpCidrsObject.natIpCidrDescription = valueNatIpCidrsNatIpCidr["NatIpCidrDescription"].asString();
		if(!valueNatIpCidrsNatIpCidr["RegionId"].isNull())
			natIpCidrsObject.regionId = valueNatIpCidrsNatIpCidr["RegionId"].asString();
		natIpCidrs_.push_back(natIpCidrsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();

}

std::string ListNatIpCidrsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNatIpCidrsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListNatIpCidrsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListNatIpCidrsResult::NatIpCidr> ListNatIpCidrsResult::getNatIpCidrs()const
{
	return natIpCidrs_;
}

