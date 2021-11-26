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

#include <alibabacloud/qualitycheck/model/ListWarningConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListWarningConfigResult::ListWarningConfigResult() :
	ServiceResult()
{}

ListWarningConfigResult::ListWarningConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWarningConfigResult::~ListWarningConfigResult()
{}

void ListWarningConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["WarningConfigInfo"];
	for (auto valueDataWarningConfigInfo : allDataNode)
	{
		WarningConfigInfo dataObject;
		if(!valueDataWarningConfigInfo["Status"].isNull())
			dataObject.status = std::stoi(valueDataWarningConfigInfo["Status"].asString());
		if(!valueDataWarningConfigInfo["ConfigName"].isNull())
			dataObject.configName = valueDataWarningConfigInfo["ConfigName"].asString();
		if(!valueDataWarningConfigInfo["UpdateTime"].isNull())
			dataObject.updateTime = valueDataWarningConfigInfo["UpdateTime"].asString();
		if(!valueDataWarningConfigInfo["ConfigId"].isNull())
			dataObject.configId = std::stol(valueDataWarningConfigInfo["ConfigId"].asString());
		if(!valueDataWarningConfigInfo["CreateTime"].isNull())
			dataObject.createTime = valueDataWarningConfigInfo["CreateTime"].asString();
		auto allRuleListNode = valueDataWarningConfigInfo["RuleList"]["WarningRule"];
		for (auto valueDataWarningConfigInfoRuleListWarningRule : allRuleListNode)
		{
			WarningConfigInfo::WarningRule ruleListObject;
			if(!valueDataWarningConfigInfoRuleListWarningRule["RuleName"].isNull())
				ruleListObject.ruleName = valueDataWarningConfigInfoRuleListWarningRule["RuleName"].asString();
			if(!valueDataWarningConfigInfoRuleListWarningRule["Rid"].isNull())
				ruleListObject.rid = std::stol(valueDataWarningConfigInfoRuleListWarningRule["Rid"].asString());
			dataObject.ruleList.push_back(ruleListObject);
		}
		auto allChannelsNode = valueDataWarningConfigInfo["Channels"]["Channel"];
		for (auto valueDataWarningConfigInfoChannelsChannel : allChannelsNode)
		{
			WarningConfigInfo::Channel channelsObject;
			if(!valueDataWarningConfigInfoChannelsChannel["Type"].isNull())
				channelsObject.type = std::stoi(valueDataWarningConfigInfoChannelsChannel["Type"].asString());
			if(!valueDataWarningConfigInfoChannelsChannel["Url"].isNull())
				channelsObject.url = valueDataWarningConfigInfoChannelsChannel["Url"].asString();
			dataObject.channels.push_back(channelsObject);
		}
		auto allRidList = value["RidList"]["RidList"];
		for (auto value : allRidList)
			dataObject.ridList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListWarningConfigResult::getMessage()const
{
	return message_;
}

std::vector<ListWarningConfigResult::WarningConfigInfo> ListWarningConfigResult::getData()const
{
	return data_;
}

std::string ListWarningConfigResult::getCode()const
{
	return code_;
}

bool ListWarningConfigResult::getSuccess()const
{
	return success_;
}

