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

#include <alibabacloud/domain/model/QueryRegistrantProfileRealNameVerificationInfoRequest.h>

using AlibabaCloud::Domain::Model::QueryRegistrantProfileRealNameVerificationInfoRequest;

QueryRegistrantProfileRealNameVerificationInfoRequest::QueryRegistrantProfileRealNameVerificationInfoRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryRegistrantProfileRealNameVerificationInfo")
{}

QueryRegistrantProfileRealNameVerificationInfoRequest::~QueryRegistrantProfileRealNameVerificationInfoRequest()
{}

bool QueryRegistrantProfileRealNameVerificationInfoRequest::getFetchImage()const
{
	return fetchImage_;
}

void QueryRegistrantProfileRealNameVerificationInfoRequest::setFetchImage(bool fetchImage)
{
	fetchImage_ = fetchImage;
	setCoreParameter("FetchImage", fetchImage ? "true" : "false");
}

std::string QueryRegistrantProfileRealNameVerificationInfoRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryRegistrantProfileRealNameVerificationInfoRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

long QueryRegistrantProfileRealNameVerificationInfoRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void QueryRegistrantProfileRealNameVerificationInfoRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setCoreParameter("RegistrantProfileId", std::to_string(registrantProfileId));
}

std::string QueryRegistrantProfileRealNameVerificationInfoRequest::getLang()const
{
	return lang_;
}

void QueryRegistrantProfileRealNameVerificationInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

