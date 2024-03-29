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

#include <alibabacloud/iot/model/QueryMessageInfoRequest.h>

using AlibabaCloud::Iot::Model::QueryMessageInfoRequest;

QueryMessageInfoRequest::QueryMessageInfoRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryMessageInfo")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMessageInfoRequest::~QueryMessageInfoRequest()
{}

std::string QueryMessageInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMessageInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryMessageInfoRequest::getUniMsgId()const
{
	return uniMsgId_;
}

void QueryMessageInfoRequest::setUniMsgId(const std::string& uniMsgId)
{
	uniMsgId_ = uniMsgId;
	setParameter("UniMsgId", uniMsgId);
}

std::string QueryMessageInfoRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryMessageInfoRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryMessageInfoRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryMessageInfoRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryMessageInfoRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryMessageInfoRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

