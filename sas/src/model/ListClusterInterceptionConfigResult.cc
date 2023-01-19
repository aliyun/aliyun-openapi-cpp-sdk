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

#include <alibabacloud/sas/model/ListClusterInterceptionConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListClusterInterceptionConfigResult::ListClusterInterceptionConfigResult() :
	ServiceResult()
{}

ListClusterInterceptionConfigResult::ListClusterInterceptionConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterInterceptionConfigResult::~ListClusterInterceptionConfigResult()
{}

void ListClusterInterceptionConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterConfigListNode = value["ClusterConfigList"]["ClusterConfig"];
	for (auto valueClusterConfigListClusterConfig : allClusterConfigListNode)
	{
		ClusterConfig clusterConfigListObject;
		if(!valueClusterConfigListClusterConfig["ClusterName"].isNull())
			clusterConfigListObject.clusterName = valueClusterConfigListClusterConfig["ClusterName"].asString();
		if(!valueClusterConfigListClusterConfig["InterceptionSwitch"].isNull())
			clusterConfigListObject.interceptionSwitch = std::stoi(valueClusterConfigListClusterConfig["InterceptionSwitch"].asString());
		if(!valueClusterConfigListClusterConfig["InterceptionType"].isNull())
			clusterConfigListObject.interceptionType = std::stoi(valueClusterConfigListClusterConfig["InterceptionType"].asString());
		if(!valueClusterConfigListClusterConfig["ClusterId"].isNull())
			clusterConfigListObject.clusterId = valueClusterConfigListClusterConfig["ClusterId"].asString();
		if(!valueClusterConfigListClusterConfig["ClusterCNNFStatus"].isNull())
			clusterConfigListObject.clusterCNNFStatus = std::stoi(valueClusterConfigListClusterConfig["ClusterCNNFStatus"].asString());
		if(!valueClusterConfigListClusterConfig["OpenRuleCount"].isNull())
			clusterConfigListObject.openRuleCount = std::stol(valueClusterConfigListClusterConfig["OpenRuleCount"].asString());
		if(!valueClusterConfigListClusterConfig["TotalRuleCount"].isNull())
			clusterConfigListObject.totalRuleCount = std::stol(valueClusterConfigListClusterConfig["TotalRuleCount"].asString());
		if(!valueClusterConfigListClusterConfig["SupportCNNF"].isNull())
			clusterConfigListObject.supportCNNF = valueClusterConfigListClusterConfig["SupportCNNF"].asString() == "true";
		if(!valueClusterConfigListClusterConfig["ClusterType"].isNull())
			clusterConfigListObject.clusterType = valueClusterConfigListClusterConfig["ClusterType"].asString();
		clusterConfigList_.push_back(clusterConfigListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["CurrrentPage"].isNull())
		pageInfo_.currrentPage = std::stoi(pageInfoNode["CurrrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());

}

ListClusterInterceptionConfigResult::PageInfo ListClusterInterceptionConfigResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListClusterInterceptionConfigResult::ClusterConfig> ListClusterInterceptionConfigResult::getClusterConfigList()const
{
	return clusterConfigList_;
}

