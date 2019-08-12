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
{}

GetAccountingReportRequest::~GetAccountingReportRequest()
{}

std::string GetAccountingReportRequest::getReportType()const
{
	return reportType_;
}

void GetAccountingReportRequest::setReportType(const std::string& reportType)
{
	reportType_ = reportType;
	setCoreParameter("ReportType", std::to_string(reportType));
}

int GetAccountingReportRequest::getEndTime()const
{
	return endTime_;
}

void GetAccountingReportRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string GetAccountingReportRequest::getClusterId()const
{
	return clusterId_;
}

void GetAccountingReportRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

int GetAccountingReportRequest::getStartTime()const
{
	return startTime_;
}

void GetAccountingReportRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string GetAccountingReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAccountingReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

