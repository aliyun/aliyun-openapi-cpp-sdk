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

#include <alibabacloud/chatbot/model/QueryIntentsRequest.h>

using AlibabaCloud::Chatbot::Model::QueryIntentsRequest;

QueryIntentsRequest::QueryIntentsRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "QueryIntents")
{
	setMethod(HttpRequest::Method::Post);
}

QueryIntentsRequest::~QueryIntentsRequest()
{}

long QueryIntentsRequest::getDialogId()const
{
	return dialogId_;
}

void QueryIntentsRequest::setDialogId(long dialogId)
{
	dialogId_ = dialogId;
	setParameter("DialogId", std::to_string(dialogId));
}

int QueryIntentsRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryIntentsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryIntentsRequest::getIntentName()const
{
	return intentName_;
}

void QueryIntentsRequest::setIntentName(const std::string& intentName)
{
	intentName_ = intentName;
	setParameter("IntentName", intentName);
}

int QueryIntentsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryIntentsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

