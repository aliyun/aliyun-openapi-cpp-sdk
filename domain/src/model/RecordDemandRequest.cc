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

#include <alibabacloud/domain/model/RecordDemandRequest.h>

using AlibabaCloud::Domain::Model::RecordDemandRequest;

RecordDemandRequest::RecordDemandRequest() :
	RpcServiceRequest("domain", "2018-02-08", "RecordDemand")
{}

RecordDemandRequest::~RecordDemandRequest()
{}

std::string RecordDemandRequest::getBizId()const
{
	return bizId_;
}

void RecordDemandRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string RecordDemandRequest::getMessage()const
{
	return message_;
}

void RecordDemandRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

