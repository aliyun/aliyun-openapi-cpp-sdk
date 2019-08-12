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

#include <alibabacloud/cms/model/PutEventTargetsRequest.h>

using AlibabaCloud::Cms::Model::PutEventTargetsRequest;

PutEventTargetsRequest::PutEventTargetsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "PutEventTargets")
{}

PutEventTargetsRequest::~PutEventTargetsRequest()
{}

std::vector<PutEventTargetsRequest::WebhookParameters> PutEventTargetsRequest::getWebhookParameters()const
{
	return webhookParameters_;
}

void PutEventTargetsRequest::setWebhookParameters(const std::vector<WebhookParameters>& webhookParameters)
{
	webhookParameters_ = webhookParameters;
	int i = 0;
	for(int i = 0; i!= webhookParameters.size(); i++)	{
		auto obj = webhookParameters.at(i);
		std::string str ="WebhookParameters."+ std::to_string(i);
		setCoreParameter(str + ".Protocol", std::to_string(obj.protocol));
		setCoreParameter(str + ".Method", std::to_string(obj.method));
		setCoreParameter(str + ".Id", std::to_string(obj.id));
		setCoreParameter(str + ".Url", std::to_string(obj.url));
	}
}

std::vector<PutEventTargetsRequest::ContactParameters> PutEventTargetsRequest::getContactParameters()const
{
	return contactParameters_;
}

void PutEventTargetsRequest::setContactParameters(const std::vector<ContactParameters>& contactParameters)
{
	contactParameters_ = contactParameters;
	int i = 0;
	for(int i = 0; i!= contactParameters.size(); i++)	{
		auto obj = contactParameters.at(i);
		std::string str ="ContactParameters."+ std::to_string(i);
		setCoreParameter(str + ".Level", std::to_string(obj.level));
		setCoreParameter(str + ".Id", std::to_string(obj.id));
		setCoreParameter(str + ".ContactGroupName", std::to_string(obj.contactGroupName));
	}
}

std::vector<PutEventTargetsRequest::SlsParameters> PutEventTargetsRequest::getSlsParameters()const
{
	return slsParameters_;
}

void PutEventTargetsRequest::setSlsParameters(const std::vector<SlsParameters>& slsParameters)
{
	slsParameters_ = slsParameters;
	int i = 0;
	for(int i = 0; i!= slsParameters.size(); i++)	{
		auto obj = slsParameters.at(i);
		std::string str ="SlsParameters."+ std::to_string(i);
		setCoreParameter(str + ".Project", std::to_string(obj.project));
		setCoreParameter(str + ".Id", std::to_string(obj.id));
		setCoreParameter(str + ".Region", std::to_string(obj.region));
		setCoreParameter(str + ".LogStore", std::to_string(obj.logStore));
	}
}

std::vector<PutEventTargetsRequest::FcParameters> PutEventTargetsRequest::getFcParameters()const
{
	return fcParameters_;
}

void PutEventTargetsRequest::setFcParameters(const std::vector<FcParameters>& fcParameters)
{
	fcParameters_ = fcParameters;
	int i = 0;
	for(int i = 0; i!= fcParameters.size(); i++)	{
		auto obj = fcParameters.at(i);
		std::string str ="FcParameters."+ std::to_string(i);
		setCoreParameter(str + ".FunctionName", std::to_string(obj.functionName));
		setCoreParameter(str + ".ServiceName", std::to_string(obj.serviceName));
		setCoreParameter(str + ".Id", std::to_string(obj.id));
		setCoreParameter(str + ".Region", std::to_string(obj.region));
	}
}

std::string PutEventTargetsRequest::getRuleName()const
{
	return ruleName_;
}

void PutEventTargetsRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::vector<PutEventTargetsRequest::MnsParameters> PutEventTargetsRequest::getMnsParameters()const
{
	return mnsParameters_;
}

void PutEventTargetsRequest::setMnsParameters(const std::vector<MnsParameters>& mnsParameters)
{
	mnsParameters_ = mnsParameters;
	int i = 0;
	for(int i = 0; i!= mnsParameters.size(); i++)	{
		auto obj = mnsParameters.at(i);
		std::string str ="MnsParameters."+ std::to_string(i);
		setCoreParameter(str + ".Id", std::to_string(obj.id));
		setCoreParameter(str + ".Region", std::to_string(obj.region));
		setCoreParameter(str + ".Queue", std::to_string(obj.queue));
	}
}

