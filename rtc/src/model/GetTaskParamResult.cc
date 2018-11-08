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

#include <alibabacloud/rtc/model/GetTaskParamResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

GetTaskParamResult::GetTaskParamResult() :
	ServiceResult()
{}

GetTaskParamResult::GetTaskParamResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskParamResult::~GetTaskParamResult()
{}

void GetTaskParamResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMixPane = value["MixPane"]["MixPaneItem"];
	for (auto value : allMixPane)
	{
		MixPaneItem mixPaneObject;
		if(!value["PaneId"].isNull())
			mixPaneObject.paneId = std::stoi(value["PaneId"].asString());
		if(!value["UserId"].isNull())
			mixPaneObject.userId = value["UserId"].asString();
		if(!value["SourceType"].isNull())
			mixPaneObject.sourceType = value["SourceType"].asString();
		mixPane_.push_back(mixPaneObject);
	}
	if(!value["ChannelId"].isNull())
		channelId_ = value["ChannelId"].asString();
	if(!value["TemplateId"].isNull())
		templateId_ = std::stol(value["TemplateId"].asString());

}

std::vector<GetTaskParamResult::MixPaneItem> GetTaskParamResult::getMixPane()const
{
	return mixPane_;
}

std::string GetTaskParamResult::getChannelId()const
{
	return channelId_;
}

long GetTaskParamResult::getTemplateId()const
{
	return templateId_;
}

