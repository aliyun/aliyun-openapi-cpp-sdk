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

#include <alibabacloud/sddp/model/DescribeEventTopRequest.h>

using AlibabaCloud::Sddp::Model::DescribeEventTopRequest;

DescribeEventTopRequest::DescribeEventTopRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeEventTop")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventTopRequest::~DescribeEventTopRequest()
{}

std::string DescribeEventTopRequest::getProductCode()const
{
	return productCode_;
}

void DescribeEventTopRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string DescribeEventTopRequest::getStartTime()const
{
	return startTime_;
}

void DescribeEventTopRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeEventTopRequest::getUserId()const
{
	return userId_;
}

void DescribeEventTopRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

std::string DescribeEventTopRequest::getTypeCode()const
{
	return typeCode_;
}

void DescribeEventTopRequest::setTypeCode(const std::string& typeCode)
{
	typeCode_ = typeCode;
	setParameter("TypeCode", typeCode);
}

std::string DescribeEventTopRequest::getSubTypeCode()const
{
	return subTypeCode_;
}

void DescribeEventTopRequest::setSubTypeCode(const std::string& subTypeCode)
{
	subTypeCode_ = subTypeCode;
	setParameter("SubTypeCode", subTypeCode);
}

std::string DescribeEventTopRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEventTopRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeEventTopRequest::getTargetProductCode()const
{
	return targetProductCode_;
}

void DescribeEventTopRequest::setTargetProductCode(const std::string& targetProductCode)
{
	targetProductCode_ = targetProductCode;
	setParameter("TargetProductCode", targetProductCode);
}

int DescribeEventTopRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEventTopRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEventTopRequest::getLang()const
{
	return lang_;
}

void DescribeEventTopRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeEventTopRequest::getDealUserId()const
{
	return dealUserId_;
}

void DescribeEventTopRequest::setDealUserId(const std::string& dealUserId)
{
	dealUserId_ = dealUserId;
	setParameter("DealUserId", dealUserId);
}

int DescribeEventTopRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeEventTopRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeEventTopRequest::getEndTime()const
{
	return endTime_;
}

void DescribeEventTopRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

int DescribeEventTopRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeEventTopRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeEventTopRequest::getInstanceName()const
{
	return instanceName_;
}

void DescribeEventTopRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

long DescribeEventTopRequest::getDepartId()const
{
	return departId_;
}

void DescribeEventTopRequest::setDepartId(long departId)
{
	departId_ = departId;
	setParameter("DepartId", std::to_string(departId));
}

std::string DescribeEventTopRequest::getStatus()const
{
	return status_;
}

void DescribeEventTopRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

std::string DescribeEventTopRequest::getUserName()const
{
	return userName_;
}

void DescribeEventTopRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

