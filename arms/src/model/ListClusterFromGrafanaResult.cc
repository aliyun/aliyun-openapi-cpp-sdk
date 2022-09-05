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

#include <alibabacloud/arms/model/ListClusterFromGrafanaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListClusterFromGrafanaResult::ListClusterFromGrafanaResult() :
	ServiceResult()
{}

ListClusterFromGrafanaResult::ListClusterFromGrafanaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterFromGrafanaResult::~ListClusterFromGrafanaResult()
{}

void ListClusterFromGrafanaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPromClusterListNode = value["PromClusterList"]["PromCluster"];
	for (auto valuePromClusterListPromCluster : allPromClusterListNode)
	{
		PromCluster promClusterListObject;
		if(!valuePromClusterListPromCluster["UpdateTime"].isNull())
			promClusterListObject.updateTime = std::stol(valuePromClusterListPromCluster["UpdateTime"].asString());
		if(!valuePromClusterListPromCluster["CreateTime"].isNull())
			promClusterListObject.createTime = std::stol(valuePromClusterListPromCluster["CreateTime"].asString());
		if(!valuePromClusterListPromCluster["UserId"].isNull())
			promClusterListObject.userId = valuePromClusterListPromCluster["UserId"].asString();
		if(!valuePromClusterListPromCluster["Options"].isNull())
			promClusterListObject.options = valuePromClusterListPromCluster["Options"].asString();
		if(!valuePromClusterListPromCluster["IsControllerInstalled"].isNull())
			promClusterListObject.isControllerInstalled = valuePromClusterListPromCluster["IsControllerInstalled"].asString() == "true";
		if(!valuePromClusterListPromCluster["AgentStatus"].isNull())
			promClusterListObject.agentStatus = valuePromClusterListPromCluster["AgentStatus"].asString();
		if(!valuePromClusterListPromCluster["Extra"].isNull())
			promClusterListObject.extra = valuePromClusterListPromCluster["Extra"].asString();
		if(!valuePromClusterListPromCluster["InstallTime"].isNull())
			promClusterListObject.installTime = std::stol(valuePromClusterListPromCluster["InstallTime"].asString());
		if(!valuePromClusterListPromCluster["RegionId"].isNull())
			promClusterListObject.regionId = valuePromClusterListPromCluster["RegionId"].asString();
		if(!valuePromClusterListPromCluster["ControllerId"].isNull())
			promClusterListObject.controllerId = valuePromClusterListPromCluster["ControllerId"].asString();
		if(!valuePromClusterListPromCluster["PluginsJsonArray"].isNull())
			promClusterListObject.pluginsJsonArray = valuePromClusterListPromCluster["PluginsJsonArray"].asString();
		if(!valuePromClusterListPromCluster["ClusterType"].isNull())
			promClusterListObject.clusterType = valuePromClusterListPromCluster["ClusterType"].asString();
		if(!valuePromClusterListPromCluster["ClusterName"].isNull())
			promClusterListObject.clusterName = valuePromClusterListPromCluster["ClusterName"].asString();
		if(!valuePromClusterListPromCluster["StateJson"].isNull())
			promClusterListObject.stateJson = valuePromClusterListPromCluster["StateJson"].asString();
		if(!valuePromClusterListPromCluster["LastHeartBeatTime"].isNull())
			promClusterListObject.lastHeartBeatTime = std::stol(valuePromClusterListPromCluster["LastHeartBeatTime"].asString());
		if(!valuePromClusterListPromCluster["NodeNum"].isNull())
			promClusterListObject.nodeNum = std::stoi(valuePromClusterListPromCluster["NodeNum"].asString());
		if(!valuePromClusterListPromCluster["Id"].isNull())
			promClusterListObject.id = std::stol(valuePromClusterListPromCluster["Id"].asString());
		if(!valuePromClusterListPromCluster["ClusterId"].isNull())
			promClusterListObject.clusterId = valuePromClusterListPromCluster["ClusterId"].asString();
		promClusterList_.push_back(promClusterListObject);
	}

}

std::vector<ListClusterFromGrafanaResult::PromCluster> ListClusterFromGrafanaResult::getPromClusterList()const
{
	return promClusterList_;
}

