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

#include <alibabacloud/cloudwf/model/ReportZoneHourRequest.h>

using AlibabaCloud::Cloudwf::Model::ReportZoneHourRequest;

ReportZoneHourRequest::ReportZoneHourRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ReportZoneHour")
{
	setMethod(HttpRequest::Method::Post);
}

ReportZoneHourRequest::~ReportZoneHourRequest()
{}

std::string ReportZoneHourRequest::getBeginDate()const
{
	return beginDate_;
}

void ReportZoneHourRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setParameter("BeginDate", beginDate);
}

std::string ReportZoneHourRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportZoneHourRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ReportZoneHourRequest::getAgsid()const
{
	return agsid_;
}

void ReportZoneHourRequest::setAgsid(long agsid)
{
	agsid_ = agsid;
	setParameter("Agsid", std::to_string(agsid));
}

std::string ReportZoneHourRequest::getEndDate()const
{
	return endDate_;
}

void ReportZoneHourRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

