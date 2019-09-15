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

#include <alibabacloud/aegis/model/DescribeLogItemsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeLogItemsRequest;

DescribeLogItemsRequest::DescribeLogItemsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeLogItems")
{}

DescribeLogItemsRequest::~DescribeLogItemsRequest()
{}

int DescribeLogItemsRequest::getPortSnapshotOffset()const
{
	return portSnapshotOffset_;
}

void DescribeLogItemsRequest::setPortSnapshotOffset(int portSnapshotOffset)
{
	portSnapshotOffset_ = portSnapshotOffset;
	setCoreParameter("PortSnapshotOffset", std::to_string(portSnapshotOffset));
}

int DescribeLogItemsRequest::getNetworkOffset()const
{
	return networkOffset_;
}

void DescribeLogItemsRequest::setNetworkOffset(int networkOffset)
{
	networkOffset_ = networkOffset;
	setCoreParameter("NetworkOffset", std::to_string(networkOffset));
}

std::string DescribeLogItemsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLogItemsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int DescribeLogItemsRequest::getProcessOffset()const
{
	return processOffset_;
}

void DescribeLogItemsRequest::setProcessOffset(int processOffset)
{
	processOffset_ = processOffset;
	setCoreParameter("ProcessOffset", std::to_string(processOffset));
}

std::string DescribeLogItemsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeLogItemsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeLogItemsRequest::getCrackOffset()const
{
	return crackOffset_;
}

void DescribeLogItemsRequest::setCrackOffset(int crackOffset)
{
	crackOffset_ = crackOffset;
	setCoreParameter("CrackOffset", std::to_string(crackOffset));
}

std::string DescribeLogItemsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLogItemsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeLogItemsRequest::getLoginOffset()const
{
	return loginOffset_;
}

void DescribeLogItemsRequest::setLoginOffset(int loginOffset)
{
	loginOffset_ = loginOffset;
	setCoreParameter("LoginOffset", std::to_string(loginOffset));
}

int DescribeLogItemsRequest::getProcessSnapshotOffset()const
{
	return processSnapshotOffset_;
}

void DescribeLogItemsRequest::setProcessSnapshotOffset(int processSnapshotOffset)
{
	processSnapshotOffset_ = processSnapshotOffset;
	setCoreParameter("ProcessSnapshotOffset", std::to_string(processSnapshotOffset));
}

std::string DescribeLogItemsRequest::getQuery()const
{
	return query_;
}

void DescribeLogItemsRequest::setQuery(const std::string& query)
{
	query_ = query;
	setCoreParameter("Query", query);
}

std::string DescribeLogItemsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLogItemsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLogItemsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeLogItemsRequest::setCurrentPage(const std::string& currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

int DescribeLogItemsRequest::getAccountSnapshotOffset()const
{
	return accountSnapshotOffset_;
}

void DescribeLogItemsRequest::setAccountSnapshotOffset(int accountSnapshotOffset)
{
	accountSnapshotOffset_ = accountSnapshotOffset;
	setCoreParameter("AccountSnapshotOffset", std::to_string(accountSnapshotOffset));
}

