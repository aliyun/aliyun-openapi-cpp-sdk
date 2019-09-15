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

#include <alibabacloud/aegis/model/DescribeCustomizeReportListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeCustomizeReportListRequest;

DescribeCustomizeReportListRequest::DescribeCustomizeReportListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeCustomizeReportList")
{}

DescribeCustomizeReportListRequest::~DescribeCustomizeReportListRequest()
{}

int DescribeCustomizeReportListRequest::getReportType()const
{
	return reportType_;
}

void DescribeCustomizeReportListRequest::setReportType(int reportType)
{
	reportType_ = reportType;
	setCoreParameter("ReportType", std::to_string(reportType));
}

int DescribeCustomizeReportListRequest::getReportStatus()const
{
	return reportStatus_;
}

void DescribeCustomizeReportListRequest::setReportStatus(int reportStatus)
{
	reportStatus_ = reportStatus;
	setCoreParameter("ReportStatus", std::to_string(reportStatus));
}

std::string DescribeCustomizeReportListRequest::getTitle()const
{
	return title_;
}

void DescribeCustomizeReportListRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

std::string DescribeCustomizeReportListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCustomizeReportListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCustomizeReportListRequest::getLang()const
{
	return lang_;
}

void DescribeCustomizeReportListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

