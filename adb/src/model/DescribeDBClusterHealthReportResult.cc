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

#include <alibabacloud/adb/model/DescribeDBClusterHealthReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBClusterHealthReportResult::DescribeDBClusterHealthReportResult() :
	ServiceResult()
{}

DescribeDBClusterHealthReportResult::DescribeDBClusterHealthReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterHealthReportResult::~DescribeDBClusterHealthReportResult()
{}

void DescribeDBClusterHealthReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Key"].isNull())
			itemsObject.key = valueItemsItemsItem["Key"].asString();
		if(!valueItemsItemsItem["Max"].isNull())
			itemsObject.max = valueItemsItemsItem["Max"].asString();
		if(!valueItemsItemsItem["Name"].isNull())
			itemsObject.name = valueItemsItemsItem["Name"].asString();
		if(!valueItemsItemsItem["Avg"].isNull())
			itemsObject.avg = valueItemsItemsItem["Avg"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBClusterHealthReportResult::ItemsItem> DescribeDBClusterHealthReportResult::getItems()const
{
	return items_;
}

