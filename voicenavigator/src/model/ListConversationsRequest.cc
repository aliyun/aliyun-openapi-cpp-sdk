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

#include <alibabacloud/voicenavigator/model/ListConversationsRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ListConversationsRequest;

ListConversationsRequest::ListConversationsRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ListConversations")
{
	setMethod(HttpRequest::Method::Get);
}

ListConversationsRequest::~ListConversationsRequest()
{}

int ListConversationsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListConversationsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListConversationsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListConversationsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListConversationsRequest::getPageSize()const
{
	return pageSize_;
}

void ListConversationsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

