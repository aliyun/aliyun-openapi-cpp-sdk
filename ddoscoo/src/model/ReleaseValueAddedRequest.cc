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

#include <alibabacloud/ddoscoo/model/ReleaseValueAddedRequest.h>

using AlibabaCloud::Ddoscoo::Model::ReleaseValueAddedRequest;

ReleaseValueAddedRequest::ReleaseValueAddedRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ReleaseValueAdded")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseValueAddedRequest::~ReleaseValueAddedRequest()
{}

std::string ReleaseValueAddedRequest::getInstanceId()const
{
	return instanceId_;
}

void ReleaseValueAddedRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ReleaseValueAddedRequest::getSourceIp()const
{
	return sourceIp_;
}

void ReleaseValueAddedRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

