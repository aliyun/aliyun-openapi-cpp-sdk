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

#include <alibabacloud/cloudwf/model/ReportZoneDayRequest.h>

using AlibabaCloud::Cloudwf::Model::ReportZoneDayRequest;

ReportZoneDayRequest::ReportZoneDayRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ReportZoneDay")
{
	setMethod(HttpRequest::Method::Post);
}

ReportZoneDayRequest::~ReportZoneDayRequest()
{}

std::string ReportZoneDayRequest::getBeginDate()const
{
	return beginDate_;
}

void ReportZoneDayRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setParameter("BeginDate", beginDate);
}

std::string ReportZoneDayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportZoneDayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ReportZoneDayRequest::getAgsid()const
{
	return agsid_;
}

void ReportZoneDayRequest::setAgsid(long agsid)
{
	agsid_ = agsid;
	setParameter("Agsid", std::to_string(agsid));
}

std::string ReportZoneDayRequest::getEndDate()const
{
	return endDate_;
}

void ReportZoneDayRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

