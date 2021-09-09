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

#include <alibabacloud/companyreg/model/CloseUserIntentionRequest.h>

using AlibabaCloud::Companyreg::Model::CloseUserIntentionRequest;

CloseUserIntentionRequest::CloseUserIntentionRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "CloseUserIntention")
{
	setMethod(HttpRequest::Method::Post);
}

CloseUserIntentionRequest::~CloseUserIntentionRequest()
{}

std::string CloseUserIntentionRequest::getBizType()const
{
	return bizType_;
}

void CloseUserIntentionRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string CloseUserIntentionRequest::getNote()const
{
	return note_;
}

void CloseUserIntentionRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

std::string CloseUserIntentionRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void CloseUserIntentionRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setParameter("IntentionBizId", intentionBizId);
}

