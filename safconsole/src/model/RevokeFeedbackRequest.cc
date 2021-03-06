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

#include <alibabacloud/safconsole/model/RevokeFeedbackRequest.h>

using AlibabaCloud::Safconsole::Model::RevokeFeedbackRequest;

RevokeFeedbackRequest::RevokeFeedbackRequest() :
	RpcServiceRequest("safconsole", "2021-01-12", "RevokeFeedback")
{
	setMethod(HttpRequest::Method::Post);
}

RevokeFeedbackRequest::~RevokeFeedbackRequest()
{}

std::string RevokeFeedbackRequest::getSampleType()const
{
	return sampleType_;
}

void RevokeFeedbackRequest::setSampleType(const std::string& sampleType)
{
	sampleType_ = sampleType;
	setBodyParameter("SampleType", sampleType);
}

std::string RevokeFeedbackRequest::getValue()const
{
	return value_;
}

void RevokeFeedbackRequest::setValue(const std::string& value)
{
	value_ = value;
	setBodyParameter("Value", value);
}

