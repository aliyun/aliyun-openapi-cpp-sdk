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

#include <alibabacloud/idrsservice/model/GetStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

GetStatisticsResult::GetStatisticsResult() :
	ServiceResult()
{}

GetStatisticsResult::GetStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStatisticsResult::~GetStatisticsResult()
{}

void GetStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allItemsNode = dataNode["Items"]["ItemsItem"];
	for (auto dataNodeItemsItemsItem : allItemsNode)
	{
		Data::ItemsItem itemsItemObject;
		if(!dataNodeItemsItemsItem["ClientCount"].isNull())
			itemsItemObject.clientCount = std::stol(dataNodeItemsItemsItem["ClientCount"].asString());
		if(!dataNodeItemsItemsItem["CloudCount"].isNull())
			itemsItemObject.cloudCount = std::stol(dataNodeItemsItemsItem["CloudCount"].asString());
		if(!dataNodeItemsItemsItem["DepartmentName"].isNull())
			itemsItemObject.departmentName = dataNodeItemsItemsItem["DepartmentName"].asString();
		if(!dataNodeItemsItemsItem["Month"].isNull())
			itemsItemObject.month = dataNodeItemsItemsItem["Month"].asString();
		auto allDetailNode = dataNodeItemsItemsItem["Detail"]["DetailItem"];
		for (auto dataNodeItemsItemsItemDetailDetailItem : allDetailNode)
		{
			Data::ItemsItem::DetailItem detailObject;
			if(!dataNodeItemsItemsItemDetailDetailItem["ClientCount"].isNull())
				detailObject.clientCount = std::stol(dataNodeItemsItemsItemDetailDetailItem["ClientCount"].asString());
			if(!dataNodeItemsItemsItemDetailDetailItem["CloudCount"].isNull())
				detailObject.cloudCount = std::stol(dataNodeItemsItemsItemDetailDetailItem["CloudCount"].asString());
			if(!dataNodeItemsItemsItemDetailDetailItem["DepartmentId"].isNull())
				detailObject.departmentId = dataNodeItemsItemsItemDetailDetailItem["DepartmentId"].asString();
			if(!dataNodeItemsItemsItemDetailDetailItem["DepartmentName"].isNull())
				detailObject.departmentName = dataNodeItemsItemsItemDetailDetailItem["DepartmentName"].asString();
			if(!dataNodeItemsItemsItemDetailDetailItem["Month"].isNull())
				detailObject.month = std::stoi(dataNodeItemsItemsItemDetailDetailItem["Month"].asString());
			itemsItemObject.detail.push_back(detailObject);
		}
		data_.items.push_back(itemsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetStatisticsResult::getMessage()const
{
	return message_;
}

GetStatisticsResult::Data GetStatisticsResult::getData()const
{
	return data_;
}

std::string GetStatisticsResult::getCode()const
{
	return code_;
}

