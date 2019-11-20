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

#include <alibabacloud/dnsknocker/model/GetDomainRequest.h>

using AlibabaCloud::DnsKnocker::Model::GetDomainRequest;

GetDomainRequest::GetDomainRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "GetDomain")
{
	setMethod(HttpRequest::Method::Post);
}

GetDomainRequest::~GetDomainRequest()
{}

std::string GetDomainRequest::getAccessID()const
{
	return accessID_;
}

void GetDomainRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string GetDomainRequest::getAccessSecret()const
{
	return accessSecret_;
}

void GetDomainRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string GetDomainRequest::getDomainName()const
{
	return domainName_;
}

void GetDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string GetDomainRequest::getDomainLine()const
{
	return domainLine_;
}

void GetDomainRequest::setDomainLine(const std::string& domainLine)
{
	domainLine_ = domainLine;
	setCoreParameter("DomainLine", domainLine);
}

std::string GetDomainRequest::getGroup()const
{
	return group_;
}

void GetDomainRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

