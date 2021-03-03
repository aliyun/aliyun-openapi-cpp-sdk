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

#include <alibabacloud/dcdn/model/DescribeDcdnReportListRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnReportListRequest;

DescribeDcdnReportListRequest::DescribeDcdnReportListRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnReportList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnReportListRequest::~DescribeDcdnReportListRequest()
{}

long DescribeDcdnReportListRequest::getReportId()const
{
	return reportId_;
}

void DescribeDcdnReportListRequest::setReportId(long reportId)
{
	reportId_ = reportId;
	setParameter("ReportId", std::to_string(reportId));
}

std::string DescribeDcdnReportListRequest::getPermission()const
{
	return permission_;
}

void DescribeDcdnReportListRequest::setPermission(const std::string& permission)
{
	permission_ = permission;
	setParameter("Permission", permission);
}

long DescribeDcdnReportListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnReportListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnReportListRequest::getStatus()const
{
	return status_;
}

void DescribeDcdnReportListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

