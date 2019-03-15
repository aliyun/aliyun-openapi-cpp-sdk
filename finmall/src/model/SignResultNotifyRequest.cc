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

#include <alibabacloud/finmall/model/SignResultNotifyRequest.h>

using AlibabaCloud::Finmall::Model::SignResultNotifyRequest;

SignResultNotifyRequest::SignResultNotifyRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "SignResultNotify")
{}

SignResultNotifyRequest::~SignResultNotifyRequest()
{}

std::string SignResultNotifyRequest::getDocId()const
{
	return docId_;
}

void SignResultNotifyRequest::setDocId(const std::string& docId)
{
	docId_ = docId;
	setParameter("DocId", docId);
}

std::string SignResultNotifyRequest::getDocContent()const
{
	return docContent_;
}

void SignResultNotifyRequest::setDocContent(const std::string& docContent)
{
	docContent_ = docContent;
	setParameter("DocContent", docContent);
}

std::string SignResultNotifyRequest::getSign()const
{
	return sign_;
}

void SignResultNotifyRequest::setSign(const std::string& sign)
{
	sign_ = sign;
	setParameter("Sign", sign);
}

int SignResultNotifyRequest::getResultCode()const
{
	return resultCode_;
}

void SignResultNotifyRequest::setResultCode(int resultCode)
{
	resultCode_ = resultCode;
	setParameter("ResultCode", std::to_string(resultCode));
}

long SignResultNotifyRequest::getTime()const
{
	return time_;
}

void SignResultNotifyRequest::setTime(long time)
{
	time_ = time;
	setParameter("Time", std::to_string(time));
}

std::string SignResultNotifyRequest::getTransactionId()const
{
	return transactionId_;
}

void SignResultNotifyRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setParameter("TransactionId", transactionId);
}

std::string SignResultNotifyRequest::getResultDesc()const
{
	return resultDesc_;
}

void SignResultNotifyRequest::setResultDesc(const std::string& resultDesc)
{
	resultDesc_ = resultDesc;
	setParameter("ResultDesc", resultDesc);
}

