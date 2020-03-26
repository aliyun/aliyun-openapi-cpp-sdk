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

#include <alibabacloud/ccc/model/ListPhoneTagsRequest.h>

using AlibabaCloud::CCC::Model::ListPhoneTagsRequest;

ListPhoneTagsRequest::ListPhoneTagsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListPhoneTags")
{
	setMethod(HttpRequest::Method::Post);
}

ListPhoneTagsRequest::~ListPhoneTagsRequest()
{}

std::vector<std::string> ListPhoneTagsRequest::getNumberGroupIds()const
{
	return numberGroupIds_;
}

void ListPhoneTagsRequest::setNumberGroupIds(const std::vector<std::string>& numberGroupIds)
{
	numberGroupIds_ = numberGroupIds;
	for(int dep1 = 0; dep1!= numberGroupIds.size(); dep1++) {
		setParameter("NumberGroupIds."+ std::to_string(dep1), numberGroupIds.at(dep1));
	}
}

int ListPhoneTagsRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListPhoneTagsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListPhoneTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPhoneTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool ListPhoneTagsRequest::getOutboundOnly()const
{
	return outboundOnly_;
}

void ListPhoneTagsRequest::setOutboundOnly(bool outboundOnly)
{
	outboundOnly_ = outboundOnly;
	setParameter("OutboundOnly", outboundOnly ? "true" : "false");
}

std::string ListPhoneTagsRequest::getNumber()const
{
	return number_;
}

void ListPhoneTagsRequest::setNumber(const std::string& number)
{
	number_ = number;
	setParameter("Number", number);
}

std::string ListPhoneTagsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListPhoneTagsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListPhoneTagsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPhoneTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

