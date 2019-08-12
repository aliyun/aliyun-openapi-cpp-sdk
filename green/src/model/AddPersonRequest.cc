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

#include <alibabacloud/green/model/AddPersonRequest.h>

using AlibabaCloud::Green::Model::AddPersonRequest;

AddPersonRequest::AddPersonRequest() :
	RoaServiceRequest("green", "2018-05-09")
{}

AddPersonRequest::~AddPersonRequest()
{}

std::string AddPersonRequest::getRegionId()const
{
	return regionId_;
}

void AddPersonRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddPersonRequest::getClientInfo()const
{
	return clientInfo_;
}

void AddPersonRequest::setClientInfo(const std::string& clientInfo)
{
	clientInfo_ = clientInfo;
	setCoreParameter("ClientInfo", clientInfo);
}

