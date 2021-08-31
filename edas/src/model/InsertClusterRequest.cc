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

#include <alibabacloud/edas/model/InsertClusterRequest.h>

using AlibabaCloud::Edas::Model::InsertClusterRequest;

InsertClusterRequest::InsertClusterRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/resource/cluster");
	setMethod(HttpRequest::Method::Post);
}

InsertClusterRequest::~InsertClusterRequest()
{}

int InsertClusterRequest::getClusterType()const
{
	return clusterType_;
}

void InsertClusterRequest::setClusterType(int clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", std::to_string(clusterType));
}

std::string InsertClusterRequest::getIaasProvider()const
{
	return iaasProvider_;
}

void InsertClusterRequest::setIaasProvider(const std::string& iaasProvider)
{
	iaasProvider_ = iaasProvider;
	setParameter("IaasProvider", iaasProvider);
}

std::string InsertClusterRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void InsertClusterRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string InsertClusterRequest::getClusterName()const
{
	return clusterName_;
}

void InsertClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string InsertClusterRequest::getVpcId()const
{
	return vpcId_;
}

void InsertClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

int InsertClusterRequest::getNetworkMode()const
{
	return networkMode_;
}

void InsertClusterRequest::setNetworkMode(int networkMode)
{
	networkMode_ = networkMode;
	setParameter("NetworkMode", std::to_string(networkMode));
}

int InsertClusterRequest::getOversoldFactor()const
{
	return oversoldFactor_;
}

void InsertClusterRequest::setOversoldFactor(int oversoldFactor)
{
	oversoldFactor_ = oversoldFactor;
	setParameter("OversoldFactor", std::to_string(oversoldFactor));
}

