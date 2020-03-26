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

#include <alibabacloud/green/model/DescribeImageFromLibRequest.h>

using AlibabaCloud::Green::Model::DescribeImageFromLibRequest;

DescribeImageFromLibRequest::DescribeImageFromLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeImageFromLib")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeImageFromLibRequest::~DescribeImageFromLibRequest()
{}

std::string DescribeImageFromLibRequest::getStartDate()const
{
	return startDate_;
}

void DescribeImageFromLibRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeImageFromLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeImageFromLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeImageFromLibRequest::getImageLibId()const
{
	return imageLibId_;
}

void DescribeImageFromLibRequest::setImageLibId(int imageLibId)
{
	imageLibId_ = imageLibId;
	setParameter("ImageLibId", std::to_string(imageLibId));
}

int DescribeImageFromLibRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeImageFromLibRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeImageFromLibRequest::getId()const
{
	return id_;
}

void DescribeImageFromLibRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

int DescribeImageFromLibRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeImageFromLibRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setParameter("TotalCount", std::to_string(totalCount));
}

int DescribeImageFromLibRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeImageFromLibRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeImageFromLibRequest::getEndDate()const
{
	return endDate_;
}

void DescribeImageFromLibRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

