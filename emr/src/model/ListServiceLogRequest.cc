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

#include <alibabacloud/emr/model/ListServiceLogRequest.h>

using AlibabaCloud::Emr::Model::ListServiceLogRequest;

ListServiceLogRequest::ListServiceLogRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListServiceLog")
{}

ListServiceLogRequest::~ListServiceLogRequest()
{}

long ListServiceLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListServiceLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListServiceLogRequest::getHostName()const
{
	return hostName_;
}

void ListServiceLogRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", std::to_string(hostName));
}

int ListServiceLogRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListServiceLogRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", maxKeys);
}

std::string ListServiceLogRequest::getLogstoreName()const
{
	return logstoreName_;
}

void ListServiceLogRequest::setLogstoreName(const std::string& logstoreName)
{
	logstoreName_ = logstoreName;
	setCoreParameter("LogstoreName", std::to_string(logstoreName));
}

std::string ListServiceLogRequest::getRegionId()const
{
	return regionId_;
}

void ListServiceLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListServiceLogRequest::getMarker()const
{
	return marker_;
}

void ListServiceLogRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", std::to_string(marker));
}

std::string ListServiceLogRequest::getClusterId()const
{
	return clusterId_;
}

void ListServiceLogRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string ListServiceLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListServiceLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

