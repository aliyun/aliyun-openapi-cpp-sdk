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

#include <alibabacloud/yundun-ds/model/DescribeEventsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeEventsRequest;

DescribeEventsRequest::DescribeEventsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeEvents")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventsRequest::~DescribeEventsRequest()
{}

std::string DescribeEventsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeEventsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeEventsRequest::getUserId()const
{
	return userId_;
}

void DescribeEventsRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

std::string DescribeEventsRequest::getTypeCode()const
{
	return typeCode_;
}

void DescribeEventsRequest::setTypeCode(const std::string& typeCode)
{
	typeCode_ = typeCode;
	setParameter("TypeCode", typeCode);
}

std::string DescribeEventsRequest::getSubTypeCode()const
{
	return subTypeCode_;
}

void DescribeEventsRequest::setSubTypeCode(const std::string& subTypeCode)
{
	subTypeCode_ = subTypeCode;
	setParameter("SubTypeCode", subTypeCode);
}

std::string DescribeEventsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEventsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEventsRequest::getLang()const
{
	return lang_;
}

void DescribeEventsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeEventsRequest::getDealUserId()const
{
	return dealUserId_;
}

void DescribeEventsRequest::setDealUserId(const std::string& dealUserId)
{
	dealUserId_ = dealUserId;
	setParameter("DealUserId", dealUserId);
}

int DescribeEventsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeEventsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeEventsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeEventsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

int DescribeEventsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeEventsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeEventsRequest::getDepartId()const
{
	return departId_;
}

void DescribeEventsRequest::setDepartId(long departId)
{
	departId_ = departId;
	setParameter("DepartId", std::to_string(departId));
}

std::string DescribeEventsRequest::getStatus()const
{
	return status_;
}

void DescribeEventsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

