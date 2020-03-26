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

#include <alibabacloud/arms/model/ListPromClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListPromClustersResult::ListPromClustersResult() :
	ServiceResult()
{}

ListPromClustersResult::ListPromClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPromClustersResult::~ListPromClustersResult()
{}

void ListPromClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPromClusterListNode = value["PromClusterList"]["PromCluster"];
	for (auto valuePromClusterListPromCluster : allPromClusterListNode)
	{
		PromCluster promClusterListObject;
		if(!valuePromClusterListPromCluster["Id"].isNull())
			promClusterListObject.id = std::stol(valuePromClusterListPromCluster["Id"].asString());
		if(!valuePromClusterListPromCluster["ClusterId"].isNull())
			promClusterListObject.clusterId = valuePromClusterListPromCluster["ClusterId"].asString();
		if(!valuePromClusterListPromCluster["ClusterName"].isNull())
			promClusterListObject.clusterName = valuePromClusterListPromCluster["ClusterName"].asString();
		if(!valuePromClusterListPromCluster["AgentStatus"].isNull())
			promClusterListObject.agentStatus = valuePromClusterListPromCluster["AgentStatus"].asString();
		if(!valuePromClusterListPromCluster["ClusterType"].isNull())
			promClusterListObject.clusterType = valuePromClusterListPromCluster["ClusterType"].asString();
		if(!valuePromClusterListPromCluster["ControllerId"].isNull())
			promClusterListObject.controllerId = valuePromClusterListPromCluster["ControllerId"].asString();
		if(!valuePromClusterListPromCluster["IsControllerInstalled"].isNull())
			promClusterListObject.isControllerInstalled = valuePromClusterListPromCluster["IsControllerInstalled"].asString() == "true";
		if(!valuePromClusterListPromCluster["UserId"].isNull())
			promClusterListObject.userId = valuePromClusterListPromCluster["UserId"].asString();
		if(!valuePromClusterListPromCluster["RegionId"].isNull())
			promClusterListObject.regionId = valuePromClusterListPromCluster["RegionId"].asString();
		if(!valuePromClusterListPromCluster["PluginsJsonArray"].isNull())
			promClusterListObject.pluginsJsonArray = valuePromClusterListPromCluster["PluginsJsonArray"].asString();
		if(!valuePromClusterListPromCluster["StateJson"].isNull())
			promClusterListObject.stateJson = valuePromClusterListPromCluster["StateJson"].asString();
		if(!valuePromClusterListPromCluster["NodeNum"].isNull())
			promClusterListObject.nodeNum = std::stoi(valuePromClusterListPromCluster["NodeNum"].asString());
		if(!valuePromClusterListPromCluster["CreateTime"].isNull())
			promClusterListObject.createTime = std::stol(valuePromClusterListPromCluster["CreateTime"].asString());
		if(!valuePromClusterListPromCluster["UpdateTime"].isNull())
			promClusterListObject.updateTime = std::stol(valuePromClusterListPromCluster["UpdateTime"].asString());
		if(!valuePromClusterListPromCluster["LastHeartBeatTime"].isNull())
			promClusterListObject.lastHeartBeatTime = std::stol(valuePromClusterListPromCluster["LastHeartBeatTime"].asString());
		if(!valuePromClusterListPromCluster["InstallTime"].isNull())
			promClusterListObject.installTime = std::stol(valuePromClusterListPromCluster["InstallTime"].asString());
		if(!valuePromClusterListPromCluster["Extra"].isNull())
			promClusterListObject.extra = valuePromClusterListPromCluster["Extra"].asString();
		if(!valuePromClusterListPromCluster["Options"].isNull())
			promClusterListObject.options = valuePromClusterListPromCluster["Options"].asString();
		promClusterList_.push_back(promClusterListObject);
	}

}

std::vector<ListPromClustersResult::PromCluster> ListPromClustersResult::getPromClusterList()const
{
	return promClusterList_;
}

