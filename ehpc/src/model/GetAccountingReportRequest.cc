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

#include <alibabacloud/ehpc/model/GetAccountingReportRequest.h>

using AlibabaCloud::EHPC::Model::GetAccountingReportRequest;

GetAccountingReportRequest::GetAccountingReportRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetAccountingReport")
{
	setMethod(HttpRequest::Method::Get);
}

GetAccountingReportRequest::~GetAccountingReportRequest()
{}

std::string GetAccountingReportRequest::getReportType()const
{
	return reportType_;
}

void GetAccountingReportRequest::setReportType(const std::string& reportType)
{
	reportType_ = reportType;
	setParameter("ReportType", reportType);
}

int GetAccountingReportRequest::getEndTime()const
{
	return endTime_;
}

void GetAccountingReportRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string GetAccountingReportRequest::getFilterValue()const
{
	return filterValue_;
}

void GetAccountingReportRequest::setFilterValue(const std::string& filterValue)
{
	filterValue_ = filterValue;
	setParameter("FilterValue", filterValue);
}

std::string GetAccountingReportRequest::getDim()const
{
	return dim_;
}

void GetAccountingReportRequest::setDim(const std::string& dim)
{
	dim_ = dim;
	setParameter("Dim", dim);
}

std::string GetAccountingReportRequest::getClusterId()const
{
	return clusterId_;
}

void GetAccountingReportRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int GetAccountingReportRequest::getStartTime()const
{
	return startTime_;
}

void GetAccountingReportRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int GetAccountingReportRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetAccountingReportRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetAccountingReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAccountingReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetAccountingReportRequest::getJobId()const
{
	return jobId_;
}

void GetAccountingReportRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

int GetAccountingReportRequest::getPageSize()const
{
	return pageSize_;
}

void GetAccountingReportRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

