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

#include <alibabacloud/cloudwf/model/ProfileTradeRequest.h>

using AlibabaCloud::Cloudwf::Model::ProfileTradeRequest;

ProfileTradeRequest::ProfileTradeRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ProfileTrade")
{
	setMethod(HttpRequest::Method::Post);
}

ProfileTradeRequest::~ProfileTradeRequest()
{}

std::string ProfileTradeRequest::getBeginDate()const
{
	return beginDate_;
}

void ProfileTradeRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setParameter("BeginDate", beginDate);
}

std::string ProfileTradeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ProfileTradeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ProfileTradeRequest::getEndDate()const
{
	return endDate_;
}

void ProfileTradeRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

int ProfileTradeRequest::getDataType()const
{
	return dataType_;
}

void ProfileTradeRequest::setDataType(int dataType)
{
	dataType_ = dataType;
	setParameter("DataType", std::to_string(dataType));
}

long ProfileTradeRequest::getGsid()const
{
	return gsid_;
}

void ProfileTradeRequest::setGsid(long gsid)
{
	gsid_ = gsid;
	setParameter("Gsid", std::to_string(gsid));
}

