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

#include <alibabacloud/trademark/model/ApplyNotaryPostRequest.h>

using AlibabaCloud::Trademark::Model::ApplyNotaryPostRequest;

ApplyNotaryPostRequest::ApplyNotaryPostRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "ApplyNotaryPost")
{
	setMethod(HttpRequest::Method::Post);
}

ApplyNotaryPostRequest::~ApplyNotaryPostRequest()
{}

std::string ApplyNotaryPostRequest::getReceiverName()const
{
	return receiverName_;
}

void ApplyNotaryPostRequest::setReceiverName(const std::string& receiverName)
{
	receiverName_ = receiverName;
	setParameter("ReceiverName", receiverName);
}

std::string ApplyNotaryPostRequest::getReceiverPhone()const
{
	return receiverPhone_;
}

void ApplyNotaryPostRequest::setReceiverPhone(const std::string& receiverPhone)
{
	receiverPhone_ = receiverPhone;
	setParameter("ReceiverPhone", receiverPhone);
}

long ApplyNotaryPostRequest::getNotaryOrderId()const
{
	return notaryOrderId_;
}

void ApplyNotaryPostRequest::setNotaryOrderId(long notaryOrderId)
{
	notaryOrderId_ = notaryOrderId;
	setParameter("NotaryOrderId", std::to_string(notaryOrderId));
}

std::string ApplyNotaryPostRequest::getReceiverAddress()const
{
	return receiverAddress_;
}

void ApplyNotaryPostRequest::setReceiverAddress(const std::string& receiverAddress)
{
	receiverAddress_ = receiverAddress;
	setParameter("ReceiverAddress", receiverAddress);
}

