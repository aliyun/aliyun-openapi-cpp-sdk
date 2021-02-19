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

#include <alibabacloud/cassandra/model/DescribeClusterDashboardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeClusterDashboardResult::DescribeClusterDashboardResult() :
	ServiceResult()
{}

DescribeClusterDashboardResult::DescribeClusterDashboardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterDashboardResult::~DescribeClusterDashboardResult()
{}

void DescribeClusterDashboardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dashboardNode = value["Dashboard"];
	if(!dashboardNode["ClusterId"].isNull())
		dashboard_.clusterId = dashboardNode["ClusterId"].asString();
	auto allDataCentersNode = dashboardNode["DataCenters"]["DataCenter"];
	for (auto dashboardNodeDataCentersDataCenter : allDataCentersNode)
	{
		Dashboard::DataCenter dataCenterObject;
		if(!dashboardNodeDataCentersDataCenter["DataCenterId"].isNull())
			dataCenterObject.dataCenterId = dashboardNodeDataCentersDataCenter["DataCenterId"].asString();
		auto allNodesNode = dashboardNodeDataCentersDataCenter["Nodes"]["Node"];
		for (auto dashboardNodeDataCentersDataCenterNodesNode : allNodesNode)
		{
			Dashboard::DataCenter::Node nodesObject;
			if(!dashboardNodeDataCentersDataCenterNodesNode["Address"].isNull())
				nodesObject.address = dashboardNodeDataCentersDataCenterNodesNode["Address"].asString();
			if(!dashboardNodeDataCentersDataCenterNodesNode["Status"].isNull())
				nodesObject.status = dashboardNodeDataCentersDataCenterNodesNode["Status"].asString();
			if(!dashboardNodeDataCentersDataCenterNodesNode["Load"].isNull())
				nodesObject.load = dashboardNodeDataCentersDataCenterNodesNode["Load"].asString();
			dataCenterObject.nodes.push_back(nodesObject);
		}
		dashboard_.dataCenters.push_back(dataCenterObject);
	}

}

DescribeClusterDashboardResult::Dashboard DescribeClusterDashboardResult::getDashboard()const
{
	return dashboard_;
}

