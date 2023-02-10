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

#include <alibabacloud/sas/model/DescribeInstanceStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeInstanceStatisticsResult::DescribeInstanceStatisticsResult() :
	ServiceResult()
{}

DescribeInstanceStatisticsResult::DescribeInstanceStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceStatisticsResult::~DescribeInstanceStatisticsResult()
{}

void DescribeInstanceStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Account"].isNull())
			dataObject.account = std::stoi(valueDataDataItem["Account"].asString());
		if(!valueDataDataItem["AppNum"].isNull())
			dataObject.appNum = std::stoi(valueDataDataItem["AppNum"].asString());
		if(!valueDataDataItem["ScaNum"].isNull())
			dataObject.scaNum = std::stoi(valueDataDataItem["ScaNum"].asString());
		if(!valueDataDataItem["Trojan"].isNull())
			dataObject.trojan = std::stoi(valueDataDataItem["Trojan"].asString());
		if(!valueDataDataItem["CveNum"].isNull())
			dataObject.cveNum = std::stoi(valueDataDataItem["CveNum"].asString());
		if(!valueDataDataItem["EmgNum"].isNull())
			dataObject.emgNum = std::stoi(valueDataDataItem["EmgNum"].asString());
		if(!valueDataDataItem["Suspicious"].isNull())
			dataObject.suspicious = std::stoi(valueDataDataItem["Suspicious"].asString());
		if(!valueDataDataItem["CmsNum"].isNull())
			dataObject.cmsNum = std::stoi(valueDataDataItem["CmsNum"].asString());
		if(!valueDataDataItem["Uuid"].isNull())
			dataObject.uuid = valueDataDataItem["Uuid"].asString();
		if(!valueDataDataItem["Vul"].isNull())
			dataObject.vul = std::stoi(valueDataDataItem["Vul"].asString());
		if(!valueDataDataItem["Health"].isNull())
			dataObject.health = std::stoi(valueDataDataItem["Health"].asString());
		if(!valueDataDataItem["SysNum"].isNull())
			dataObject.sysNum = std::stoi(valueDataDataItem["SysNum"].asString());
		if(!valueDataDataItem["WeakPWNum"].isNull())
			dataObject.weakPWNum = std::stoi(valueDataDataItem["WeakPWNum"].asString());
		if(!valueDataDataItem["AgentlessAll"].isNull())
			dataObject.agentlessAll = std::stoi(valueDataDataItem["AgentlessAll"].asString());
		if(!valueDataDataItem["AgentlessMalicious"].isNull())
			dataObject.agentlessMalicious = std::stoi(valueDataDataItem["AgentlessMalicious"].asString());
		if(!valueDataDataItem["AgentlessVulCve"].isNull())
			dataObject.agentlessVulCve = std::stoi(valueDataDataItem["AgentlessVulCve"].asString());
		if(!valueDataDataItem["AgentlessVulSca"].isNull())
			dataObject.agentlessVulSca = std::stoi(valueDataDataItem["AgentlessVulSca"].asString());
		if(!valueDataDataItem["AgentlessBaseline"].isNull())
			dataObject.agentlessBaseline = std::stoi(valueDataDataItem["AgentlessBaseline"].asString());
		if(!valueDataDataItem["CspmNum"].isNull())
			dataObject.cspmNum = std::stoi(valueDataDataItem["CspmNum"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribeInstanceStatisticsResult::DataItem> DescribeInstanceStatisticsResult::getData()const
{
	return data_;
}

