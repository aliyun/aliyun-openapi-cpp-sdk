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

#include <alibabacloud/sophonsoar/model/DescribeEnumItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeEnumItemsResult::DescribeEnumItemsResult() :
	ServiceResult()
{}

DescribeEnumItemsResult::DescribeEnumItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnumItemsResult::~DescribeEnumItemsResult()
{}

void DescribeEnumItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Key"].isNull())
			dataObject.key = valueDataDataItem["Key"].asString();
		if(!valueDataDataItem["Value"].isNull())
			dataObject.value = valueDataDataItem["Value"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeEnumItemsResult::DataItem> DescribeEnumItemsResult::getData()const
{
	return data_;
}

