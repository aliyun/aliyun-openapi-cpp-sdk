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

#include <alibabacloud/companyreg/model/SubmitCommunicationNoteRequest.h>

using AlibabaCloud::Companyreg::Model::SubmitCommunicationNoteRequest;

SubmitCommunicationNoteRequest::SubmitCommunicationNoteRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "SubmitCommunicationNote")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitCommunicationNoteRequest::~SubmitCommunicationNoteRequest()
{}

std::string SubmitCommunicationNoteRequest::getNote()const
{
	return note_;
}

void SubmitCommunicationNoteRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

int SubmitCommunicationNoteRequest::getType()const
{
	return type_;
}

void SubmitCommunicationNoteRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string SubmitCommunicationNoteRequest::getActionRequestId()const
{
	return actionRequestId_;
}

void SubmitCommunicationNoteRequest::setActionRequestId(const std::string& actionRequestId)
{
	actionRequestId_ = actionRequestId;
	setParameter("ActionRequestId", actionRequestId);
}

int SubmitCommunicationNoteRequest::getOperatorType()const
{
	return operatorType_;
}

void SubmitCommunicationNoteRequest::setOperatorType(int operatorType)
{
	operatorType_ = operatorType;
	setParameter("OperatorType", std::to_string(operatorType));
}

std::string SubmitCommunicationNoteRequest::getBizCode()const
{
	return bizCode_;
}

void SubmitCommunicationNoteRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string SubmitCommunicationNoteRequest::getBizId()const
{
	return bizId_;
}

void SubmitCommunicationNoteRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

