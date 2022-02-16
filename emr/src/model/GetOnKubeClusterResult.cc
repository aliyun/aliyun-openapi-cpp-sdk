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

#include <alibabacloud/emr/model/GetOnKubeClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetOnKubeClusterResult::GetOnKubeClusterResult() :
	ServiceResult()
{}

GetOnKubeClusterResult::GetOnKubeClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOnKubeClusterResult::~GetOnKubeClusterResult()
{}

void GetOnKubeClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto onKubeClusterDetailNode = value["OnKubeClusterDetail"];
	if(!onKubeClusterDetailNode["ClusterId"].isNull())
		onKubeClusterDetail_.clusterId = onKubeClusterDetailNode["ClusterId"].asString();
	if(!onKubeClusterDetailNode["ClusterName"].isNull())
		onKubeClusterDetail_.clusterName = onKubeClusterDetailNode["ClusterName"].asString();
	if(!onKubeClusterDetailNode["ClusterType"].isNull())
		onKubeClusterDetail_.clusterType = onKubeClusterDetailNode["ClusterType"].asString();
	if(!onKubeClusterDetailNode["ClusterVersion"].isNull())
		onKubeClusterDetail_.clusterVersion = onKubeClusterDetailNode["ClusterVersion"].asString();
	if(!onKubeClusterDetailNode["ClusterStatus"].isNull())
		onKubeClusterDetail_.clusterStatus = onKubeClusterDetailNode["ClusterStatus"].asString();
	if(!onKubeClusterDetailNode["FailReason"].isNull())
		onKubeClusterDetail_.failReason = onKubeClusterDetailNode["FailReason"].asString();
	if(!onKubeClusterDetailNode["CreateTime"].isNull())
		onKubeClusterDetail_.createTime = std::stol(onKubeClusterDetailNode["CreateTime"].asString());
	if(!onKubeClusterDetailNode["KubeClusterId"].isNull())
		onKubeClusterDetail_.kubeClusterId = onKubeClusterDetailNode["KubeClusterId"].asString();
	if(!onKubeClusterDetailNode["KubeNamespace"].isNull())
		onKubeClusterDetail_.kubeNamespace = onKubeClusterDetailNode["KubeNamespace"].asString();
	if(!onKubeClusterDetailNode["OssPath"].isNull())
		onKubeClusterDetail_.ossPath = onKubeClusterDetailNode["OssPath"].asString();
	if(!onKubeClusterDetailNode["VpcId"].isNull())
		onKubeClusterDetail_.vpcId = onKubeClusterDetailNode["VpcId"].asString();
	if(!onKubeClusterDetailNode["NodeLabel"].isNull())
		onKubeClusterDetail_.nodeLabel = onKubeClusterDetailNode["NodeLabel"].asString();

}

GetOnKubeClusterResult::OnKubeClusterDetail GetOnKubeClusterResult::getOnKubeClusterDetail()const
{
	return onKubeClusterDetail_;
}

