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

#include <alibabacloud/cloudwf/model/ProfileTagRequest.h>

using AlibabaCloud::Cloudwf::Model::ProfileTagRequest;

ProfileTagRequest::ProfileTagRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ProfileTag")
{}

ProfileTagRequest::~ProfileTagRequest()
{}

long ProfileTagRequest::getIdtype()const
{
	return idtype_;
}

void ProfileTagRequest::setIdtype(long idtype)
{
	idtype_ = idtype;
	setCoreParameter("Idtype", idtype);
}

std::string ProfileTagRequest::getBeginDate()const
{
	return beginDate_;
}

void ProfileTagRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setCoreParameter("BeginDate", std::to_string(beginDate));
}

std::string ProfileTagRequest::getEndDate()const
{
	return endDate_;
}

void ProfileTagRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", std::to_string(endDate));
}

int ProfileTagRequest::getAppType()const
{
	return appType_;
}

void ProfileTagRequest::setAppType(int appType)
{
	appType_ = appType;
	setCoreParameter("AppType", appType);
}

std::string ProfileTagRequest::getTag()const
{
	return tag_;
}

void ProfileTagRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", std::to_string(tag));
}

std::string ProfileTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ProfileTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

long ProfileTagRequest::getAgsid()const
{
	return agsid_;
}

void ProfileTagRequest::setAgsid(long agsid)
{
	agsid_ = agsid;
	setCoreParameter("Agsid", agsid);
}

int ProfileTagRequest::getAreaNumber()const
{
	return areaNumber_;
}

void ProfileTagRequest::setAreaNumber(int areaNumber)
{
	areaNumber_ = areaNumber;
	setCoreParameter("AreaNumber", areaNumber);
}

