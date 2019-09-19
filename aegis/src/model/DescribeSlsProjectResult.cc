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

#include <alibabacloud/aegis/model/DescribeSlsProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSlsProjectResult::DescribeSlsProjectResult() :
	ServiceResult()
{}

DescribeSlsProjectResult::DescribeSlsProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlsProjectResult::~DescribeSlsProjectResult()
{}

void DescribeSlsProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlsProjectDataNode = value["SlsProjectData"]["SlsProjectDataItem"];
	for (auto valueSlsProjectDataSlsProjectDataItem : allSlsProjectDataNode)
	{
		SlsProjectDataItem slsProjectDataObject;
		if(!valueSlsProjectDataSlsProjectDataItem["Project"].isNull())
			slsProjectDataObject.project = valueSlsProjectDataSlsProjectDataItem["Project"].asString();
		auto allLogStore = value["LogStore"]["StringItem"];
		for (auto value : allLogStore)
			slsProjectDataObject.logStore.push_back(value.asString());
		slsProjectData_.push_back(slsProjectDataObject);
	}

}

std::vector<DescribeSlsProjectResult::SlsProjectDataItem> DescribeSlsProjectResult::getSlsProjectData()const
{
	return slsProjectData_;
}

