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

#include <alibabacloud/cloudwf/model/ProduceInstanceRequest.h>

using AlibabaCloud::Cloudwf::Model::ProduceInstanceRequest;

ProduceInstanceRequest::ProduceInstanceRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ProduceInstance")
{
	setMethod(HttpRequest::Method::Post);
}

ProduceInstanceRequest::~ProduceInstanceRequest()
{}

std::string ProduceInstanceRequest::getTraceId()const
{
	return traceId_;
}

void ProduceInstanceRequest::setTraceId(const std::string& traceId)
{
	traceId_ = traceId;
	setParameter("TraceId", traceId);
}

std::string ProduceInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ProduceInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ProduceInstanceRequest::getProduceParameter()const
{
	return produceParameter_;
}

void ProduceInstanceRequest::setProduceParameter(const std::string& produceParameter)
{
	produceParameter_ = produceParameter;
	setParameter("ProduceParameter", produceParameter);
}

