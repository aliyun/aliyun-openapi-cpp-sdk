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

#include <alibabacloud/sddp/model/DescribeAuditLogsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeAuditLogsRequest;

DescribeAuditLogsRequest::DescribeAuditLogsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeAuditLogs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAuditLogsRequest::~DescribeAuditLogsRequest()
{}

int DescribeAuditLogsRequest::getProductCode()const
{
	return productCode_;
}

void DescribeAuditLogsRequest::setProductCode(int productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", std::to_string(productCode));
}

long DescribeAuditLogsRequest::getProductId()const
{
	return productId_;
}

void DescribeAuditLogsRequest::setProductId(long productId)
{
	productId_ = productId;
	setCoreParameter("ProductId", std::to_string(productId));
}

long DescribeAuditLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAuditLogsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeAuditLogsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAuditLogsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeAuditLogsRequest::getClientIp()const
{
	return clientIp_;
}

void DescribeAuditLogsRequest::setClientIp(const std::string& clientIp)
{
	clientIp_ = clientIp;
	setCoreParameter("ClientIp", clientIp);
}

int DescribeAuditLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAuditLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAuditLogsRequest::getLang()const
{
	return lang_;
}

void DescribeAuditLogsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeAuditLogsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeAuditLogsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

long DescribeAuditLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAuditLogsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

int DescribeAuditLogsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAuditLogsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAuditLogsRequest::getClientUa()const
{
	return clientUa_;
}

void DescribeAuditLogsRequest::setClientUa(const std::string& clientUa)
{
	clientUa_ = clientUa;
	setCoreParameter("ClientUa", clientUa);
}

std::string DescribeAuditLogsRequest::getInstanceName()const
{
	return instanceName_;
}

void DescribeAuditLogsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string DescribeAuditLogsRequest::getUserName()const
{
	return userName_;
}

void DescribeAuditLogsRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

