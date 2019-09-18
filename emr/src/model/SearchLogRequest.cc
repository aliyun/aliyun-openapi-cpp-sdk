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

#include <alibabacloud/emr/model/SearchLogRequest.h>

using AlibabaCloud::Emr::Model::SearchLogRequest;

SearchLogRequest::SearchLogRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SearchLog")
{}

SearchLogRequest::~SearchLogRequest()
{}

long SearchLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SearchLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int SearchLogRequest::getLine()const
{
	return line_;
}

void SearchLogRequest::setLine(int line)
{
	line_ = line;
	setCoreParameter("Line", std::to_string(line));
}

std::string SearchLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SearchLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SearchLogRequest::getHostName()const
{
	return hostName_;
}

void SearchLogRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string SearchLogRequest::getRegionId()const
{
	return regionId_;
}

void SearchLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SearchLogRequest::getLogstoreName()const
{
	return logstoreName_;
}

void SearchLogRequest::setLogstoreName(const std::string& logstoreName)
{
	logstoreName_ = logstoreName;
	setCoreParameter("LogstoreName", logstoreName);
}

int SearchLogRequest::getFromTimestamp()const
{
	return fromTimestamp_;
}

void SearchLogRequest::setFromTimestamp(int fromTimestamp)
{
	fromTimestamp_ = fromTimestamp;
	setCoreParameter("FromTimestamp", std::to_string(fromTimestamp));
}

int SearchLogRequest::getOffset()const
{
	return offset_;
}

void SearchLogRequest::setOffset(int offset)
{
	offset_ = offset;
	setCoreParameter("Offset", std::to_string(offset));
}

std::string SearchLogRequest::getClusterId()const
{
	return clusterId_;
}

void SearchLogRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

bool SearchLogRequest::getReverse()const
{
	return reverse_;
}

void SearchLogRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setCoreParameter("Reverse", reverse ? "true" : "false");
}

std::string SearchLogRequest::getHostInnerIp()const
{
	return hostInnerIp_;
}

void SearchLogRequest::setHostInnerIp(const std::string& hostInnerIp)
{
	hostInnerIp_ = hostInnerIp;
	setCoreParameter("HostInnerIp", hostInnerIp);
}

int SearchLogRequest::getToTimestamp()const
{
	return toTimestamp_;
}

void SearchLogRequest::setToTimestamp(int toTimestamp)
{
	toTimestamp_ = toTimestamp;
	setCoreParameter("ToTimestamp", std::to_string(toTimestamp));
}

std::string SearchLogRequest::getSlsQueryString()const
{
	return slsQueryString_;
}

void SearchLogRequest::setSlsQueryString(const std::string& slsQueryString)
{
	slsQueryString_ = slsQueryString;
	setCoreParameter("SlsQueryString", slsQueryString);
}

