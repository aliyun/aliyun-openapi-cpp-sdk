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

#include <alibabacloud/emr/model/DescribeFlowVariableCollectionRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowVariableCollectionRequest;

DescribeFlowVariableCollectionRequest::DescribeFlowVariableCollectionRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowVariableCollection")
{}

DescribeFlowVariableCollectionRequest::~DescribeFlowVariableCollectionRequest()
{}

std::string DescribeFlowVariableCollectionRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowVariableCollectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeFlowVariableCollectionRequest::getEntityId()const
{
	return entityId_;
}

void DescribeFlowVariableCollectionRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setCoreParameter("EntityId", entityId);
}

