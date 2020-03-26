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

#include <alibabacloud/httpdns/model/GetResolveStatisticsRequest.h>

using AlibabaCloud::Httpdns::Model::GetResolveStatisticsRequest;

GetResolveStatisticsRequest::GetResolveStatisticsRequest() :
	RpcServiceRequest("httpdns", "2016-02-01", "GetResolveStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

GetResolveStatisticsRequest::~GetResolveStatisticsRequest()
{}

std::string GetResolveStatisticsRequest::getProtocolName()const
{
	return protocolName_;
}

void GetResolveStatisticsRequest::setProtocolName(const std::string& protocolName)
{
	protocolName_ = protocolName;
	setParameter("ProtocolName", protocolName);
}

std::string GetResolveStatisticsRequest::getDomainName()const
{
	return domainName_;
}

void GetResolveStatisticsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

int GetResolveStatisticsRequest::getTimeSpan()const
{
	return timeSpan_;
}

void GetResolveStatisticsRequest::setTimeSpan(int timeSpan)
{
	timeSpan_ = timeSpan;
	setParameter("TimeSpan", std::to_string(timeSpan));
}

std::string GetResolveStatisticsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetResolveStatisticsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetResolveStatisticsRequest::getGranularity()const
{
	return granularity_;
}

void GetResolveStatisticsRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setParameter("Granularity", granularity);
}

