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

#include <alibabacloud/aegis/model/CopyCustomizeReportConfigRequest.h>

using AlibabaCloud::Aegis::Model::CopyCustomizeReportConfigRequest;

CopyCustomizeReportConfigRequest::CopyCustomizeReportConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CopyCustomizeReportConfig")
{}

CopyCustomizeReportConfigRequest::~CopyCustomizeReportConfigRequest()
{}

std::string CopyCustomizeReportConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void CopyCustomizeReportConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long CopyCustomizeReportConfigRequest::getReportId()const
{
	return reportId_;
}

void CopyCustomizeReportConfigRequest::setReportId(long reportId)
{
	reportId_ = reportId;
	setCoreParameter("ReportId", std::to_string(reportId));
}

std::string CopyCustomizeReportConfigRequest::getLang()const
{
	return lang_;
}

void CopyCustomizeReportConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

