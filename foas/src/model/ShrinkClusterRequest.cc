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

#include <alibabacloud/foas/model/ShrinkClusterRequest.h>

using AlibabaCloud::Foas::Model::ShrinkClusterRequest;

ShrinkClusterRequest::ShrinkClusterRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters/[clusterId]/shrink");
	setMethod(HttpRequest::Method::Put);
}

ShrinkClusterRequest::~ShrinkClusterRequest()
{}

std::string ShrinkClusterRequest::getRegionId()const
{
	return regionId_;
}

void ShrinkClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string ShrinkClusterRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ShrinkClusterRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setBodyParameter("InstanceIds", instanceIds);
}

std::string ShrinkClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ShrinkClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ShrinkClusterRequest::getModelTargetCount()const
{
	return modelTargetCount_;
}

void ShrinkClusterRequest::setModelTargetCount(const std::string& modelTargetCount)
{
	modelTargetCount_ = modelTargetCount;
	setBodyParameter("ModelTargetCount", modelTargetCount);
}

