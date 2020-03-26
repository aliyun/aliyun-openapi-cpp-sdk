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

#include <alibabacloud/green/model/SendWebsiteFeedbackRequest.h>

using AlibabaCloud::Green::Model::SendWebsiteFeedbackRequest;

SendWebsiteFeedbackRequest::SendWebsiteFeedbackRequest() :
	RpcServiceRequest("green", "2017-08-23", "SendWebsiteFeedback")
{
	setMethod(HttpRequest::Method::Post);
}

SendWebsiteFeedbackRequest::~SendWebsiteFeedbackRequest()
{}

std::string SendWebsiteFeedbackRequest::getFeedback()const
{
	return feedback_;
}

void SendWebsiteFeedbackRequest::setFeedback(const std::string& feedback)
{
	feedback_ = feedback;
	setParameter("Feedback", feedback);
}

std::string SendWebsiteFeedbackRequest::getUrls()const
{
	return urls_;
}

void SendWebsiteFeedbackRequest::setUrls(const std::string& urls)
{
	urls_ = urls;
	setParameter("Urls", urls);
}

std::string SendWebsiteFeedbackRequest::getSourceIp()const
{
	return sourceIp_;
}

void SendWebsiteFeedbackRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string SendWebsiteFeedbackRequest::getLang()const
{
	return lang_;
}

void SendWebsiteFeedbackRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

