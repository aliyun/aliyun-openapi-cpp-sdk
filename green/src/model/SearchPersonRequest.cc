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

#include <alibabacloud/green/model/SearchPersonRequest.h>

using AlibabaCloud::Green::Model::SearchPersonRequest;

SearchPersonRequest::SearchPersonRequest() :
	RoaServiceRequest("green", "2018-05-09")
{
	setResourcePath("/green/sface/search");
	setMethod(HttpRequest::Method::Post);
}

SearchPersonRequest::~SearchPersonRequest()
{}

std::string SearchPersonRequest::getRegionId()const
{
	return regionId_;
}

void SearchPersonRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SearchPersonRequest::getClientInfo()const
{
	return clientInfo_;
}

void SearchPersonRequest::setClientInfo(const std::string& clientInfo)
{
	clientInfo_ = clientInfo;
	setParameter("ClientInfo", clientInfo);
}

