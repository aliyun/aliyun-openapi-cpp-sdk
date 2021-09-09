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

#include <alibabacloud/companyreg/model/UpdateProduceRequest.h>

using AlibabaCloud::Companyreg::Model::UpdateProduceRequest;

UpdateProduceRequest::UpdateProduceRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "UpdateProduce")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateProduceRequest::~UpdateProduceRequest()
{}

std::string UpdateProduceRequest::getExtendMessage()const
{
	return extendMessage_;
}

void UpdateProduceRequest::setExtendMessage(const std::string& extendMessage)
{
	extendMessage_ = extendMessage;
	setParameter("ExtendMessage", extendMessage);
}

std::string UpdateProduceRequest::getBizId()const
{
	return bizId_;
}

void UpdateProduceRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

