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

#include <alibabacloud/cassandra/model/ModifyClusterRequest.h>

using AlibabaCloud::Cassandra::Model::ModifyClusterRequest;

ModifyClusterRequest::ModifyClusterRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "ModifyCluster")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyClusterRequest::~ModifyClusterRequest()
{}

std::string ModifyClusterRequest::getClusterName()const
{
	return clusterName_;
}

void ModifyClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ModifyClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

