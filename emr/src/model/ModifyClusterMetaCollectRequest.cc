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

#include <alibabacloud/emr/model/ModifyClusterMetaCollectRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterMetaCollectRequest;

ModifyClusterMetaCollectRequest::ModifyClusterMetaCollectRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterMetaCollect")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyClusterMetaCollectRequest::~ModifyClusterMetaCollectRequest()
{}

long ModifyClusterMetaCollectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterMetaCollectRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterMetaCollectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterMetaCollectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterMetaCollectRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterMetaCollectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyClusterMetaCollectRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterMetaCollectRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

bool ModifyClusterMetaCollectRequest::getSwitchOn()const
{
	return switchOn_;
}

void ModifyClusterMetaCollectRequest::setSwitchOn(bool switchOn)
{
	switchOn_ = switchOn;
	setParameter("SwitchOn", switchOn ? "true" : "false");
}

