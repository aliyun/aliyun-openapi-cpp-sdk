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

#include <alibabacloud/retailcloud/model/ListNodeLabelsRequest.h>

using AlibabaCloud::Retailcloud::Model::ListNodeLabelsRequest;

ListNodeLabelsRequest::ListNodeLabelsRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListNodeLabels")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeLabelsRequest::~ListNodeLabelsRequest()
{}

std::string ListNodeLabelsRequest::getLabelKey()const
{
	return labelKey_;
}

void ListNodeLabelsRequest::setLabelKey(const std::string& labelKey)
{
	labelKey_ = labelKey;
	setParameter("LabelKey", labelKey);
}

int ListNodeLabelsRequest::getPageSize()const
{
	return pageSize_;
}

void ListNodeLabelsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListNodeLabelsRequest::getClusterId()const
{
	return clusterId_;
}

void ListNodeLabelsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListNodeLabelsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNodeLabelsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

