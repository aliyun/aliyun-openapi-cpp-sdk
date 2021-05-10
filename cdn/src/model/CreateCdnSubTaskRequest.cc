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

#include <alibabacloud/cdn/model/CreateCdnSubTaskRequest.h>

using AlibabaCloud::Cdn::Model::CreateCdnSubTaskRequest;

CreateCdnSubTaskRequest::CreateCdnSubTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "CreateCdnSubTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCdnSubTaskRequest::~CreateCdnSubTaskRequest()
{}

std::string CreateCdnSubTaskRequest::getStartTime()const
{
	return startTime_;
}

void CreateCdnSubTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string CreateCdnSubTaskRequest::getDomainName()const
{
	return domainName_;
}

void CreateCdnSubTaskRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setBodyParameter("DomainName", domainName);
}

std::string CreateCdnSubTaskRequest::getEndTime()const
{
	return endTime_;
}

void CreateCdnSubTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

long CreateCdnSubTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCdnSubTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateCdnSubTaskRequest::getReportIds()const
{
	return reportIds_;
}

void CreateCdnSubTaskRequest::setReportIds(const std::string& reportIds)
{
	reportIds_ = reportIds;
	setBodyParameter("ReportIds", reportIds);
}

std::string CreateCdnSubTaskRequest::getStatus()const
{
	return status_;
}

void CreateCdnSubTaskRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

