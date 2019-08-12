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

#include <alibabacloud/domain/model/QueryRegistrantProfilesRequest.h>

using AlibabaCloud::Domain::Model::QueryRegistrantProfilesRequest;

QueryRegistrantProfilesRequest::QueryRegistrantProfilesRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryRegistrantProfiles")
{}

QueryRegistrantProfilesRequest::~QueryRegistrantProfilesRequest()
{}

std::string QueryRegistrantProfilesRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void QueryRegistrantProfilesRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setCoreParameter("RegistrantOrganization", std::to_string(registrantOrganization));
}

std::string QueryRegistrantProfilesRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryRegistrantProfilesRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

long QueryRegistrantProfilesRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void QueryRegistrantProfilesRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setCoreParameter("RegistrantProfileId", registrantProfileId);
}

int QueryRegistrantProfilesRequest::getPageSize()const
{
	return pageSize_;
}

void QueryRegistrantProfilesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryRegistrantProfilesRequest::getRegistrantType()const
{
	return registrantType_;
}

void QueryRegistrantProfilesRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setCoreParameter("RegistrantType", std::to_string(registrantType));
}

std::string QueryRegistrantProfilesRequest::getRegistrantProfileType()const
{
	return registrantProfileType_;
}

void QueryRegistrantProfilesRequest::setRegistrantProfileType(const std::string& registrantProfileType)
{
	registrantProfileType_ = registrantProfileType;
	setCoreParameter("RegistrantProfileType", std::to_string(registrantProfileType));
}

std::string QueryRegistrantProfilesRequest::getRealNameStatus()const
{
	return realNameStatus_;
}

void QueryRegistrantProfilesRequest::setRealNameStatus(const std::string& realNameStatus)
{
	realNameStatus_ = realNameStatus;
	setCoreParameter("RealNameStatus", std::to_string(realNameStatus));
}

std::string QueryRegistrantProfilesRequest::getLang()const
{
	return lang_;
}

void QueryRegistrantProfilesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

int QueryRegistrantProfilesRequest::getPageNum()const
{
	return pageNum_;
}

void QueryRegistrantProfilesRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

bool QueryRegistrantProfilesRequest::getDefaultRegistrantProfile()const
{
	return defaultRegistrantProfile_;
}

void QueryRegistrantProfilesRequest::setDefaultRegistrantProfile(bool defaultRegistrantProfile)
{
	defaultRegistrantProfile_ = defaultRegistrantProfile;
	setCoreParameter("DefaultRegistrantProfile", defaultRegistrantProfile ? "true" : "false");
}

std::string QueryRegistrantProfilesRequest::getEmail()const
{
	return email_;
}

void QueryRegistrantProfilesRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", std::to_string(email));
}

std::string QueryRegistrantProfilesRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void QueryRegistrantProfilesRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setCoreParameter("ZhRegistrantOrganization", std::to_string(zhRegistrantOrganization));
}

