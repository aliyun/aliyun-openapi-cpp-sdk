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

#include <alibabacloud/cloudwf/model/GetCrowdListRequest.h>

using AlibabaCloud::Cloudwf::Model::GetCrowdListRequest;

GetCrowdListRequest::GetCrowdListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetCrowdList")
{}

GetCrowdListRequest::~GetCrowdListRequest()
{}

long GetCrowdListRequest::getGsid()const
{
	return gsid_;
}

void GetCrowdListRequest::setGsid(long gsid)
{
	gsid_ = gsid;
	setCoreParameter("Gsid", std::to_string(gsid));
}

int GetCrowdListRequest::getClassType()const
{
	return classType_;
}

void GetCrowdListRequest::setClassType(int classType)
{
	classType_ = classType;
	setCoreParameter("ClassType", std::to_string(classType));
}

std::string GetCrowdListRequest::getGsType()const
{
	return gsType_;
}

void GetCrowdListRequest::setGsType(const std::string& gsType)
{
	gsType_ = gsType;
	setCoreParameter("GsType", gsType);
}

std::string GetCrowdListRequest::getEndTime()const
{
	return endTime_;
}

void GetCrowdListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

int GetCrowdListRequest::getPage()const
{
	return page_;
}

void GetCrowdListRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

std::string GetCrowdListRequest::getStartTime()const
{
	return startTime_;
}

void GetCrowdListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int GetCrowdListRequest::getPer()const
{
	return per_;
}

void GetCrowdListRequest::setPer(int per)
{
	per_ = per;
	setCoreParameter("Per", std::to_string(per));
}

long GetCrowdListRequest::getBid()const
{
	return bid_;
}

void GetCrowdListRequest::setBid(long bid)
{
	bid_ = bid;
	setCoreParameter("Bid", std::to_string(bid));
}

std::string GetCrowdListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCrowdListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

