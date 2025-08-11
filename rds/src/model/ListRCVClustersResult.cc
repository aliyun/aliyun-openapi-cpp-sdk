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

#include <alibabacloud/rds/model/ListRCVClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ListRCVClustersResult::ListRCVClustersResult() :
	ServiceResult()
{}

ListRCVClustersResult::ListRCVClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRCVClustersResult::~ListRCVClustersResult()
{}

void ListRCVClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVClustersNode = value["VClusters"]["VCluster"];
	for (auto valueVClustersVCluster : allVClustersNode)
	{
		VCluster vClustersObject;
		if(!valueVClustersVCluster["InstanceCount"].isNull())
			vClustersObject.instanceCount = std::stol(valueVClustersVCluster["InstanceCount"].asString());
		if(!valueVClustersVCluster["VpcId"].isNull())
			vClustersObject.vpcId = valueVClustersVCluster["VpcId"].asString();
		if(!valueVClustersVCluster["ClusterId"].isNull())
			vClustersObject.clusterId = valueVClustersVCluster["ClusterId"].asString();
		if(!valueVClustersVCluster["RegionId"].isNull())
			vClustersObject.regionId = valueVClustersVCluster["RegionId"].asString();
		auto allSupportDiskPerformanceLevel = value["SupportDiskPerformanceLevel"]["DiskPerformanceLevel"];
		for (auto value : allSupportDiskPerformanceLevel)
			vClustersObject.supportDiskPerformanceLevel.push_back(value.asString());
		vClusters_.push_back(vClustersObject);
	}

}

std::vector<ListRCVClustersResult::VCluster> ListRCVClustersResult::getVClusters()const
{
	return vClusters_;
}

