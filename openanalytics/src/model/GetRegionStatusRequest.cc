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

#include <alibabacloud/openanalytics/model/GetRegionStatusRequest.h>

using AlibabaCloud::Openanalytics::Model::GetRegionStatusRequest;

GetRegionStatusRequest::GetRegionStatusRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "GetRegionStatus")
{
	setMethod(HttpRequest::Method::Post);
}

GetRegionStatusRequest::~GetRegionStatusRequest()
{}

std::string GetRegionStatusRequest::getRegionID()const
{
	return regionID_;
}

void GetRegionStatusRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setBodyParameter("RegionID", regionID);
}

long GetRegionStatusRequest::getTargetUid()const
{
	return targetUid_;
}

void GetRegionStatusRequest::setTargetUid(long targetUid)
{
	targetUid_ = targetUid;
	setBodyParameter("TargetUid", std::to_string(targetUid));
}

