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

#include <alibabacloud/cloudauth/model/DescribeWhitelistRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeWhitelistRequest;

DescribeWhitelistRequest::DescribeWhitelistRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeWhitelist")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeWhitelistRequest::~DescribeWhitelistRequest()
{}

std::string DescribeWhitelistRequest::getValidEndDate()const
{
	return validEndDate_;
}

void DescribeWhitelistRequest::setValidEndDate(const std::string& validEndDate)
{
	validEndDate_ = validEndDate;
	setParameter("ValidEndDate", validEndDate);
}

std::string DescribeWhitelistRequest::getValid()const
{
	return valid_;
}

void DescribeWhitelistRequest::setValid(const std::string& valid)
{
	valid_ = valid;
	setParameter("Valid", valid);
}

std::string DescribeWhitelistRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhitelistRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeWhitelistRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWhitelistRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeWhitelistRequest::getLang()const
{
	return lang_;
}

void DescribeWhitelistRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeWhitelistRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWhitelistRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeWhitelistRequest::getBizType()const
{
	return bizType_;
}

void DescribeWhitelistRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string DescribeWhitelistRequest::getIdCardNum()const
{
	return idCardNum_;
}

void DescribeWhitelistRequest::setIdCardNum(const std::string& idCardNum)
{
	idCardNum_ = idCardNum;
	setParameter("IdCardNum", idCardNum);
}

std::string DescribeWhitelistRequest::getBizId()const
{
	return bizId_;
}

void DescribeWhitelistRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string DescribeWhitelistRequest::getValidStartDate()const
{
	return validStartDate_;
}

void DescribeWhitelistRequest::setValidStartDate(const std::string& validStartDate)
{
	validStartDate_ = validStartDate;
	setParameter("ValidStartDate", validStartDate);
}

