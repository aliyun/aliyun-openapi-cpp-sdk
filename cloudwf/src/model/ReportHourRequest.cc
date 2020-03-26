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

#include <alibabacloud/cloudwf/model/ReportHourRequest.h>

using AlibabaCloud::Cloudwf::Model::ReportHourRequest;

ReportHourRequest::ReportHourRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ReportHour")
{
	setMethod(HttpRequest::Method::Post);
}

ReportHourRequest::~ReportHourRequest()
{}

std::string ReportHourRequest::getBeginDate()const
{
	return beginDate_;
}

void ReportHourRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setParameter("BeginDate", beginDate);
}

std::string ReportHourRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportHourRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ReportHourRequest::getAgsid()const
{
	return agsid_;
}

void ReportHourRequest::setAgsid(long agsid)
{
	agsid_ = agsid;
	setParameter("Agsid", std::to_string(agsid));
}

std::string ReportHourRequest::getEndDate()const
{
	return endDate_;
}

void ReportHourRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

