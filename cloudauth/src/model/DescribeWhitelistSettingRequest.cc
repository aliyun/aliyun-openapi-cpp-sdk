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

#include <alibabacloud/cloudauth/model/DescribeWhitelistSettingRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeWhitelistSettingRequest;

DescribeWhitelistSettingRequest::DescribeWhitelistSettingRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeWhitelistSetting")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeWhitelistSettingRequest::~DescribeWhitelistSettingRequest()
{}

long DescribeWhitelistSettingRequest::getValidEndDate()const
{
	return validEndDate_;
}

void DescribeWhitelistSettingRequest::setValidEndDate(long validEndDate)
{
	validEndDate_ = validEndDate;
	setParameter("ValidEndDate", std::to_string(validEndDate));
}

std::string DescribeWhitelistSettingRequest::getCertifyId()const
{
	return certifyId_;
}

void DescribeWhitelistSettingRequest::setCertifyId(const std::string& certifyId)
{
	certifyId_ = certifyId;
	setParameter("CertifyId", certifyId);
}

std::string DescribeWhitelistSettingRequest::getCertNo()const
{
	return certNo_;
}

void DescribeWhitelistSettingRequest::setCertNo(const std::string& certNo)
{
	certNo_ = certNo;
	setParameter("CertNo", certNo);
}

std::string DescribeWhitelistSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhitelistSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeWhitelistSettingRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWhitelistSettingRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeWhitelistSettingRequest::getLang()const
{
	return lang_;
}

void DescribeWhitelistSettingRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeWhitelistSettingRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWhitelistSettingRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeWhitelistSettingRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeWhitelistSettingRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setParameter("ServiceCode", serviceCode);
}

long DescribeWhitelistSettingRequest::getSceneId()const
{
	return sceneId_;
}

void DescribeWhitelistSettingRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", std::to_string(sceneId));
}

long DescribeWhitelistSettingRequest::getValidStartDate()const
{
	return validStartDate_;
}

void DescribeWhitelistSettingRequest::setValidStartDate(long validStartDate)
{
	validStartDate_ = validStartDate;
	setParameter("ValidStartDate", std::to_string(validStartDate));
}

std::string DescribeWhitelistSettingRequest::getStatus()const
{
	return status_;
}

void DescribeWhitelistSettingRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

