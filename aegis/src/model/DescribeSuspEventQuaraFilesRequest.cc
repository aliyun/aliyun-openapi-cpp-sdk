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

#include <alibabacloud/aegis/model/DescribeSuspEventQuaraFilesRequest.h>

using AlibabaCloud::Aegis::Model::DescribeSuspEventQuaraFilesRequest;

DescribeSuspEventQuaraFilesRequest::DescribeSuspEventQuaraFilesRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeSuspEventQuaraFiles")
{}

DescribeSuspEventQuaraFilesRequest::~DescribeSuspEventQuaraFilesRequest()
{}

std::string DescribeSuspEventQuaraFilesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeSuspEventQuaraFilesRequest::setCurrentPage(const std::string& currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeSuspEventQuaraFilesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSuspEventQuaraFilesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeSuspEventQuaraFilesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSuspEventQuaraFilesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSuspEventQuaraFilesRequest::getFrom()const
{
	return from_;
}

void DescribeSuspEventQuaraFilesRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeSuspEventQuaraFilesRequest::getStatus()const
{
	return status_;
}

void DescribeSuspEventQuaraFilesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

