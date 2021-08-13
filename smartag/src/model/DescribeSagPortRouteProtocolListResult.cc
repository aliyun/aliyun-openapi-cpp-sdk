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

#include <alibabacloud/smartag/model/DescribeSagPortRouteProtocolListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagPortRouteProtocolListResult::DescribeSagPortRouteProtocolListResult() :
	ServiceResult()
{}

DescribeSagPortRouteProtocolListResult::DescribeSagPortRouteProtocolListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagPortRouteProtocolListResult::~DescribeSagPortRouteProtocolListResult()
{}

void DescribeSagPortRouteProtocolListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortsNode = value["Ports"]["Port"];
	for (auto valuePortsPort : allPortsNode)
	{
		Port portsObject;
		if(!valuePortsPort["Status"].isNull())
			portsObject.status = valuePortsPort["Status"].asString();
		if(!valuePortsPort["RemoteIp"].isNull())
			portsObject.remoteIp = valuePortsPort["RemoteIp"].asString();
		if(!valuePortsPort["PortName"].isNull())
			portsObject.portName = valuePortsPort["PortName"].asString();
		if(!valuePortsPort["NeighborIp"].isNull())
			portsObject.neighborIp = valuePortsPort["NeighborIp"].asString();
		if(!valuePortsPort["RouteProtocol"].isNull())
			portsObject.routeProtocol = valuePortsPort["RouteProtocol"].asString();
		if(!valuePortsPort["RemoteAs"].isNull())
			portsObject.remoteAs = valuePortsPort["RemoteAs"].asString();
		if(!valuePortsPort["Vlan"].isNull())
			portsObject.vlan = valuePortsPort["Vlan"].asString();
		ports_.push_back(portsObject);
	}
	auto allTaskStatesNode = value["TaskStates"]["TaskState"];
	for (auto valueTaskStatesTaskState : allTaskStatesNode)
	{
		TaskState taskStatesObject;
		if(!valueTaskStatesTaskState["ErrorMessage"].isNull())
			taskStatesObject.errorMessage = valueTaskStatesTaskState["ErrorMessage"].asString();
		if(!valueTaskStatesTaskState["State"].isNull())
			taskStatesObject.state = valueTaskStatesTaskState["State"].asString();
		if(!valueTaskStatesTaskState["ErrorCode"].isNull())
			taskStatesObject.errorCode = valueTaskStatesTaskState["ErrorCode"].asString();
		if(!valueTaskStatesTaskState["CreateTime"].isNull())
			taskStatesObject.createTime = valueTaskStatesTaskState["CreateTime"].asString();
		taskStates_.push_back(taskStatesObject);
	}

}

std::vector<DescribeSagPortRouteProtocolListResult::Port> DescribeSagPortRouteProtocolListResult::getPorts()const
{
	return ports_;
}

std::vector<DescribeSagPortRouteProtocolListResult::TaskState> DescribeSagPortRouteProtocolListResult::getTaskStates()const
{
	return taskStates_;
}

