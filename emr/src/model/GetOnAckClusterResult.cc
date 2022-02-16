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

#include <alibabacloud/emr/model/GetOnAckClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetOnAckClusterResult::GetOnAckClusterResult() :
	ServiceResult()
{}

GetOnAckClusterResult::GetOnAckClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOnAckClusterResult::~GetOnAckClusterResult()
{}

void GetOnAckClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterNode = value["Cluster"];
	if(!clusterNode["ClusterId"].isNull())
		cluster_.clusterId = clusterNode["ClusterId"].asString();
	if(!clusterNode["ClusterName"].isNull())
		cluster_.clusterName = clusterNode["ClusterName"].asString();
	if(!clusterNode["ClusterType"].isNull())
		cluster_.clusterType = clusterNode["ClusterType"].asString();
	if(!clusterNode["ClusterVersion"].isNull())
		cluster_.clusterVersion = clusterNode["ClusterVersion"].asString();
	if(!clusterNode["ClusterStatus"].isNull())
		cluster_.clusterStatus = clusterNode["ClusterStatus"].asString();
	if(!clusterNode["FailReason"].isNull())
		cluster_.failReason = clusterNode["FailReason"].asString();
	if(!clusterNode["CreateTime"].isNull())
		cluster_.createTime = std::stol(clusterNode["CreateTime"].asString());
	if(!clusterNode["KubeClusterId"].isNull())
		cluster_.kubeClusterId = clusterNode["KubeClusterId"].asString();
	if(!clusterNode["KubeNamespace"].isNull())
		cluster_.kubeNamespace = clusterNode["KubeNamespace"].asString();
	if(!clusterNode["OssPath"].isNull())
		cluster_.ossPath = clusterNode["OssPath"].asString();
	if(!clusterNode["VpcId"].isNull())
		cluster_.vpcId = clusterNode["VpcId"].asString();
	if(!clusterNode["NodeLabel"].isNull())
		cluster_.nodeLabel = clusterNode["NodeLabel"].asString();

}

GetOnAckClusterResult::Cluster GetOnAckClusterResult::getCluster()const
{
	return cluster_;
}

