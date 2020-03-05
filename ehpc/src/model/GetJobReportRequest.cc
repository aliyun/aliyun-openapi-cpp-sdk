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

#include <alibabacloud/ehpc/model/GetJobReportRequest.h>

using AlibabaCloud::EHPC::Model::GetJobReportRequest;

GetJobReportRequest::GetJobReportRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetJobReport")
{
	setMethod(HttpRequest::Method::GET);
}

GetJobReportRequest::~GetJobReportRequest()
{}

std::string GetJobReportRequest::getReportType()const
{
	return reportType_;
}

void GetJobReportRequest::setReportType(const std::string& reportType)
{
	reportType_ = reportType;
	setParameter("ReportType", reportType);
}

int GetJobReportRequest::getEndTime()const
{
	return endTime_;
}

void GetJobReportRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string GetJobReportRequest::getFilterValue()const
{
	return filterValue_;
}

void GetJobReportRequest::setFilterValue(const std::string& filterValue)
{
	filterValue_ = filterValue;
	setParameter("FilterValue", filterValue);
}

std::string GetJobReportRequest::getClusterId()const
{
	return clusterId_;
}

void GetJobReportRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int GetJobReportRequest::getStartTime()const
{
	return startTime_;
}

void GetJobReportRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string GetJobReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetJobReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

