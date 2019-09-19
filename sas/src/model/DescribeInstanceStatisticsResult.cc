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
		if(!valueDataDataItem["Uuid"].isNull())
			dataObject.uuid = valueDataDataItem["Uuid"].asString();
		if(!valueDataDataItem["Account"].isNull())
			dataObject.account = std::stoi(valueDataDataItem["Account"].asString());
		if(!valueDataDataItem["Health"].isNull())
			dataObject.health = std::stoi(valueDataDataItem["Health"].asString());
		if(!valueDataDataItem["Trojan"].isNull())
			dataObject.trojan = std::stoi(valueDataDataItem["Trojan"].asString());
		if(!valueDataDataItem["Suspicious"].isNull())
			dataObject.suspicious = std::stoi(valueDataDataItem["Suspicious"].asString());
		if(!valueDataDataItem["Vul"].isNull())
			dataObject.vul = std::stoi(valueDataDataItem["Vul"].asString());
		if(!valueDataDataItem["CveNum"].isNull())
			dataObject.cveNum = std::stoi(valueDataDataItem["CveNum"].asString());
		if(!valueDataDataItem["EmgNum"].isNull())
			dataObject.emgNum = std::stoi(valueDataDataItem["EmgNum"].asString());
		if(!valueDataDataItem["SysNum"].isNull())
			dataObject.sysNum = std::stoi(valueDataDataItem["SysNum"].asString());
		if(!valueDataDataItem["CmsNum"].isNull())
			dataObject.cmsNum = std::stoi(valueDataDataItem["CmsNum"].asString());
		if(!valueDataDataItem["AppNum"].isNull())
			dataObject.appNum = std::stoi(valueDataDataItem["AppNum"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribeInstanceStatisticsResult::DataItem> DescribeInstanceStatisticsResult::getData()const
{
	return data_;
}

