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

#include <alibabacloud/voicenavigator/model/DescribeKnowledgeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeKnowledgeResult::DescribeKnowledgeResult() :
	ServiceResult()
{}

DescribeKnowledgeResult::DescribeKnowledgeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKnowledgeResult::~DescribeKnowledgeResult()
{}

void DescribeKnowledgeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSimilarUtterances = value["SimilarUtterances"]["SimilarUtterance"];
	for (const auto &item : allSimilarUtterances)
		similarUtterances_.push_back(item.asString());
	if(!value["NavigationScriptId"].isNull())
		navigationScriptId_ = value["NavigationScriptId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["CategoryId"].isNull())
		categoryId_ = value["CategoryId"].asString();
	if(!value["UserUtterance"].isNull())
		userUtterance_ = value["UserUtterance"].asString();
	if(!value["Answer"].isNull())
		answer_ = value["Answer"].asString();
	if(!value["Interruptible"].isNull())
		interruptible_ = value["Interruptible"].asString() == "true";

}

std::string DescribeKnowledgeResult::getCategoryId()const
{
	return categoryId_;
}

std::string DescribeKnowledgeResult::getAnswer()const
{
	return answer_;
}

bool DescribeKnowledgeResult::getInterruptible()const
{
	return interruptible_;
}

std::vector<std::string> DescribeKnowledgeResult::getSimilarUtterances()const
{
	return similarUtterances_;
}

std::string DescribeKnowledgeResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeKnowledgeResult::getUserUtterance()const
{
	return userUtterance_;
}

std::string DescribeKnowledgeResult::getNavigationScriptId()const
{
	return navigationScriptId_;
}

