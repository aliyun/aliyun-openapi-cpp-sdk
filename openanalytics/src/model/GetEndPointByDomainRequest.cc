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

#include <alibabacloud/openanalytics/model/GetEndPointByDomainRequest.h>

using AlibabaCloud::Openanalytics::Model::GetEndPointByDomainRequest;

GetEndPointByDomainRequest::GetEndPointByDomainRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "GetEndPointByDomain")
{
	setMethod(HttpRequest::Method::Post);
}

GetEndPointByDomainRequest::~GetEndPointByDomainRequest()
{}

std::string GetEndPointByDomainRequest::getRegionID()const
{
	return regionID_;
}

void GetEndPointByDomainRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setBodyParameter("RegionID", regionID);
}

long GetEndPointByDomainRequest::getUserID()const
{
	return userID_;
}

void GetEndPointByDomainRequest::setUserID(long userID)
{
	userID_ = userID;
	setBodyParameter("UserID", std::to_string(userID));
}

std::string GetEndPointByDomainRequest::getDomainURL()const
{
	return domainURL_;
}

void GetEndPointByDomainRequest::setDomainURL(const std::string& domainURL)
{
	domainURL_ = domainURL;
	setBodyParameter("DomainURL", domainURL);
}

