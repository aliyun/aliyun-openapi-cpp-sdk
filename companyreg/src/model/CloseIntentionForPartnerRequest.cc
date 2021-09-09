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

#include <alibabacloud/companyreg/model/CloseIntentionForPartnerRequest.h>

using AlibabaCloud::Companyreg::Model::CloseIntentionForPartnerRequest;

CloseIntentionForPartnerRequest::CloseIntentionForPartnerRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "CloseIntentionForPartner")
{
	setMethod(HttpRequest::Method::Post);
}

CloseIntentionForPartnerRequest::~CloseIntentionForPartnerRequest()
{}

std::string CloseIntentionForPartnerRequest::getBizType()const
{
	return bizType_;
}

void CloseIntentionForPartnerRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string CloseIntentionForPartnerRequest::getNote()const
{
	return note_;
}

void CloseIntentionForPartnerRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

std::string CloseIntentionForPartnerRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void CloseIntentionForPartnerRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setParameter("IntentionBizId", intentionBizId);
}

