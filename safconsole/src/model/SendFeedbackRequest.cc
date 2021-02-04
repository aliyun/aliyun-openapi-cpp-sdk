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

#include <alibabacloud/safconsole/model/SendFeedbackRequest.h>

using AlibabaCloud::Safconsole::Model::SendFeedbackRequest;

SendFeedbackRequest::SendFeedbackRequest() :
	RpcServiceRequest("safconsole", "2021-01-12", "SendFeedback")
{
	setMethod(HttpRequest::Method::Post);
}

SendFeedbackRequest::~SendFeedbackRequest()
{}

std::string SendFeedbackRequest::getRiskLabel()const
{
	return riskLabel_;
}

void SendFeedbackRequest::setRiskLabel(const std::string& riskLabel)
{
	riskLabel_ = riskLabel;
	setParameter("RiskLabel", riskLabel);
}

std::string SendFeedbackRequest::getSampleType()const
{
	return sampleType_;
}

void SendFeedbackRequest::setSampleType(const std::string& sampleType)
{
	sampleType_ = sampleType;
	setParameter("SampleType", sampleType);
}

std::string SendFeedbackRequest::getValue()const
{
	return value_;
}

void SendFeedbackRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

