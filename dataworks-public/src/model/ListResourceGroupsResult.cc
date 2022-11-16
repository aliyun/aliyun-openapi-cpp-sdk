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

#include <alibabacloud/dataworks-public/model/ListResourceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListResourceGroupsResult::ListResourceGroupsResult() :
	ServiceResult()
{}

ListResourceGroupsResult::ListResourceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceGroupsResult::~ListResourceGroupsResult()
{}

void ListResourceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = std::stoi(valueDataDataItem["Status"].asString());
		if(!valueDataDataItem["UpdateTime"].isNull())
			dataObject.updateTime = valueDataDataItem["UpdateTime"].asString();
		if(!valueDataDataItem["IsDefault"].isNull())
			dataObject.isDefault = valueDataDataItem["IsDefault"].asString() == "true";
		if(!valueDataDataItem["Cluster"].isNull())
			dataObject.cluster = valueDataDataItem["Cluster"].asString();
		if(!valueDataDataItem["EnableKp"].isNull())
			dataObject.enableKp = valueDataDataItem["EnableKp"].asString() == "true";
		if(!valueDataDataItem["ResourceGroupType"].isNull())
			dataObject.resourceGroupType = valueDataDataItem["ResourceGroupType"].asString();
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = valueDataDataItem["CreateTime"].asString();
		if(!valueDataDataItem["Identifier"].isNull())
			dataObject.identifier = valueDataDataItem["Identifier"].asString();
		if(!valueDataDataItem["Mode"].isNull())
			dataObject.mode = valueDataDataItem["Mode"].asString();
		if(!valueDataDataItem["BizExtKey"].isNull())
			dataObject.bizExtKey = valueDataDataItem["BizExtKey"].asString();
		if(!valueDataDataItem["Sequence"].isNull())
			dataObject.sequence = std::stoi(valueDataDataItem["Sequence"].asString());
		if(!valueDataDataItem["Specs"].isNull())
			dataObject.specs = valueDataDataItem["Specs"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stol(valueDataDataItem["Id"].asString());
		if(!valueDataDataItem["TenantId"].isNull())
			dataObject.tenantId = std::stol(valueDataDataItem["TenantId"].asString());
		if(!valueDataDataItem["ResourceManagerResourceGroupId"].isNull())
			dataObject.resourceManagerResourceGroupId = valueDataDataItem["ResourceManagerResourceGroupId"].asString();
		auto allTagsNode = valueDataDataItem["Tags"]["Tag"];
		for (auto valueDataDataItemTagsTag : allTagsNode)
		{
			DataItem::Tag tagsObject;
			if(!valueDataDataItemTagsTag["Key"].isNull())
				tagsObject.key = valueDataDataItemTagsTag["Key"].asString();
			if(!valueDataDataItemTagsTag["Value"].isNull())
				tagsObject.value = valueDataDataItemTagsTag["Value"].asString();
			dataObject.tags.push_back(tagsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListResourceGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListResourceGroupsResult::DataItem> ListResourceGroupsResult::getData()const
{
	return data_;
}

bool ListResourceGroupsResult::getSuccess()const
{
	return success_;
}

