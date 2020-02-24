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

#include <alibabacloud/voicenavigator/model/DescribeRedirectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeRedirectionResult::DescribeRedirectionResult() :
	ServiceResult()
{}

DescribeRedirectionResult::DescribeRedirectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRedirectionResult::~DescribeRedirectionResult()
{}

void DescribeRedirectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSimilarUtterances = value["SimilarUtterances"]["SimilarUtterance"];
	for (const auto &item : allSimilarUtterances)
		similarUtterances_.push_back(item.asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["CategoryId"].isNull())
		categoryId_ = value["CategoryId"].asString();
	if(!value["NavigationScriptId"].isNull())
		navigationScriptId_ = value["NavigationScriptId"].asString();
	if(!value["UserUtterance"].isNull())
		userUtterance_ = value["UserUtterance"].asString();
	if(!value["Prompt"].isNull())
		prompt_ = value["Prompt"].asString();
	if(!value["Interruptible"].isNull())
		interruptible_ = value["Interruptible"].asString() == "true";
	if(!value["RedirectionType"].isNull())
		redirectionType_ = value["RedirectionType"].asString();
	if(!value["RedirectionTarget"].isNull())
		redirectionTarget_ = value["RedirectionTarget"].asString();

}

std::string DescribeRedirectionResult::getCategoryId()const
{
	return categoryId_;
}

bool DescribeRedirectionResult::getInterruptible()const
{
	return interruptible_;
}

std::string DescribeRedirectionResult::getRedirectionTarget()const
{
	return redirectionTarget_;
}

std::vector<std::string> DescribeRedirectionResult::getSimilarUtterances()const
{
	return similarUtterances_;
}

std::string DescribeRedirectionResult::getRedirectionType()const
{
	return redirectionType_;
}

std::string DescribeRedirectionResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeRedirectionResult::getUserUtterance()const
{
	return userUtterance_;
}

std::string DescribeRedirectionResult::getPrompt()const
{
	return prompt_;
}

std::string DescribeRedirectionResult::getNavigationScriptId()const
{
	return navigationScriptId_;
}

