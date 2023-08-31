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

#include <alibabacloud/csas/model/ListConnectorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListConnectorsResult::ListConnectorsResult() :
	ServiceResult()
{}

ListConnectorsResult::ListConnectorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConnectorsResult::~ListConnectorsResult()
{}

void ListConnectorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnectorsNode = value["Connectors"]["connector"];
	for (auto valueConnectorsconnector : allConnectorsNode)
	{
		Connector connectorsObject;
		if(!valueConnectorsconnector["ConnectorId"].isNull())
			connectorsObject.connectorId = valueConnectorsconnector["ConnectorId"].asString();
		if(!valueConnectorsconnector["Name"].isNull())
			connectorsObject.name = valueConnectorsconnector["Name"].asString();
		if(!valueConnectorsconnector["RegionId"].isNull())
			connectorsObject.regionId = valueConnectorsconnector["RegionId"].asString();
		if(!valueConnectorsconnector["SwitchStatus"].isNull())
			connectorsObject.switchStatus = valueConnectorsconnector["SwitchStatus"].asString();
		if(!valueConnectorsconnector["Status"].isNull())
			connectorsObject.status = valueConnectorsconnector["Status"].asString();
		if(!valueConnectorsconnector["CreateTime"].isNull())
			connectorsObject.createTime = valueConnectorsconnector["CreateTime"].asString();
		auto allApplicationsNode = valueConnectorsconnector["Applications"]["application"];
		for (auto valueConnectorsconnectorApplicationsapplication : allApplicationsNode)
		{
			Connector::Application applicationsObject;
			if(!valueConnectorsconnectorApplicationsapplication["ApplicationId"].isNull())
				applicationsObject.applicationId = valueConnectorsconnectorApplicationsapplication["ApplicationId"].asString();
			if(!valueConnectorsconnectorApplicationsapplication["ApplicationName"].isNull())
				applicationsObject.applicationName = valueConnectorsconnectorApplicationsapplication["ApplicationName"].asString();
			connectorsObject.applications.push_back(applicationsObject);
		}
		auto allConnectorClientsNode = valueConnectorsconnector["ConnectorClients"]["connectorClient"];
		for (auto valueConnectorsconnectorConnectorClientsconnectorClient : allConnectorClientsNode)
		{
			Connector::ConnectorClient connectorClientsObject;
			if(!valueConnectorsconnectorConnectorClientsconnectorClient["DevTag"].isNull())
				connectorClientsObject.devTag = valueConnectorsconnectorConnectorClientsconnectorClient["DevTag"].asString();
			if(!valueConnectorsconnectorConnectorClientsconnectorClient["Hostname"].isNull())
				connectorClientsObject.hostname = valueConnectorsconnectorConnectorClientsconnectorClient["Hostname"].asString();
			if(!valueConnectorsconnectorConnectorClientsconnectorClient["ConnectionStatus"].isNull())
				connectorClientsObject.connectionStatus = valueConnectorsconnectorConnectorClientsconnectorClient["ConnectionStatus"].asString();
			if(!valueConnectorsconnectorConnectorClientsconnectorClient["PublicIp"].isNull())
				connectorClientsObject.publicIp = valueConnectorsconnectorConnectorClientsconnectorClient["PublicIp"].asString();
			connectorsObject.connectorClients.push_back(connectorClientsObject);
		}
		auto upgradeTimeNode = value["UpgradeTime"];
		if(!upgradeTimeNode["Start"].isNull())
			connectorsObject.upgradeTime.start = upgradeTimeNode["Start"].asString();
		if(!upgradeTimeNode["End"].isNull())
			connectorsObject.upgradeTime.end = upgradeTimeNode["End"].asString();
		connectors_.push_back(connectorsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

std::vector<ListConnectorsResult::Connector> ListConnectorsResult::getConnectors()const
{
	return connectors_;
}

int ListConnectorsResult::getTotalNum()const
{
	return totalNum_;
}

