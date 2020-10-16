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

#include <alibabacloud/hbase/model/DeleteServerlessClusterRequest.h>

using AlibabaCloud::HBase::Model::DeleteServerlessClusterRequest;

DeleteServerlessClusterRequest::DeleteServerlessClusterRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DeleteServerlessCluster")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteServerlessClusterRequest::~DeleteServerlessClusterRequest()
{}

std::string DeleteServerlessClusterRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteServerlessClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteServerlessClusterRequest::getRegionId()const
{
	return regionId_;
}

void DeleteServerlessClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteServerlessClusterRequest::getZoneId()const
{
	return zoneId_;
}

void DeleteServerlessClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

