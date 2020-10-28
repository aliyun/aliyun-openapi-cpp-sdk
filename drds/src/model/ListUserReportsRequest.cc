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

#include <alibabacloud/drds/model/ListUserReportsRequest.h>

using AlibabaCloud::Drds::Model::ListUserReportsRequest;

ListUserReportsRequest::ListUserReportsRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ListUserReports")
{
	setMethod(HttpRequest::Method::Post);
}

ListUserReportsRequest::~ListUserReportsRequest()
{}

long ListUserReportsRequest::getReportId()const
{
	return reportId_;
}

void ListUserReportsRequest::setReportId(long reportId)
{
	reportId_ = reportId;
	setParameter("ReportId", std::to_string(reportId));
}

std::string ListUserReportsRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ListUserReportsRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ListUserReportsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUserReportsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

