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

#include <alibabacloud/aegis/model/CreateLogQueryRequest.h>

using AlibabaCloud::Aegis::Model::CreateLogQueryRequest;

CreateLogQueryRequest::CreateLogQueryRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateLogQuery")
{}

CreateLogQueryRequest::~CreateLogQueryRequest()
{}

std::string CreateLogQueryRequest::getQueryName()const
{
	return queryName_;
}

void CreateLogQueryRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setCoreParameter("QueryName", queryName);
}

std::string CreateLogQueryRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateLogQueryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateLogQueryRequest::getConditions()const
{
	return conditions_;
}

void CreateLogQueryRequest::setConditions(const std::string& conditions)
{
	conditions_ = conditions;
	setCoreParameter("Conditions", conditions);
}

std::string CreateLogQueryRequest::getQueryDetail()const
{
	return queryDetail_;
}

void CreateLogQueryRequest::setQueryDetail(const std::string& queryDetail)
{
	queryDetail_ = queryDetail;
	setCoreParameter("QueryDetail", queryDetail);
}

