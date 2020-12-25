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

#include <alibabacloud/emr/model/DescribeFlowAgentUserRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowAgentUserRequest;

DescribeFlowAgentUserRequest::DescribeFlowAgentUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowAgentUser")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowAgentUserRequest::~DescribeFlowAgentUserRequest()
{}

long DescribeFlowAgentUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFlowAgentUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeFlowAgentUserRequest::getClusterBizId()const
{
	return clusterBizId_;
}

void DescribeFlowAgentUserRequest::setClusterBizId(const std::string& clusterBizId)
{
	clusterBizId_ = clusterBizId;
	setParameter("ClusterBizId", clusterBizId);
}

std::string DescribeFlowAgentUserRequest::getUserId()const
{
	return userId_;
}

void DescribeFlowAgentUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string DescribeFlowAgentUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFlowAgentUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeFlowAgentUserRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowAgentUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

