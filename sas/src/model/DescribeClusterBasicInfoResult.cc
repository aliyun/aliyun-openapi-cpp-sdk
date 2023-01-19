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

#include <alibabacloud/sas/model/DescribeClusterBasicInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeClusterBasicInfoResult::DescribeClusterBasicInfoResult() :
	ServiceResult()
{}

DescribeClusterBasicInfoResult::DescribeClusterBasicInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterBasicInfoResult::~DescribeClusterBasicInfoResult()
{}

void DescribeClusterBasicInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterInfoNode = value["ClusterInfo"];
	if(!clusterInfoNode["InstanceCount"].isNull())
		clusterInfo_.instanceCount = std::stoi(clusterInfoNode["InstanceCount"].asString());
	if(!clusterInfoNode["ClusterType"].isNull())
		clusterInfo_.clusterType = clusterInfoNode["ClusterType"].asString();
	if(!clusterInfoNode["State"].isNull())
		clusterInfo_.state = clusterInfoNode["State"].asString();
	if(!clusterInfoNode["CreateTime"].isNull())
		clusterInfo_.createTime = std::stol(clusterInfoNode["CreateTime"].asString());
	if(!clusterInfoNode["ClusterName"].isNull())
		clusterInfo_.clusterName = clusterInfoNode["ClusterName"].asString();
	if(!clusterInfoNode["CurrentVersion"].isNull())
		clusterInfo_.currentVersion = clusterInfoNode["CurrentVersion"].asString();
	if(!clusterInfoNode["TargetResult"].isNull())
		clusterInfo_.targetResult = clusterInfoNode["TargetResult"].asString() == "true";
	if(!clusterInfoNode["RegionId"].isNull())
		clusterInfo_.regionId = clusterInfoNode["RegionId"].asString();
	if(!clusterInfoNode["ClusterId"].isNull())
		clusterInfo_.clusterId = clusterInfoNode["ClusterId"].asString();

}

DescribeClusterBasicInfoResult::ClusterInfo DescribeClusterBasicInfoResult::getClusterInfo()const
{
	return clusterInfo_;
}

