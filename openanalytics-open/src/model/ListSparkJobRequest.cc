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

#include <alibabacloud/openanalytics-open/model/ListSparkJobRequest.h>

using AlibabaCloud::Openanalytics_open::Model::ListSparkJobRequest;

ListSparkJobRequest::ListSparkJobRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "ListSparkJob")
{
	setMethod(HttpRequest::Method::Post);
}

ListSparkJobRequest::~ListSparkJobRequest()
{}

int ListSparkJobRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListSparkJobRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListSparkJobRequest::getCondition()const
{
	return condition_;
}

void ListSparkJobRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setParameter("Condition", condition);
}

int ListSparkJobRequest::getPageSize()const
{
	return pageSize_;
}

void ListSparkJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListSparkJobRequest::getVcName()const
{
	return vcName_;
}

void ListSparkJobRequest::setVcName(const std::string& vcName)
{
	vcName_ = vcName;
	setParameter("VcName", vcName);
}

