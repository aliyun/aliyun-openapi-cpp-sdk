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

#include <alibabacloud/vs/model/DescribeVsTopDomainsByFlowRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsTopDomainsByFlowRequest;

DescribeVsTopDomainsByFlowRequest::DescribeVsTopDomainsByFlowRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsTopDomainsByFlow")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsTopDomainsByFlowRequest::~DescribeVsTopDomainsByFlowRequest()
{}

std::string DescribeVsTopDomainsByFlowRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsTopDomainsByFlowRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeVsTopDomainsByFlowRequest::getLimit()const
{
	return limit_;
}

void DescribeVsTopDomainsByFlowRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string DescribeVsTopDomainsByFlowRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsTopDomainsByFlowRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsTopDomainsByFlowRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsTopDomainsByFlowRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsTopDomainsByFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsTopDomainsByFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

