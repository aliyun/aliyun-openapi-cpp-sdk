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

#include <alibabacloud/sas/model/DescribeClusterInfoListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeClusterInfoListResult::DescribeClusterInfoListResult() :
	ServiceResult()
{}

DescribeClusterInfoListResult::DescribeClusterInfoListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterInfoListResult::~DescribeClusterInfoListResult()
{}

void DescribeClusterInfoListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterListNode = value["ClusterList"]["ClusterInfo"];
	for (auto valueClusterListClusterInfo : allClusterListNode)
	{
		ClusterInfo clusterListObject;
		if(!valueClusterListClusterInfo["State"].isNull())
			clusterListObject.state = valueClusterListClusterInfo["State"].asString();
		if(!valueClusterListClusterInfo["ClusterType"].isNull())
			clusterListObject.clusterType = valueClusterListClusterInfo["ClusterType"].asString();
		if(!valueClusterListClusterInfo["ClusterName"].isNull())
			clusterListObject.clusterName = valueClusterListClusterInfo["ClusterName"].asString();
		if(!valueClusterListClusterInfo["ClusterId"].isNull())
			clusterListObject.clusterId = valueClusterListClusterInfo["ClusterId"].asString();
		if(!valueClusterListClusterInfo["RegionId"].isNull())
			clusterListObject.regionId = valueClusterListClusterInfo["RegionId"].asString();
		if(!valueClusterListClusterInfo["TargetResult"].isNull())
			clusterListObject.targetResult = valueClusterListClusterInfo["TargetResult"].asString() == "true";
		clusterList_.push_back(clusterListObject);
	}

}

std::vector<DescribeClusterInfoListResult::ClusterInfo> DescribeClusterInfoListResult::getClusterList()const
{
	return clusterList_;
}

