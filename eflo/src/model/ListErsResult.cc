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

#include <alibabacloud/eflo/model/ListErsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListErsResult::ListErsResult() :
	ServiceResult()
{}

ListErsResult::ListErsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListErsResult::~ListErsResult()
{}

void ListErsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Total"].isNull())
		content_.total = std::stol(contentNode["Total"].asString());
	auto allDataNode = contentNode["Data"]["DataItem"];
	for (auto contentNodeDataDataItem : allDataNode)
	{
		Content::DataItem dataItemObject;
		if(!contentNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = contentNodeDataDataItem["CreateTime"].asString();
		if(!contentNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = contentNodeDataDataItem["GmtModified"].asString();
		if(!contentNodeDataDataItem["Message"].isNull())
			dataItemObject.message = contentNodeDataDataItem["Message"].asString();
		if(!contentNodeDataDataItem["ErId"].isNull())
			dataItemObject.erId = contentNodeDataDataItem["ErId"].asString();
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["TenantId"].isNull())
			dataItemObject.tenantId = contentNodeDataDataItem["TenantId"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["ErName"].isNull())
			dataItemObject.erName = contentNodeDataDataItem["ErName"].asString();
		if(!contentNodeDataDataItem["MasterZoneId"].isNull())
			dataItemObject.masterZoneId = contentNodeDataDataItem["MasterZoneId"].asString();
		if(!contentNodeDataDataItem["Description"].isNull())
			dataItemObject.description = contentNodeDataDataItem["Description"].asString();
		if(!contentNodeDataDataItem["Connections"].isNull())
			dataItemObject.connections = std::stol(contentNodeDataDataItem["Connections"].asString());
		if(!contentNodeDataDataItem["RouteMaps"].isNull())
			dataItemObject.routeMaps = std::stol(contentNodeDataDataItem["RouteMaps"].asString());
		if(!contentNodeDataDataItem["ResourceGroupId"].isNull())
			dataItemObject.resourceGroupId = contentNodeDataDataItem["ResourceGroupId"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListErsResult::getMessage()const
{
	return message_;
}

ListErsResult::Content ListErsResult::getContent()const
{
	return content_;
}

int ListErsResult::getCode()const
{
	return code_;
}

