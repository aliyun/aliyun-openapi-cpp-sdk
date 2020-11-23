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

#include <alibabacloud/cloudauth/model/DescribeFaceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeFaceConfigResult::DescribeFaceConfigResult() :
	ServiceResult()
{}

DescribeFaceConfigResult::DescribeFaceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFaceConfigResult::~DescribeFaceConfigResult()
{}

void DescribeFaceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["BizType"].isNull())
			itemsObject.bizType = valueItemsItemsItem["BizType"].asString();
		if(!valueItemsItemsItem["BizName"].isNull())
			itemsObject.bizName = valueItemsItemsItem["BizName"].asString();
		if(!valueItemsItemsItem["GmtUpdated"].isNull())
			itemsObject.gmtUpdated = std::stol(valueItemsItemsItem["GmtUpdated"].asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeFaceConfigResult::ItemsItem> DescribeFaceConfigResult::getItems()const
{
	return items_;
}

