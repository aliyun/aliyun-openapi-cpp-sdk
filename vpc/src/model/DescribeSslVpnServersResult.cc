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
	auto allSslVpnServers = value["SslVpnServers"]["SslVpnServer"];
	for (auto value : allSslVpnServers)
	{
		SslVpnServer sslVpnServersObject;
		if(!value["RegionId"].isNull())
			sslVpnServersObject.regionId = value["RegionId"].asString();
		if(!value["SslVpnServerId"].isNull())
			sslVpnServersObject.sslVpnServerId = value["SslVpnServerId"].asString();
		if(!value["VpnGatewayId"].isNull())
			sslVpnServersObject.vpnGatewayId = value["VpnGatewayId"].asString();
		if(!value["Name"].isNull())
			sslVpnServersObject.name = value["Name"].asString();
		if(!value["LocalSubnet"].isNull())
			sslVpnServersObject.localSubnet = value["LocalSubnet"].asString();
		if(!value["ClientIpPool"].isNull())
			sslVpnServersObject.clientIpPool = value["ClientIpPool"].asString();
		if(!value["CreateTime"].isNull())
			sslVpnServersObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Cipher"].isNull())
			sslVpnServersObject.cipher = value["Cipher"].asString();
		if(!value["Proto"].isNull())
			sslVpnServersObject.proto = value["Proto"].asString();
		if(!value["Port"].isNull())
			sslVpnServersObject.port = std::stoi(value["Port"].asString());
		if(!value["Compress"].isNull())
			sslVpnServersObject.compress = value["Compress"].asString() == "true";
		if(!value["Connections"].isNull())
			sslVpnServersObject.connections = std::stoi(value["Connections"].asString());
		if(!value["MaxConnections"].isNull())
			sslVpnServersObject.maxConnections = std::stoi(value["MaxConnections"].asString());
		if(!value["InternetIp"].isNull())
			sslVpnServersObject.internetIp = value["InternetIp"].asString();
		sslVpnServers_.push_back(sslVpnServersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

