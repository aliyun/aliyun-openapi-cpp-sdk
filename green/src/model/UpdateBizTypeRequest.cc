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

#include <alibabacloud/green/model/UpdateBizTypeRequest.h>

using AlibabaCloud::Green::Model::UpdateBizTypeRequest;

UpdateBizTypeRequest::UpdateBizTypeRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateBizType")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateBizTypeRequest::~UpdateBizTypeRequest()
{}

std::string UpdateBizTypeRequest::getDescription()const
{
	return description_;
}

void UpdateBizTypeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateBizTypeRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateBizTypeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateBizTypeRequest::getBizTypeName()const
{
	return bizTypeName_;
}

void UpdateBizTypeRequest::setBizTypeName(const std::string& bizTypeName)
{
	bizTypeName_ = bizTypeName;
	setParameter("BizTypeName", bizTypeName);
}

