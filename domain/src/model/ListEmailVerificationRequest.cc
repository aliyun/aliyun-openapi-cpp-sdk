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

#include <alibabacloud/domain/model/ListEmailVerificationRequest.h>

using AlibabaCloud::Domain::Model::ListEmailVerificationRequest;

ListEmailVerificationRequest::ListEmailVerificationRequest() :
	RpcServiceRequest("domain", "2018-01-29", "ListEmailVerification")
{}

ListEmailVerificationRequest::~ListEmailVerificationRequest()
{}

long ListEmailVerificationRequest::getEndCreateTime()const
{
	return endCreateTime_;
}

void ListEmailVerificationRequest::setEndCreateTime(long endCreateTime)
{
	endCreateTime_ = endCreateTime;
	setCoreParameter("EndCreateTime", std::to_string(endCreateTime));
}

int ListEmailVerificationRequest::getPageNum()const
{
	return pageNum_;
}

void ListEmailVerificationRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int ListEmailVerificationRequest::getVerificationStatus()const
{
	return verificationStatus_;
}

void ListEmailVerificationRequest::setVerificationStatus(int verificationStatus)
{
	verificationStatus_ = verificationStatus;
	setCoreParameter("VerificationStatus", std::to_string(verificationStatus));
}

long ListEmailVerificationRequest::getBeginCreateTime()const
{
	return beginCreateTime_;
}

void ListEmailVerificationRequest::setBeginCreateTime(long beginCreateTime)
{
	beginCreateTime_ = beginCreateTime;
	setCoreParameter("BeginCreateTime", std::to_string(beginCreateTime));
}

int ListEmailVerificationRequest::getPageSize()const
{
	return pageSize_;
}

void ListEmailVerificationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListEmailVerificationRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ListEmailVerificationRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string ListEmailVerificationRequest::getLang()const
{
	return lang_;
}

void ListEmailVerificationRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ListEmailVerificationRequest::getEmail()const
{
	return email_;
}

void ListEmailVerificationRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", email);
}

