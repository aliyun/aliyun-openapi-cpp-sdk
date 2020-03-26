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

#include <alibabacloud/sas/model/GetIncIOCsRequest.h>

using AlibabaCloud::Sas::Model::GetIncIOCsRequest;

GetIncIOCsRequest::GetIncIOCsRequest() :
	RpcServiceRequest("sas", "2018-12-03", "GetIncIOCs")
{
	setMethod(HttpRequest::Method::Post);
}

GetIncIOCsRequest::~GetIncIOCsRequest()
{}

std::string GetIncIOCsRequest::getDate()const
{
	return date_;
}

void GetIncIOCsRequest::setDate(const std::string& date)
{
	date_ = date;
	setParameter("Date", date);
}

std::string GetIncIOCsRequest::getType()const
{
	return type_;
}

void GetIncIOCsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string GetIncIOCsRequest::getSourceIp()const
{
	return sourceIp_;
}

void GetIncIOCsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

