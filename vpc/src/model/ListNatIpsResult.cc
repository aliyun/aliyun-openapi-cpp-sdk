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

#include <alibabacloud/vpc/model/ListNatIpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListNatIpsResult::ListNatIpsResult() :
	ServiceResult()
{}

ListNatIpsResult::ListNatIpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNatIpsResult::~ListNatIpsResult()
{}

void ListNatIpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNatIpsNode = value["NatIps"]["NatIp"];
	for (auto valueNatIpsNatIp : allNatIpsNode)
	{
		NatIp natIpsObject;
		if(!valueNatIpsNatIp["IsDefault"].isNull())
			natIpsObject.isDefault = valueNatIpsNatIp["IsDefault"].asString() == "true";
		if(!valueNatIpsNatIp["NatIp"].isNull())
			natIpsObject.natIp = valueNatIpsNatIp["NatIp"].asString();
		if(!valueNatIpsNatIp["NatIpCidr"].isNull())
			natIpsObject.natIpCidr = valueNatIpsNatIp["NatIpCidr"].asString();
		if(!valueNatIpsNatIp["NatIpId"].isNull())
			natIpsObject.natIpId = valueNatIpsNatIp["NatIpId"].asString();
		if(!valueNatIpsNatIp["NatIpDescription"].isNull())
			natIpsObject.natIpDescription = valueNatIpsNatIp["NatIpDescription"].asString();
		if(!valueNatIpsNatIp["NatGatewayId"].isNull())
			natIpsObject.natGatewayId = valueNatIpsNatIp["NatGatewayId"].asString();
		if(!valueNatIpsNatIp["NatIpName"].isNull())
			natIpsObject.natIpName = valueNatIpsNatIp["NatIpName"].asString();
		if(!valueNatIpsNatIp["NatIpStatus"].isNull())
			natIpsObject.natIpStatus = valueNatIpsNatIp["NatIpStatus"].asString();
		if(!valueNatIpsNatIp["RegionId"].isNull())
			natIpsObject.regionId = valueNatIpsNatIp["RegionId"].asString();
		natIps_.push_back(natIpsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();

}

std::string ListNatIpsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNatIpsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListNatIpsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListNatIpsResult::NatIp> ListNatIpsResult::getNatIps()const
{
	return natIps_;
}

