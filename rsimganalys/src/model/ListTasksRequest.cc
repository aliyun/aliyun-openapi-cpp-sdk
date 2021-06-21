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

#include <alibabacloud/rsimganalys/model/ListTasksRequest.h>

using AlibabaCloud::Rsimganalys::Model::ListTasksRequest;

ListTasksRequest::ListTasksRequest() :
	RpcServiceRequest("rsimganalys", "2019-08-01", "ListTasks")
{
	setMethod(HttpRequest::Method::Post);
}

ListTasksRequest::~ListTasksRequest()
{}

std::string ListTasksRequest::getSubmitTime()const
{
	return submitTime_;
}

void ListTasksRequest::setSubmitTime(const std::string& submitTime)
{
	submitTime_ = submitTime;
	setParameter("SubmitTime", submitTime);
}

int ListTasksRequest::getRunStatus()const
{
	return runStatus_;
}

void ListTasksRequest::setRunStatus(int runStatus)
{
	runStatus_ = runStatus;
	setParameter("RunStatus", std::to_string(runStatus));
}

int ListTasksRequest::getProductType()const
{
	return productType_;
}

void ListTasksRequest::setProductType(int productType)
{
	productType_ = productType;
	setParameter("ProductType", std::to_string(productType));
}

int ListTasksRequest::getPageNo()const
{
	return pageNo_;
}

void ListTasksRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int ListTasksRequest::getPageSize()const
{
	return pageSize_;
}

void ListTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTasksRequest::getAppkey()const
{
	return appkey_;
}

void ListTasksRequest::setAppkey(const std::string& appkey)
{
	appkey_ = appkey;
	setParameter("Appkey", appkey);
}

std::string ListTasksRequest::getJobName()const
{
	return jobName_;
}

void ListTasksRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

