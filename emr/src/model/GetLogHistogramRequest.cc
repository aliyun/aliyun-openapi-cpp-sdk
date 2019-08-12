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

#include <alibabacloud/emr/model/GetLogHistogramRequest.h>

using AlibabaCloud::Emr::Model::GetLogHistogramRequest;

GetLogHistogramRequest::GetLogHistogramRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetLogHistogram")
{}

GetLogHistogramRequest::~GetLogHistogramRequest()
{}

long GetLogHistogramRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetLogHistogramRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetLogHistogramRequest::getHostInnerIp()const
{
	return hostInnerIp_;
}

void GetLogHistogramRequest::setHostInnerIp(const std::string& hostInnerIp)
{
	hostInnerIp_ = hostInnerIp;
	setCoreParameter("HostInnerIp", std::to_string(hostInnerIp));
}

std::string GetLogHistogramRequest::getHostName()const
{
	return hostName_;
}

void GetLogHistogramRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", std::to_string(hostName));
}

std::string GetLogHistogramRequest::getLogstoreName()const
{
	return logstoreName_;
}

void GetLogHistogramRequest::setLogstoreName(const std::string& logstoreName)
{
	logstoreName_ = logstoreName;
	setCoreParameter("LogstoreName", std::to_string(logstoreName));
}

int GetLogHistogramRequest::getFromTimestamp()const
{
	return fromTimestamp_;
}

void GetLogHistogramRequest::setFromTimestamp(int fromTimestamp)
{
	fromTimestamp_ = fromTimestamp;
	setCoreParameter("FromTimestamp", fromTimestamp);
}

std::string GetLogHistogramRequest::getRegionId()const
{
	return regionId_;
}

void GetLogHistogramRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int GetLogHistogramRequest::getToTimestamp()const
{
	return toTimestamp_;
}

void GetLogHistogramRequest::setToTimestamp(int toTimestamp)
{
	toTimestamp_ = toTimestamp;
	setCoreParameter("ToTimestamp", toTimestamp);
}

std::string GetLogHistogramRequest::getSlsQueryString()const
{
	return slsQueryString_;
}

void GetLogHistogramRequest::setSlsQueryString(const std::string& slsQueryString)
{
	slsQueryString_ = slsQueryString;
	setCoreParameter("SlsQueryString", std::to_string(slsQueryString));
}

std::string GetLogHistogramRequest::getClusterId()const
{
	return clusterId_;
}

void GetLogHistogramRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string GetLogHistogramRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLogHistogramRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

