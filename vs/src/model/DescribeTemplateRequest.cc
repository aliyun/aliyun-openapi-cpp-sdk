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

#include <alibabacloud/vs/model/DescribeTemplateRequest.h>

using AlibabaCloud::Vs::Model::DescribeTemplateRequest;

DescribeTemplateRequest::DescribeTemplateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTemplateRequest::~DescribeTemplateRequest()
{}

std::string DescribeTemplateRequest::getId()const
{
	return id_;
}

void DescribeTemplateRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeTemplateRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

