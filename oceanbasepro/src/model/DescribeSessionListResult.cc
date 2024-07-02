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

#include <alibabacloud/oceanbasepro/model/DescribeSessionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSessionListResult::DescribeSessionListResult() :
	ServiceResult()
{}

DescribeSessionListResult::DescribeSessionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSessionListResult::~DescribeSessionListResult()
{}

void DescribeSessionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SessionId"].isNull())
			dataObject.sessionId = valueDataDataItem["SessionId"].asString();
		if(!valueDataDataItem["Host"].isNull())
			dataObject.host = valueDataDataItem["Host"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeSessionListResult::DataItem> DescribeSessionListResult::getData()const
{
	return data_;
}

