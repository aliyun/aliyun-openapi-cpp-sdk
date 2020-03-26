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

#include <alibabacloud/openanalytics/model/SetAllowIPRequest.h>

using AlibabaCloud::Openanalytics::Model::SetAllowIPRequest;

SetAllowIPRequest::SetAllowIPRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "SetAllowIP")
{
	setMethod(HttpRequest::Method::Post);
}

SetAllowIPRequest::~SetAllowIPRequest()
{}

std::string SetAllowIPRequest::getRegionID()const
{
	return regionID_;
}

void SetAllowIPRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setBodyParameter("RegionID", regionID);
}

long SetAllowIPRequest::getUserID()const
{
	return userID_;
}

void SetAllowIPRequest::setUserID(long userID)
{
	userID_ = userID;
	setBodyParameter("UserID", std::to_string(userID));
}

std::string SetAllowIPRequest::getNetworkType()const
{
	return networkType_;
}

void SetAllowIPRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setBodyParameter("NetworkType", networkType);
}

std::string SetAllowIPRequest::getAllowIP()const
{
	return allowIP_;
}

void SetAllowIPRequest::setAllowIP(const std::string& allowIP)
{
	allowIP_ = allowIP;
	setBodyParameter("AllowIP", allowIP);
}

bool SetAllowIPRequest::getAppend()const
{
	return append_;
}

void SetAllowIPRequest::setAppend(bool append)
{
	append_ = append;
	setBodyParameter("Append", append ? "true" : "false");
}

