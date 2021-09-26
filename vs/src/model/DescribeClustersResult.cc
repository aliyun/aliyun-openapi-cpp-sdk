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

#include <alibabacloud/vs/model/DescribeClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeClustersResult::DescribeClustersResult() :
	ServiceResult()
{}

DescribeClustersResult::DescribeClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClustersResult::~DescribeClustersResult()
{}

void DescribeClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["Cluster"];
	for (auto valueClustersCluster : allClustersNode)
	{
		Cluster clustersObject;
		if(!valueClustersCluster["ClusterId"].isNull())
			clustersObject.clusterId = valueClustersCluster["ClusterId"].asString();
		if(!valueClustersCluster["Name"].isNull())
			clustersObject.name = valueClustersCluster["Name"].asString();
		if(!valueClustersCluster["Description"].isNull())
			clustersObject.description = valueClustersCluster["Description"].asString();
		if(!valueClustersCluster["MaintainTime"].isNull())
			clustersObject.maintainTime = valueClustersCluster["MaintainTime"].asString();
		if(!valueClustersCluster["Status"].isNull())
			clustersObject.status = valueClustersCluster["Status"].asString();
		auto allInternalPortsNode = valueClustersCluster["InternalPorts"]["InternalPort"];
		for (auto valueClustersClusterInternalPortsInternalPort : allInternalPortsNode)
		{
			Cluster::InternalPort internalPortsObject;
			if(!valueClustersClusterInternalPortsInternalPort["Platform"].isNull())
				internalPortsObject.platform = valueClustersClusterInternalPortsInternalPort["Platform"].asString();
			if(!valueClustersClusterInternalPortsInternalPort["IpProtocol"].isNull())
				internalPortsObject.ipProtocol = valueClustersClusterInternalPortsInternalPort["IpProtocol"].asString();
			auto allPort = value["Port"]["Port"];
			for (auto value : allPort)
				internalPortsObject.port.push_back(value.asString());
			clustersObject.internalPorts.push_back(internalPortsObject);
		}
		clusters_.push_back(clustersObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeClustersResult::getTotal()const
{
	return total_;
}

std::vector<DescribeClustersResult::Cluster> DescribeClustersResult::getClusters()const
{
	return clusters_;
}

