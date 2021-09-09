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

#include <alibabacloud/companyreg/model/ListIntentionNoteRequest.h>

using AlibabaCloud::Companyreg::Model::ListIntentionNoteRequest;

ListIntentionNoteRequest::ListIntentionNoteRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "ListIntentionNote")
{
	setMethod(HttpRequest::Method::Post);
}

ListIntentionNoteRequest::~ListIntentionNoteRequest()
{}

long ListIntentionNoteRequest::getEndTime()const
{
	return endTime_;
}

void ListIntentionNoteRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long ListIntentionNoteRequest::getBeginTime()const
{
	return beginTime_;
}

void ListIntentionNoteRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setParameter("BeginTime", std::to_string(beginTime));
}

std::string ListIntentionNoteRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void ListIntentionNoteRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setParameter("IntentionBizId", intentionBizId);
}

int ListIntentionNoteRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListIntentionNoteRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListIntentionNoteRequest::getPageSize()const
{
	return pageSize_;
}

void ListIntentionNoteRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

