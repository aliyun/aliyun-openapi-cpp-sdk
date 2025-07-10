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

#include <alibabacloud/vpc/model/DescribeSslVpnClientsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeSslVpnClientsResult::DescribeSslVpnClientsResult() :
	ServiceResult()
{}

DescribeSslVpnClientsResult::DescribeSslVpnClientsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSslVpnClientsResult::~DescribeSslVpnClientsResult()
{}

void DescribeSslVpnClientsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClientInfoListNode = value["ClientInfoList"]["ClientInfo"];
	for (auto valueClientInfoListClientInfo : allClientInfoListNode)
	{
		ClientInfo clientInfoListObject;
		if(!valueClientInfoListClientInfo["Status"].isNull())
			clientInfoListObject.status = valueClientInfoListClientInfo["Status"].asString();
		if(!valueClientInfoListClientInfo["PrivateIp"].isNull())
			clientInfoListObject.privateIp = valueClientInfoListClientInfo["PrivateIp"].asString();
		if(!valueClientInfoListClientInfo["SendBytes"].isNull())
			clientInfoListObject.sendBytes = std::stol(valueClientInfoListClientInfo["SendBytes"].asString());
		if(!valueClientInfoListClientInfo["ConnectedTime"].isNull())
			clientInfoListObject.connectedTime = std::stol(valueClientInfoListClientInfo["ConnectedTime"].asString());
		if(!valueClientInfoListClientInfo["CommonName"].isNull())
			clientInfoListObject.commonName = valueClientInfoListClientInfo["CommonName"].asString();
		if(!valueClientInfoListClientInfo["Ip"].isNull())
			clientInfoListObject.ip = valueClientInfoListClientInfo["Ip"].asString();
		if(!valueClientInfoListClientInfo["ReceiveBytes"].isNull())
			clientInfoListObject.receiveBytes = std::stol(valueClientInfoListClientInfo["ReceiveBytes"].asString());
		if(!valueClientInfoListClientInfo["Port"].isNull())
			clientInfoListObject.port = valueClientInfoListClientInfo["Port"].asString();
		clientInfoList_.push_back(clientInfoListObject);
	}
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

int DescribeSslVpnClientsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSslVpnClientsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeSslVpnClientsResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

int DescribeSslVpnClientsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSslVpnClientsResult::ClientInfo> DescribeSslVpnClientsResult::getClientInfoList()const
{
	return clientInfoList_;
}

std::string DescribeSslVpnClientsResult::getRegionId()const
{
	return regionId_;
}

