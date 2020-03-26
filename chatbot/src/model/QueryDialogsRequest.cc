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

#include <alibabacloud/chatbot/model/QueryDialogsRequest.h>

using AlibabaCloud::Chatbot::Model::QueryDialogsRequest;

QueryDialogsRequest::QueryDialogsRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "QueryDialogs")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDialogsRequest::~QueryDialogsRequest()
{}

std::string QueryDialogsRequest::getDialogName()const
{
	return dialogName_;
}

void QueryDialogsRequest::setDialogName(const std::string& dialogName)
{
	dialogName_ = dialogName;
	setParameter("DialogName", dialogName);
}

int QueryDialogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryDialogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryDialogsRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryDialogsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int QueryDialogsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDialogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

