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

#include <alibabacloud/emr/model/GetLogDownloadUrlRequest.h>

using AlibabaCloud::Emr::Model::GetLogDownloadUrlRequest;

GetLogDownloadUrlRequest::GetLogDownloadUrlRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetLogDownloadUrl")
{}

GetLogDownloadUrlRequest::~GetLogDownloadUrlRequest()
{}

long GetLogDownloadUrlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetLogDownloadUrlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetLogDownloadUrlRequest::getHostName()const
{
	return hostName_;
}

void GetLogDownloadUrlRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", std::to_string(hostName));
}

std::string GetLogDownloadUrlRequest::getLogstoreName()const
{
	return logstoreName_;
}

void GetLogDownloadUrlRequest::setLogstoreName(const std::string& logstoreName)
{
	logstoreName_ = logstoreName;
	setCoreParameter("LogstoreName", std::to_string(logstoreName));
}

std::string GetLogDownloadUrlRequest::getRegionId()const
{
	return regionId_;
}

void GetLogDownloadUrlRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string GetLogDownloadUrlRequest::getClusterId()const
{
	return clusterId_;
}

void GetLogDownloadUrlRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string GetLogDownloadUrlRequest::getLogFileName()const
{
	return logFileName_;
}

void GetLogDownloadUrlRequest::setLogFileName(const std::string& logFileName)
{
	logFileName_ = logFileName;
	setCoreParameter("LogFileName", std::to_string(logFileName));
}

std::string GetLogDownloadUrlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLogDownloadUrlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

