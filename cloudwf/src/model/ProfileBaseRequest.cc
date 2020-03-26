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

#include <alibabacloud/cloudwf/model/ProfileBaseRequest.h>

using AlibabaCloud::Cloudwf::Model::ProfileBaseRequest;

ProfileBaseRequest::ProfileBaseRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ProfileBase")
{
	setMethod(HttpRequest::Method::Post);
}

ProfileBaseRequest::~ProfileBaseRequest()
{}

std::string ProfileBaseRequest::getBeginDate()const
{
	return beginDate_;
}

void ProfileBaseRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setParameter("BeginDate", beginDate);
}

std::string ProfileBaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ProfileBaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ProfileBaseRequest::getEndDate()const
{
	return endDate_;
}

void ProfileBaseRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

int ProfileBaseRequest::getDataType()const
{
	return dataType_;
}

void ProfileBaseRequest::setDataType(int dataType)
{
	dataType_ = dataType;
	setParameter("DataType", std::to_string(dataType));
}

long ProfileBaseRequest::getGsid()const
{
	return gsid_;
}

void ProfileBaseRequest::setGsid(long gsid)
{
	gsid_ = gsid;
	setParameter("Gsid", std::to_string(gsid));
}

