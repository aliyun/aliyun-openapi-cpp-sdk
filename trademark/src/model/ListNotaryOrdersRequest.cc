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

#include <alibabacloud/trademark/model/ListNotaryOrdersRequest.h>

using AlibabaCloud::Trademark::Model::ListNotaryOrdersRequest;

ListNotaryOrdersRequest::ListNotaryOrdersRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "ListNotaryOrders")
{}

ListNotaryOrdersRequest::~ListNotaryOrdersRequest()
{}

int ListNotaryOrdersRequest::getSortKeyType()const
{
	return sortKeyType_;
}

void ListNotaryOrdersRequest::setSortKeyType(int sortKeyType)
{
	sortKeyType_ = sortKeyType;
	setCoreParameter("SortKeyType", std::to_string(sortKeyType));
}

std::string ListNotaryOrdersRequest::getSortByType()const
{
	return sortByType_;
}

void ListNotaryOrdersRequest::setSortByType(const std::string& sortByType)
{
	sortByType_ = sortByType;
	setCoreParameter("SortByType", sortByType);
}

long ListNotaryOrdersRequest::getStartOrderDate()const
{
	return startOrderDate_;
}

void ListNotaryOrdersRequest::setStartOrderDate(long startOrderDate)
{
	startOrderDate_ = startOrderDate;
	setCoreParameter("StartOrderDate", std::to_string(startOrderDate));
}

int ListNotaryOrdersRequest::getPageSize()const
{
	return pageSize_;
}

void ListNotaryOrdersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListNotaryOrdersRequest::getBizId()const
{
	return bizId_;
}

void ListNotaryOrdersRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

int ListNotaryOrdersRequest::getNotaryType()const
{
	return notaryType_;
}

void ListNotaryOrdersRequest::setNotaryType(int notaryType)
{
	notaryType_ = notaryType;
	setCoreParameter("NotaryType", std::to_string(notaryType));
}

long ListNotaryOrdersRequest::getEndOrderDate()const
{
	return endOrderDate_;
}

void ListNotaryOrdersRequest::setEndOrderDate(long endOrderDate)
{
	endOrderDate_ = endOrderDate;
	setCoreParameter("EndOrderDate", std::to_string(endOrderDate));
}

std::string ListNotaryOrdersRequest::getAliyunOrderId()const
{
	return aliyunOrderId_;
}

void ListNotaryOrdersRequest::setAliyunOrderId(const std::string& aliyunOrderId)
{
	aliyunOrderId_ = aliyunOrderId;
	setCoreParameter("AliyunOrderId", aliyunOrderId);
}

int ListNotaryOrdersRequest::getPageNum()const
{
	return pageNum_;
}

void ListNotaryOrdersRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int ListNotaryOrdersRequest::getNotaryStatus()const
{
	return notaryStatus_;
}

void ListNotaryOrdersRequest::setNotaryStatus(int notaryStatus)
{
	notaryStatus_ = notaryStatus;
	setCoreParameter("NotaryStatus", std::to_string(notaryStatus));
}

