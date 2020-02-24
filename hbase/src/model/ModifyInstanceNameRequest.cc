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

#include <alibabacloud/hbase/model/ModifyInstanceNameRequest.h>

using AlibabaCloud::HBase::Model::ModifyInstanceNameRequest;

ModifyInstanceNameRequest::ModifyInstanceNameRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifyInstanceName")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceNameRequest::~ModifyInstanceNameRequest()
{}

std::string ModifyInstanceNameRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceNameRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyInstanceNameRequest::getClusterName()const
{
	return clusterName_;
}

void ModifyInstanceNameRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ModifyInstanceNameRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyInstanceNameRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyInstanceNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyInstanceNameRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceNameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyInstanceNameRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyInstanceNameRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

