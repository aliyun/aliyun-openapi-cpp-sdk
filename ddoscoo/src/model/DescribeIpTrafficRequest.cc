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

#include <alibabacloud/ddoscoo/model/DescribeIpTrafficRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeIpTrafficRequest;

DescribeIpTrafficRequest::DescribeIpTrafficRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeIpTraffic")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeIpTrafficRequest::~DescribeIpTrafficRequest()
{}

long DescribeIpTrafficRequest::getStartTime()const
{
	return startTime_;
}

void DescribeIpTrafficRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeIpTrafficRequest::getEip()const
{
	return eip_;
}

void DescribeIpTrafficRequest::setEip(const std::string& eip)
{
	eip_ = eip;
	setParameter("Eip", eip);
}

std::string DescribeIpTrafficRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeIpTrafficRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeIpTrafficRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeIpTrafficRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeIpTrafficRequest::getEndTime()const
{
	return endTime_;
}

void DescribeIpTrafficRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int DescribeIpTrafficRequest::getPort()const
{
	return port_;
}

void DescribeIpTrafficRequest::setPort(int port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string DescribeIpTrafficRequest::getQueryProtocol()const
{
	return queryProtocol_;
}

void DescribeIpTrafficRequest::setQueryProtocol(const std::string& queryProtocol)
{
	queryProtocol_ = queryProtocol;
	setParameter("QueryProtocol", queryProtocol);
}

int DescribeIpTrafficRequest::getInterval()const
{
	return interval_;
}

void DescribeIpTrafficRequest::setInterval(int interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

