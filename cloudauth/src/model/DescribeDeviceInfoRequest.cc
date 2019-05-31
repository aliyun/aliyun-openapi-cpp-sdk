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

#include <alibabacloud/cloudauth/model/DescribeDeviceInfoRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeDeviceInfoRequest;

DescribeDeviceInfoRequest::DescribeDeviceInfoRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "DescribeDeviceInfo")
{}

DescribeDeviceInfoRequest::~DescribeDeviceInfoRequest()
{}

std::string DescribeDeviceInfoRequest::getBizType()const
{
	return bizType_;
}

void DescribeDeviceInfoRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setCoreParameter("BizType", bizType);
}

std::string DescribeDeviceInfoRequest::getUserDeviceId()const
{
	return userDeviceId_;
}

void DescribeDeviceInfoRequest::setUserDeviceId(const std::string& userDeviceId)
{
	userDeviceId_ = userDeviceId;
	setCoreParameter("UserDeviceId", userDeviceId);
}

int DescribeDeviceInfoRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeDeviceInfoRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", std::to_string(totalCount));
}

std::string DescribeDeviceInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDeviceInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeDeviceInfoRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDeviceInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeDeviceInfoRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDeviceInfoRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeDeviceInfoRequest::getLang()const
{
	return lang_;
}

void DescribeDeviceInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeDeviceInfoRequest::getExpiredEndDay()const
{
	return expiredEndDay_;
}

void DescribeDeviceInfoRequest::setExpiredEndDay(const std::string& expiredEndDay)
{
	expiredEndDay_ = expiredEndDay;
	setCoreParameter("ExpiredEndDay", expiredEndDay);
}

std::string DescribeDeviceInfoRequest::getDeviceId()const
{
	return deviceId_;
}

void DescribeDeviceInfoRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setCoreParameter("DeviceId", deviceId);
}

std::string DescribeDeviceInfoRequest::getExpiredStartDay()const
{
	return expiredStartDay_;
}

void DescribeDeviceInfoRequest::setExpiredStartDay(const std::string& expiredStartDay)
{
	expiredStartDay_ = expiredStartDay;
	setCoreParameter("ExpiredStartDay", expiredStartDay);
}

