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

#include <alibabacloud/aegis/model/UpdateCustomizeReportStatusRequest.h>

using AlibabaCloud::Aegis::Model::UpdateCustomizeReportStatusRequest;

UpdateCustomizeReportStatusRequest::UpdateCustomizeReportStatusRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "UpdateCustomizeReportStatus")
{}

UpdateCustomizeReportStatusRequest::~UpdateCustomizeReportStatusRequest()
{}

long UpdateCustomizeReportStatusRequest::getReportId()const
{
	return reportId_;
}

void UpdateCustomizeReportStatusRequest::setReportId(long reportId)
{
	reportId_ = reportId;
	setCoreParameter("ReportId", std::to_string(reportId));
}

int UpdateCustomizeReportStatusRequest::getReportStatus()const
{
	return reportStatus_;
}

void UpdateCustomizeReportStatusRequest::setReportStatus(int reportStatus)
{
	reportStatus_ = reportStatus;
	setCoreParameter("ReportStatus", std::to_string(reportStatus));
}

std::string UpdateCustomizeReportStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateCustomizeReportStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string UpdateCustomizeReportStatusRequest::getLang()const
{
	return lang_;
}

void UpdateCustomizeReportStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

