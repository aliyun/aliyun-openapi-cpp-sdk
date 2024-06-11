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

#include <alibabacloud/beian/model/QueryAccessorDomainWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Beian;
using namespace AlibabaCloud::Beian::Model;

QueryAccessorDomainWhiteListResult::QueryAccessorDomainWhiteListResult() :
	ServiceResult()
{}

QueryAccessorDomainWhiteListResult::QueryAccessorDomainWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccessorDomainWhiteListResult::~QueryAccessorDomainWhiteListResult()
{}

void QueryAccessorDomainWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["White"].isNull())
		data_.white = dataNode["White"].asString() == "true";
	auto allItemsNode = dataNode["Items"]["itemsItem"];
	for (auto dataNodeItemsitemsItem : allItemsNode)
	{
		Data::ItemsItem itemsItemObject;
		if(!dataNodeItemsitemsItem["Type"].isNull())
			itemsItemObject.type = dataNodeItemsitemsItem["Type"].asString();
		if(!dataNodeItemsitemsItem["CreateTime"].isNull())
			itemsItemObject.createTime = dataNodeItemsitemsItem["CreateTime"].asString();
		if(!dataNodeItemsitemsItem["StartTime"].isNull())
			itemsItemObject.startTime = dataNodeItemsitemsItem["StartTime"].asString();
		if(!dataNodeItemsitemsItem["EndTime"].isNull())
			itemsItemObject.endTime = dataNodeItemsitemsItem["EndTime"].asString();
		if(!dataNodeItemsitemsItem["Valid"].isNull())
			itemsItemObject.valid = dataNodeItemsitemsItem["Valid"].asString() == "true";
		data_.items.push_back(itemsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryAccessorDomainWhiteListResult::getMessage()const
{
	return message_;
}

QueryAccessorDomainWhiteListResult::Data QueryAccessorDomainWhiteListResult::getData()const
{
	return data_;
}

int QueryAccessorDomainWhiteListResult::getCode()const
{
	return code_;
}

