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

#include <alibabacloud/sae/model/BindSlbRequest.h>

using AlibabaCloud::Sae::Model::BindSlbRequest;

BindSlbRequest::BindSlbRequest() :
	RoaServiceRequest("sae", "2019-05-06")
{
	setResourcePath("/pop/v1/sam/app/slb");
	setMethod(HttpRequest::Method::Post);
}

BindSlbRequest::~BindSlbRequest()
{}

std::string BindSlbRequest::getIntranet()const
{
	return intranet_;
}

void BindSlbRequest::setIntranet(const std::string& intranet)
{
	intranet_ = intranet;
	setParameter("Intranet", intranet);
}

std::string BindSlbRequest::getIntranetSlbId()const
{
	return intranetSlbId_;
}

void BindSlbRequest::setIntranetSlbId(const std::string& intranetSlbId)
{
	intranetSlbId_ = intranetSlbId;
	setParameter("IntranetSlbId", intranetSlbId);
}

std::string BindSlbRequest::getInternetSlbId()const
{
	return internetSlbId_;
}

void BindSlbRequest::setInternetSlbId(const std::string& internetSlbId)
{
	internetSlbId_ = internetSlbId;
	setParameter("InternetSlbId", internetSlbId);
}

std::string BindSlbRequest::getAppId()const
{
	return appId_;
}

void BindSlbRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string BindSlbRequest::getInternet()const
{
	return internet_;
}

void BindSlbRequest::setInternet(const std::string& internet)
{
	internet_ = internet;
	setParameter("Internet", internet);
}

