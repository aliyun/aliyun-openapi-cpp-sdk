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

#include <alibabacloud/vs/model/DescribeVsDomainSnapshotDataRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsDomainSnapshotDataRequest;

DescribeVsDomainSnapshotDataRequest::DescribeVsDomainSnapshotDataRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsDomainSnapshotData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsDomainSnapshotDataRequest::~DescribeVsDomainSnapshotDataRequest()
{}

std::string DescribeVsDomainSnapshotDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsDomainSnapshotDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVsDomainSnapshotDataRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsDomainSnapshotDataRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsDomainSnapshotDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsDomainSnapshotDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsDomainSnapshotDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsDomainSnapshotDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsDomainSnapshotDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsDomainSnapshotDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

