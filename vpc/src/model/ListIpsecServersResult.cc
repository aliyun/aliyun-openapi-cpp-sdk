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

#include <alibabacloud/vpc/model/ListIpsecServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListIpsecServersResult::ListIpsecServersResult() :
	ServiceResult()
{}

ListIpsecServersResult::ListIpsecServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIpsecServersResult::~ListIpsecServersResult()
{}

void ListIpsecServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpsecServersNode = value["IpsecServers"]["IpsecServer"];
	for (auto valueIpsecServersIpsecServer : allIpsecServersNode)
	{
		IpsecServer ipsecServersObject;
		if(!valueIpsecServersIpsecServer["CreationTime"].isNull())
			ipsecServersObject.creationTime = valueIpsecServersIpsecServer["CreationTime"].asString();
		if(!valueIpsecServersIpsecServer["OnlineClientCount"].isNull())
			ipsecServersObject.onlineClientCount = std::stoi(valueIpsecServersIpsecServer["OnlineClientCount"].asString());
		if(!valueIpsecServersIpsecServer["InternetIp"].isNull())
			ipsecServersObject.internetIp = valueIpsecServersIpsecServer["InternetIp"].asString();
		if(!valueIpsecServersIpsecServer["IpsecServerName"].isNull())
			ipsecServersObject.ipsecServerName = valueIpsecServersIpsecServer["IpsecServerName"].asString();
		if(!valueIpsecServersIpsecServer["IDaaSInstanceId"].isNull())
			ipsecServersObject.iDaaSInstanceId = valueIpsecServersIpsecServer["IDaaSInstanceId"].asString();
		if(!valueIpsecServersIpsecServer["EffectImmediately"].isNull())
			ipsecServersObject.effectImmediately = valueIpsecServersIpsecServer["EffectImmediately"].asString() == "true";
		if(!valueIpsecServersIpsecServer["VpnGatewayId"].isNull())
			ipsecServersObject.vpnGatewayId = valueIpsecServersIpsecServer["VpnGatewayId"].asString();
		if(!valueIpsecServersIpsecServer["LocalSubnet"].isNull())
			ipsecServersObject.localSubnet = valueIpsecServersIpsecServer["LocalSubnet"].asString();
		if(!valueIpsecServersIpsecServer["Psk"].isNull())
			ipsecServersObject.psk = valueIpsecServersIpsecServer["Psk"].asString();
		if(!valueIpsecServersIpsecServer["RegionId"].isNull())
			ipsecServersObject.regionId = valueIpsecServersIpsecServer["RegionId"].asString();
		if(!valueIpsecServersIpsecServer["PskEnabled"].isNull())
			ipsecServersObject.pskEnabled = valueIpsecServersIpsecServer["PskEnabled"].asString() == "true";
		if(!valueIpsecServersIpsecServer["IpsecServerId"].isNull())
			ipsecServersObject.ipsecServerId = valueIpsecServersIpsecServer["IpsecServerId"].asString();
		if(!valueIpsecServersIpsecServer["MultiFactorAuthEnabled"].isNull())
			ipsecServersObject.multiFactorAuthEnabled = valueIpsecServersIpsecServer["MultiFactorAuthEnabled"].asString() == "true";
		if(!valueIpsecServersIpsecServer["MaxConnections"].isNull())
			ipsecServersObject.maxConnections = std::stoi(valueIpsecServersIpsecServer["MaxConnections"].asString());
		if(!valueIpsecServersIpsecServer["ClientIpPool"].isNull())
			ipsecServersObject.clientIpPool = valueIpsecServersIpsecServer["ClientIpPool"].asString();
		if(!valueIpsecServersIpsecServer["ResourceGroupId"].isNull())
			ipsecServersObject.resourceGroupId = valueIpsecServersIpsecServer["ResourceGroupId"].asString();
		auto ikeConfigNode = value["IkeConfig"];
		if(!ikeConfigNode["RemoteId"].isNull())
			ipsecServersObject.ikeConfig.remoteId = ikeConfigNode["RemoteId"].asString();
		if(!ikeConfigNode["IkeLifetime"].isNull())
			ipsecServersObject.ikeConfig.ikeLifetime = std::stol(ikeConfigNode["IkeLifetime"].asString());
		if(!ikeConfigNode["IkeEncAlg"].isNull())
			ipsecServersObject.ikeConfig.ikeEncAlg = ikeConfigNode["IkeEncAlg"].asString();
		if(!ikeConfigNode["LocalId"].isNull())
			ipsecServersObject.ikeConfig.localId = ikeConfigNode["LocalId"].asString();
		if(!ikeConfigNode["IkeMode"].isNull())
			ipsecServersObject.ikeConfig.ikeMode = ikeConfigNode["IkeMode"].asString();
		if(!ikeConfigNode["IkeVersion"].isNull())
			ipsecServersObject.ikeConfig.ikeVersion = ikeConfigNode["IkeVersion"].asString();
		if(!ikeConfigNode["IkePfs"].isNull())
			ipsecServersObject.ikeConfig.ikePfs = ikeConfigNode["IkePfs"].asString();
		if(!ikeConfigNode["IkeAuthAlg"].isNull())
			ipsecServersObject.ikeConfig.ikeAuthAlg = ikeConfigNode["IkeAuthAlg"].asString();
		auto ipsecConfigNode = value["IpsecConfig"];
		if(!ipsecConfigNode["IpsecAuthAlg"].isNull())
			ipsecServersObject.ipsecConfig.ipsecAuthAlg = ipsecConfigNode["IpsecAuthAlg"].asString();
		if(!ipsecConfigNode["IpsecLifetime"].isNull())
			ipsecServersObject.ipsecConfig.ipsecLifetime = std::stol(ipsecConfigNode["IpsecLifetime"].asString());
		if(!ipsecConfigNode["IpsecEncAlg"].isNull())
			ipsecServersObject.ipsecConfig.ipsecEncAlg = ipsecConfigNode["IpsecEncAlg"].asString();
		if(!ipsecConfigNode["IpsecPfs"].isNull())
			ipsecServersObject.ipsecConfig.ipsecPfs = ipsecConfigNode["IpsecPfs"].asString();
		ipsecServers_.push_back(ipsecServersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListIpsecServersResult::IpsecServer> ListIpsecServersResult::getIpsecServers()const
{
	return ipsecServers_;
}

int ListIpsecServersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListIpsecServersResult::getNextToken()const
{
	return nextToken_;
}

int ListIpsecServersResult::getMaxResults()const
{
	return maxResults_;
}

