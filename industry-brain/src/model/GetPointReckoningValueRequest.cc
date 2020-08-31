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

#include <alibabacloud/industry-brain/model/GetPointReckoningValueRequest.h>

using AlibabaCloud::Industry_brain::Model::GetPointReckoningValueRequest;

GetPointReckoningValueRequest::GetPointReckoningValueRequest() :
	RpcServiceRequest("industry-brain", "2019-06-30", "GetPointReckoningValue")
{
	setMethod(HttpRequest::Method::Post);
}

GetPointReckoningValueRequest::~GetPointReckoningValueRequest()
{}

std::string GetPointReckoningValueRequest::getTimeType()const
{
	return timeType_;
}

void GetPointReckoningValueRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setParameter("TimeType", timeType);
}

std::string GetPointReckoningValueRequest::getTemplateId()const
{
	return templateId_;
}

void GetPointReckoningValueRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

