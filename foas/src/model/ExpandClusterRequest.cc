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

#include <alibabacloud/foas/model/ExpandClusterRequest.h>

using AlibabaCloud::Foas::Model::ExpandClusterRequest;

ExpandClusterRequest::ExpandClusterRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters/[clusterId]/expand");
	setMethod(HttpRequest::Method::Put);
}

ExpandClusterRequest::~ExpandClusterRequest()
{}

std::string ExpandClusterRequest::getRegionId()const
{
	return regionId_;
}

void ExpandClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

int ExpandClusterRequest::getCount()const
{
	return count_;
}

void ExpandClusterRequest::setCount(int count)
{
	count_ = count;
	setBodyParameter("Count", std::to_string(count));
}

std::string ExpandClusterRequest::getModel()const
{
	return model_;
}

void ExpandClusterRequest::setModel(const std::string& model)
{
	model_ = model;
	setBodyParameter("Model", model);
}

std::string ExpandClusterRequest::getUserVSwitch()const
{
	return userVSwitch_;
}

void ExpandClusterRequest::setUserVSwitch(const std::string& userVSwitch)
{
	userVSwitch_ = userVSwitch;
	setBodyParameter("UserVSwitch", userVSwitch);
}

std::string ExpandClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ExpandClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

