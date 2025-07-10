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

#include <alibabacloud/vpc/model/DiagnoseVpnConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DiagnoseVpnConnectionsResult::DiagnoseVpnConnectionsResult() :
	ServiceResult()
{}

DiagnoseVpnConnectionsResult::DiagnoseVpnConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DiagnoseVpnConnectionsResult::~DiagnoseVpnConnectionsResult()
{}

void DiagnoseVpnConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpnConnectionsNode = value["VpnConnections"]["VpnConnection"];
	for (auto valueVpnConnectionsVpnConnection : allVpnConnectionsNode)
	{
		VpnConnection vpnConnectionsObject;
		if(!valueVpnConnectionsVpnConnection["MismatchRemoteParam"].isNull())
			vpnConnectionsObject.mismatchRemoteParam = valueVpnConnectionsVpnConnection["MismatchRemoteParam"].asString();
		if(!valueVpnConnectionsVpnConnection["MismatchLocalParam"].isNull())
			vpnConnectionsObject.mismatchLocalParam = valueVpnConnectionsVpnConnection["MismatchLocalParam"].asString();
		if(!valueVpnConnectionsVpnConnection["VpnConnectionId"].isNull())
			vpnConnectionsObject.vpnConnectionId = valueVpnConnectionsVpnConnection["VpnConnectionId"].asString();
		if(!valueVpnConnectionsVpnConnection["SourceLog"].isNull())
			vpnConnectionsObject.sourceLog = valueVpnConnectionsVpnConnection["SourceLog"].asString();
		if(!valueVpnConnectionsVpnConnection["FailedReasonCode"].isNull())
			vpnConnectionsObject.failedReasonCode = valueVpnConnectionsVpnConnection["FailedReasonCode"].asString();
		if(!valueVpnConnectionsVpnConnection["FailedTime"].isNull())
			vpnConnectionsObject.failedTime = std::stol(valueVpnConnectionsVpnConnection["FailedTime"].asString());
		if(!valueVpnConnectionsVpnConnection["FailedReason"].isNull())
			vpnConnectionsObject.failedReason = valueVpnConnectionsVpnConnection["FailedReason"].asString();
		if(!valueVpnConnectionsVpnConnection["Severity"].isNull())
			vpnConnectionsObject.severity = valueVpnConnectionsVpnConnection["Severity"].asString();
		if(!valueVpnConnectionsVpnConnection["TunnelId"].isNull())
			vpnConnectionsObject.tunnelId = valueVpnConnectionsVpnConnection["TunnelId"].asString();
		vpnConnections_.push_back(vpnConnectionsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DiagnoseVpnConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

int DiagnoseVpnConnectionsResult::getPageSize()const
{
	return pageSize_;
}

int DiagnoseVpnConnectionsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DiagnoseVpnConnectionsResult::VpnConnection> DiagnoseVpnConnectionsResult::getVpnConnections()const
{
	return vpnConnections_;
}

