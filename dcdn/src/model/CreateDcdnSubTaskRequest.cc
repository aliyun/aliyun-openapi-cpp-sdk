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

#include <alibabacloud/dcdn/model/CreateDcdnSubTaskRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnSubTaskRequest;

CreateDcdnSubTaskRequest::CreateDcdnSubTaskRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnSubTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDcdnSubTaskRequest::~CreateDcdnSubTaskRequest()
{}

std::string CreateDcdnSubTaskRequest::getStartTime()const
{
	return startTime_;
}

void CreateDcdnSubTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string CreateDcdnSubTaskRequest::getDomainName()const
{
	return domainName_;
}

void CreateDcdnSubTaskRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setBodyParameter("DomainName", domainName);
}

std::string CreateDcdnSubTaskRequest::getEndTime()const
{
	return endTime_;
}

void CreateDcdnSubTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

long CreateDcdnSubTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDcdnSubTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDcdnSubTaskRequest::getReportIds()const
{
	return reportIds_;
}

void CreateDcdnSubTaskRequest::setReportIds(const std::string& reportIds)
{
	reportIds_ = reportIds;
	setBodyParameter("ReportIds", reportIds);
}

std::string CreateDcdnSubTaskRequest::getStatus()const
{
	return status_;
}

void CreateDcdnSubTaskRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

