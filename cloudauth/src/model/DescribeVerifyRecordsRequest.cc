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

#include <alibabacloud/cloudauth/model/DescribeVerifyRecordsRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeVerifyRecordsRequest;

DescribeVerifyRecordsRequest::DescribeVerifyRecordsRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeVerifyRecords")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVerifyRecordsRequest::~DescribeVerifyRecordsRequest()
{}

std::string DescribeVerifyRecordsRequest::getStatusList()const
{
	return statusList_;
}

void DescribeVerifyRecordsRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", statusList);
}

std::string DescribeVerifyRecordsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeVerifyRecordsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

std::string DescribeVerifyRecordsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVerifyRecordsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeVerifyRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVerifyRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeVerifyRecordsRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeVerifyRecordsRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", std::to_string(totalCount));
}

int DescribeVerifyRecordsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeVerifyRecordsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeVerifyRecordsRequest::getQueryId()const
{
	return queryId_;
}

void DescribeVerifyRecordsRequest::setQueryId(const std::string& queryId)
{
	queryId_ = queryId;
	setCoreParameter("QueryId", queryId);
}

std::string DescribeVerifyRecordsRequest::getBizType()const
{
	return bizType_;
}

void DescribeVerifyRecordsRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setCoreParameter("BizType", bizType);
}

std::string DescribeVerifyRecordsRequest::getIdCardNum()const
{
	return idCardNum_;
}

void DescribeVerifyRecordsRequest::setIdCardNum(const std::string& idCardNum)
{
	idCardNum_ = idCardNum;
	setCoreParameter("IdCardNum", idCardNum);
}

std::string DescribeVerifyRecordsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeVerifyRecordsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

std::string DescribeVerifyRecordsRequest::getBizId()const
{
	return bizId_;
}

void DescribeVerifyRecordsRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

