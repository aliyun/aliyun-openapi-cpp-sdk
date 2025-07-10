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

#include <alibabacloud/vpc/model/DescribeSslVpnServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeSslVpnServersResult::DescribeSslVpnServersResult() :
	ServiceResult()
{}

DescribeSslVpnServersResult::DescribeSslVpnServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSslVpnServersResult::~DescribeSslVpnServersResult()
{}

void DescribeSslVpnServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSslVpnServersNode = value["SslVpnServers"]["SslVpnServer"];
	for (auto valueSslVpnServersSslVpnServer : allSslVpnServersNode)
	{
		SslVpnServer sslVpnServersObject;
		if(!valueSslVpnServersSslVpnServer["InternetIp"].isNull())
			sslVpnServersObject.internetIp = valueSslVpnServersSslVpnServer["InternetIp"].asString();
		if(!valueSslVpnServersSslVpnServer["IDaaSInstanceId"].isNull())
			sslVpnServersObject.iDaaSInstanceId = valueSslVpnServersSslVpnServer["IDaaSInstanceId"].asString();
		if(!valueSslVpnServersSslVpnServer["CreateTime"].isNull())
			sslVpnServersObject.createTime = std::stol(valueSslVpnServersSslVpnServer["CreateTime"].asString());
		if(!valueSslVpnServersSslVpnServer["VpnGatewayId"].isNull())
			sslVpnServersObject.vpnGatewayId = valueSslVpnServersSslVpnServer["VpnGatewayId"].asString();
		if(!valueSslVpnServersSslVpnServer["IDaaSRegionId"].isNull())
			sslVpnServersObject.iDaaSRegionId = valueSslVpnServersSslVpnServer["IDaaSRegionId"].asString();
		if(!valueSslVpnServersSslVpnServer["Compress"].isNull())
			sslVpnServersObject.compress = valueSslVpnServersSslVpnServer["Compress"].asString() == "true";
		if(!valueSslVpnServersSslVpnServer["Port"].isNull())
			sslVpnServersObject.port = std::stoi(valueSslVpnServersSslVpnServer["Port"].asString());
		if(!valueSslVpnServersSslVpnServer["LocalSubnet"].isNull())
			sslVpnServersObject.localSubnet = valueSslVpnServersSslVpnServer["LocalSubnet"].asString();
		if(!valueSslVpnServersSslVpnServer["RegionId"].isNull())
			sslVpnServersObject.regionId = valueSslVpnServersSslVpnServer["RegionId"].asString();
		if(!valueSslVpnServersSslVpnServer["Cipher"].isNull())
			sslVpnServersObject.cipher = valueSslVpnServersSslVpnServer["Cipher"].asString();
		if(!valueSslVpnServersSslVpnServer["Connections"].isNull())
			sslVpnServersObject.connections = std::stoi(valueSslVpnServersSslVpnServer["Connections"].asString());
		if(!valueSslVpnServersSslVpnServer["SslVpnServerId"].isNull())
			sslVpnServersObject.sslVpnServerId = valueSslVpnServersSslVpnServer["SslVpnServerId"].asString();
		if(!valueSslVpnServersSslVpnServer["MaxConnections"].isNull())
			sslVpnServersObject.maxConnections = std::stoi(valueSslVpnServersSslVpnServer["MaxConnections"].asString());
		if(!valueSslVpnServersSslVpnServer["Name"].isNull())
			sslVpnServersObject.name = valueSslVpnServersSslVpnServer["Name"].asString();
		if(!valueSslVpnServersSslVpnServer["EnableMultiFactorAuth"].isNull())
			sslVpnServersObject.enableMultiFactorAuth = valueSslVpnServersSslVpnServer["EnableMultiFactorAuth"].asString() == "true";
		if(!valueSslVpnServersSslVpnServer["ClientIpPool"].isNull())
			sslVpnServersObject.clientIpPool = valueSslVpnServersSslVpnServer["ClientIpPool"].asString();
		if(!valueSslVpnServersSslVpnServer["Proto"].isNull())
			sslVpnServersObject.proto = valueSslVpnServersSslVpnServer["Proto"].asString();
		if(!valueSslVpnServersSslVpnServer["ResourceGroupId"].isNull())
			sslVpnServersObject.resourceGroupId = valueSslVpnServersSslVpnServer["ResourceGroupId"].asString();
		if(!valueSslVpnServersSslVpnServer["IDaaSApplicationId"].isNull())
			sslVpnServersObject.iDaaSApplicationId = valueSslVpnServersSslVpnServer["IDaaSApplicationId"].asString();
		if(!valueSslVpnServersSslVpnServer["IDaaSInstanceVersion"].isNull())
			sslVpnServersObject.iDaaSInstanceVersion = valueSslVpnServersSslVpnServer["IDaaSInstanceVersion"].asString();
		sslVpnServers_.push_back(sslVpnServersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSslVpnServersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSslVpnServersResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeSslVpnServersResult::SslVpnServer> DescribeSslVpnServersResult::getSslVpnServers()const
{
	return sslVpnServers_;
}

int DescribeSslVpnServersResult::getPageNumber()const
{
	return pageNumber_;
}

