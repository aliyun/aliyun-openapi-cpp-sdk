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

#include <alibabacloud/emr/model/DetachAndReleaseClusterEniRequest.h>

using AlibabaCloud::Emr::Model::DetachAndReleaseClusterEniRequest;

DetachAndReleaseClusterEniRequest::DetachAndReleaseClusterEniRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DetachAndReleaseClusterEni")
{
	setMethod(HttpRequest::Method::Post);
}

DetachAndReleaseClusterEniRequest::~DetachAndReleaseClusterEniRequest()
{}

long DetachAndReleaseClusterEniRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachAndReleaseClusterEniRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachAndReleaseClusterEniRequest::getTargetClusterId()const
{
	return targetClusterId_;
}

void DetachAndReleaseClusterEniRequest::setTargetClusterId(const std::string& targetClusterId)
{
	targetClusterId_ = targetClusterId;
	setParameter("TargetClusterId", targetClusterId);
}

std::string DetachAndReleaseClusterEniRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachAndReleaseClusterEniRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DetachAndReleaseClusterEniRequest::getVswitchId()const
{
	return vswitchId_;
}

void DetachAndReleaseClusterEniRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
}

std::string DetachAndReleaseClusterEniRequest::getRegionId()const
{
	return regionId_;
}

void DetachAndReleaseClusterEniRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

