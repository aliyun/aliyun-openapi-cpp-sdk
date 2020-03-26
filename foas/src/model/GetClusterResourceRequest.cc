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

#include <alibabacloud/foas/model/GetClusterResourceRequest.h>

using AlibabaCloud::Foas::Model::GetClusterResourceRequest;

GetClusterResourceRequest::GetClusterResourceRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters/[clusterId]/resource");
	setMethod(HttpRequest::Method::Get);
}

GetClusterResourceRequest::~GetClusterResourceRequest()
{}

std::string GetClusterResourceRequest::getRegionId()const
{
	return regionId_;
}

void GetClusterResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string GetClusterResourceRequest::getClusterId()const
{
	return clusterId_;
}

void GetClusterResourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

