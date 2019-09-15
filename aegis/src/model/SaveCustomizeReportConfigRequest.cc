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

#include <alibabacloud/aegis/model/SaveCustomizeReportConfigRequest.h>

using AlibabaCloud::Aegis::Model::SaveCustomizeReportConfigRequest;

SaveCustomizeReportConfigRequest::SaveCustomizeReportConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "SaveCustomizeReportConfig")
{}

SaveCustomizeReportConfigRequest::~SaveCustomizeReportConfigRequest()
{}

int SaveCustomizeReportConfigRequest::getReportSendType()const
{
	return reportSendType_;
}

void SaveCustomizeReportConfigRequest::setReportSendType(int reportSendType)
{
	reportSendType_ = reportSendType;
	setCoreParameter("ReportSendType", std::to_string(reportSendType));
}

int SaveCustomizeReportConfigRequest::getReportType()const
{
	return reportType_;
}

void SaveCustomizeReportConfigRequest::setReportType(int reportType)
{
	reportType_ = reportType;
	setCoreParameter("ReportType", std::to_string(reportType));
}

long SaveCustomizeReportConfigRequest::getReportId()const
{
	return reportId_;
}

void SaveCustomizeReportConfigRequest::setReportId(long reportId)
{
	reportId_ = reportId;
	setCoreParameter("ReportId", std::to_string(reportId));
}

std::string SaveCustomizeReportConfigRequest::getReportEndDate()const
{
	return reportEndDate_;
}

void SaveCustomizeReportConfigRequest::setReportEndDate(const std::string& reportEndDate)
{
	reportEndDate_ = reportEndDate;
	setCoreParameter("ReportEndDate", reportEndDate);
}

std::string SaveCustomizeReportConfigRequest::getReportLang()const
{
	return reportLang_;
}

void SaveCustomizeReportConfigRequest::setReportLang(const std::string& reportLang)
{
	reportLang_ = reportLang;
	setCoreParameter("ReportLang", reportLang);
}

std::string SaveCustomizeReportConfigRequest::getTitle()const
{
	return title_;
}

void SaveCustomizeReportConfigRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

std::string SaveCustomizeReportConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void SaveCustomizeReportConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string SaveCustomizeReportConfigRequest::getReportStartDate()const
{
	return reportStartDate_;
}

void SaveCustomizeReportConfigRequest::setReportStartDate(const std::string& reportStartDate)
{
	reportStartDate_ = reportStartDate;
	setCoreParameter("ReportStartDate", reportStartDate);
}

std::string SaveCustomizeReportConfigRequest::getLang()const
{
	return lang_;
}

void SaveCustomizeReportConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int SaveCustomizeReportConfigRequest::getReportStatus()const
{
	return reportStatus_;
}

void SaveCustomizeReportConfigRequest::setReportStatus(int reportStatus)
{
	reportStatus_ = reportStatus;
	setCoreParameter("ReportStatus", std::to_string(reportStatus));
}

std::string SaveCustomizeReportConfigRequest::getRecipients()const
{
	return recipients_;
}

void SaveCustomizeReportConfigRequest::setRecipients(const std::string& recipients)
{
	recipients_ = recipients;
	setCoreParameter("Recipients", recipients);
}

std::string SaveCustomizeReportConfigRequest::getSendTime()const
{
	return sendTime_;
}

void SaveCustomizeReportConfigRequest::setSendTime(const std::string& sendTime)
{
	sendTime_ = sendTime;
	setCoreParameter("SendTime", sendTime);
}

