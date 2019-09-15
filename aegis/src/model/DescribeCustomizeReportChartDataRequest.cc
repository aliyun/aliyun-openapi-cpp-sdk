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

#include <alibabacloud/aegis/model/DescribeCustomizeReportChartDataRequest.h>

using AlibabaCloud::Aegis::Model::DescribeCustomizeReportChartDataRequest;

DescribeCustomizeReportChartDataRequest::DescribeCustomizeReportChartDataRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeCustomizeReportChartData")
{}

DescribeCustomizeReportChartDataRequest::~DescribeCustomizeReportChartDataRequest()
{}

long DescribeCustomizeReportChartDataRequest::getReportId()const
{
	return reportId_;
}

void DescribeCustomizeReportChartDataRequest::setReportId(long reportId)
{
	reportId_ = reportId;
	setCoreParameter("ReportId", std::to_string(reportId));
}

std::string DescribeCustomizeReportChartDataRequest::getChartIds()const
{
	return chartIds_;
}

void DescribeCustomizeReportChartDataRequest::setChartIds(const std::string& chartIds)
{
	chartIds_ = chartIds;
	setCoreParameter("ChartIds", chartIds);
}

std::string DescribeCustomizeReportChartDataRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCustomizeReportChartDataRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCustomizeReportChartDataRequest::getLang()const
{
	return lang_;
}

void DescribeCustomizeReportChartDataRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

