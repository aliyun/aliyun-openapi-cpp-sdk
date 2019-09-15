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

#include <alibabacloud/aegis/model/OperationCustomizeReportChartRequest.h>

using AlibabaCloud::Aegis::Model::OperationCustomizeReportChartRequest;

OperationCustomizeReportChartRequest::OperationCustomizeReportChartRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "OperationCustomizeReportChart")
{}

OperationCustomizeReportChartRequest::~OperationCustomizeReportChartRequest()
{}

long OperationCustomizeReportChartRequest::getReportId()const
{
	return reportId_;
}

void OperationCustomizeReportChartRequest::setReportId(long reportId)
{
	reportId_ = reportId;
	setCoreParameter("ReportId", std::to_string(reportId));
}

std::string OperationCustomizeReportChartRequest::getChartIds()const
{
	return chartIds_;
}

void OperationCustomizeReportChartRequest::setChartIds(const std::string& chartIds)
{
	chartIds_ = chartIds;
	setCoreParameter("ChartIds", chartIds);
}

std::string OperationCustomizeReportChartRequest::getSourceIp()const
{
	return sourceIp_;
}

void OperationCustomizeReportChartRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string OperationCustomizeReportChartRequest::getLang()const
{
	return lang_;
}

void OperationCustomizeReportChartRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

