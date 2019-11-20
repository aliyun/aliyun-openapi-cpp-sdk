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
{
	setMethod(HttpRequest::Method::Put);
}

PutEventTargetsRequest::~PutEventTargetsRequest()
{}

std::vector<PutEventTargetsRequest::WebhookParameters> PutEventTargetsRequest::getWebhookParameters()const
{
	return webhookParameters_;
}

void PutEventTargetsRequest::setWebhookParameters(const std::vector<WebhookParameters>& webhookParameters)
{
	webhookParameters_ = webhookParameters;
	for(int dep1 = 0; dep1!= webhookParameters.size(); dep1++) {
		auto webhookParametersObj = webhookParameters.at(dep1);
		std::string webhookParametersObjStr = "WebhookParameters." + std::to_string(dep1);
		setCoreParameter(webhookParametersObjStr + ".Protocol", webhookParametersObj.protocol);
		setCoreParameter(webhookParametersObjStr + ".Method", webhookParametersObj.method);
		setCoreParameter(webhookParametersObjStr + ".Id", webhookParametersObj.id);
		setCoreParameter(webhookParametersObjStr + ".Url", webhookParametersObj.url);
	}
}

std::vector<PutEventTargetsRequest::ContactParameters> PutEventTargetsRequest::getContactParameters()const
{
	return contactParameters_;
}

void PutEventTargetsRequest::setContactParameters(const std::vector<ContactParameters>& contactParameters)
{
	contactParameters_ = contactParameters;
	for(int dep1 = 0; dep1!= contactParameters.size(); dep1++) {
		auto contactParametersObj = contactParameters.at(dep1);
		std::string contactParametersObjStr = "ContactParameters." + std::to_string(dep1);
		setCoreParameter(contactParametersObjStr + ".Level", contactParametersObj.level);
		setCoreParameter(contactParametersObjStr + ".Id", contactParametersObj.id);
		setCoreParameter(contactParametersObjStr + ".ContactGroupName", contactParametersObj.contactGroupName);
	}
}

std::vector<PutEventTargetsRequest::SlsParameters> PutEventTargetsRequest::getSlsParameters()const
{
	return slsParameters_;
}

void PutEventTargetsRequest::setSlsParameters(const std::vector<SlsParameters>& slsParameters)
{
	slsParameters_ = slsParameters;
	for(int dep1 = 0; dep1!= slsParameters.size(); dep1++) {
		auto slsParametersObj = slsParameters.at(dep1);
		std::string slsParametersObjStr = "SlsParameters." + std::to_string(dep1);
		setCoreParameter(slsParametersObjStr + ".Project", slsParametersObj.project);
		setCoreParameter(slsParametersObjStr + ".Id", slsParametersObj.id);
		setCoreParameter(slsParametersObjStr + ".Region", slsParametersObj.region);
		setCoreParameter(slsParametersObjStr + ".LogStore", slsParametersObj.logStore);
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
	for(int dep1 = 0; dep1!= mnsParameters.size(); dep1++) {
		auto mnsParametersObj = mnsParameters.at(dep1);
		std::string mnsParametersObjStr = "MnsParameters." + std::to_string(dep1);
		setCoreParameter(mnsParametersObjStr + ".Id", mnsParametersObj.id);
		setCoreParameter(mnsParametersObjStr + ".Region", mnsParametersObj.region);
		setCoreParameter(mnsParametersObjStr + ".Queue", mnsParametersObj.queue);
	}
}

std::vector<PutEventTargetsRequest::FcParameters> PutEventTargetsRequest::getFcParameters()const
{
	return fcParameters_;
}

void PutEventTargetsRequest::setFcParameters(const std::vector<FcParameters>& fcParameters)
{
	fcParameters_ = fcParameters;
	for(int dep1 = 0; dep1!= fcParameters.size(); dep1++) {
		auto fcParametersObj = fcParameters.at(dep1);
		std::string fcParametersObjStr = "FcParameters." + std::to_string(dep1);
		setCoreParameter(fcParametersObjStr + ".FunctionName", fcParametersObj.functionName);
		setCoreParameter(fcParametersObjStr + ".ServiceName", fcParametersObj.serviceName);
		setCoreParameter(fcParametersObjStr + ".Id", fcParametersObj.id);
		setCoreParameter(fcParametersObjStr + ".Region", fcParametersObj.region);
	}
}

