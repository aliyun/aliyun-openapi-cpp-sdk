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

#include <alibabacloud/dataworks-public/model/ListConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListConnectionsResult::ListConnectionsResult() :
	ServiceResult()
{}

ListConnectionsResult::ListConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConnectionsResult::~ListConnectionsResult()
{}

void ListConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allConnectionsNode = dataNode["Connections"]["ConnectionsItem"];
	for (auto dataNodeConnectionsConnectionsItem : allConnectionsNode)
	{
		Data::ConnectionsItem connectionsItemObject;
		if(!dataNodeConnectionsConnectionsItem["Status"].isNull())
			connectionsItemObject.status = std::stoi(dataNodeConnectionsConnectionsItem["Status"].asString());
		if(!dataNodeConnectionsConnectionsItem["ConnectionType"].isNull())
			connectionsItemObject.connectionType = dataNodeConnectionsConnectionsItem["ConnectionType"].asString();
		if(!dataNodeConnectionsConnectionsItem["ProjectId"].isNull())
			connectionsItemObject.projectId = std::stoi(dataNodeConnectionsConnectionsItem["ProjectId"].asString());
		if(!dataNodeConnectionsConnectionsItem["SubType"].isNull())
			connectionsItemObject.subType = dataNodeConnectionsConnectionsItem["SubType"].asString();
		if(!dataNodeConnectionsConnectionsItem["GmtModified"].isNull())
			connectionsItemObject.gmtModified = dataNodeConnectionsConnectionsItem["GmtModified"].asString();
		if(!dataNodeConnectionsConnectionsItem["EnvType"].isNull())
			connectionsItemObject.envType = std::stoi(dataNodeConnectionsConnectionsItem["EnvType"].asString());
		if(!dataNodeConnectionsConnectionsItem["ConnectStatus"].isNull())
			connectionsItemObject.connectStatus = std::stoi(dataNodeConnectionsConnectionsItem["ConnectStatus"].asString());
		if(!dataNodeConnectionsConnectionsItem["Sequence"].isNull())
			connectionsItemObject.sequence = std::stoi(dataNodeConnectionsConnectionsItem["Sequence"].asString());
		if(!dataNodeConnectionsConnectionsItem["Description"].isNull())
			connectionsItemObject.description = dataNodeConnectionsConnectionsItem["Description"].asString();
		if(!dataNodeConnectionsConnectionsItem["GmtCreate"].isNull())
			connectionsItemObject.gmtCreate = dataNodeConnectionsConnectionsItem["GmtCreate"].asString();
		if(!dataNodeConnectionsConnectionsItem["DefaultEngine"].isNull())
			connectionsItemObject.defaultEngine = dataNodeConnectionsConnectionsItem["DefaultEngine"].asString() == "true";
		if(!dataNodeConnectionsConnectionsItem["Shared"].isNull())
			connectionsItemObject.shared = dataNodeConnectionsConnectionsItem["Shared"].asString() == "true";
		if(!dataNodeConnectionsConnectionsItem["Operator"].isNull())
			connectionsItemObject._operator = dataNodeConnectionsConnectionsItem["Operator"].asString();
		if(!dataNodeConnectionsConnectionsItem["Name"].isNull())
			connectionsItemObject.name = dataNodeConnectionsConnectionsItem["Name"].asString();
		if(!dataNodeConnectionsConnectionsItem["Content"].isNull())
			connectionsItemObject.content = dataNodeConnectionsConnectionsItem["Content"].asString();
		if(!dataNodeConnectionsConnectionsItem["Id"].isNull())
			connectionsItemObject.id = std::stoi(dataNodeConnectionsConnectionsItem["Id"].asString());
		if(!dataNodeConnectionsConnectionsItem["BindingCalcEngineId"].isNull())
			connectionsItemObject.bindingCalcEngineId = std::stoi(dataNodeConnectionsConnectionsItem["BindingCalcEngineId"].asString());
		if(!dataNodeConnectionsConnectionsItem["TenantId"].isNull())
			connectionsItemObject.tenantId = std::stol(dataNodeConnectionsConnectionsItem["TenantId"].asString());
		data_.connections.push_back(connectionsItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListConnectionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListConnectionsResult::Data ListConnectionsResult::getData()const
{
	return data_;
}

bool ListConnectionsResult::getSuccess()const
{
	return success_;
}

