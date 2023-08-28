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

#include <alibabacloud/eflo/model/ListSubnetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListSubnetsResult::ListSubnetsResult() :
	ServiceResult()
{}

ListSubnetsResult::ListSubnetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSubnetsResult::~ListSubnetsResult()
{}

void ListSubnetsResult::parse(const std::string &payload)
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
		if(!contentNodeDataDataItem["TenantId"].isNull())
			dataItemObject.tenantId = contentNodeDataDataItem["TenantId"].asString();
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["ZoneId"].isNull())
			dataItemObject.zoneId = contentNodeDataDataItem["ZoneId"].asString();
		if(!contentNodeDataDataItem["Type"].isNull())
			dataItemObject.type = contentNodeDataDataItem["Type"].asString();
		if(!contentNodeDataDataItem["SubnetId"].isNull())
			dataItemObject.subnetId = contentNodeDataDataItem["SubnetId"].asString();
		if(!contentNodeDataDataItem["SubnetName"].isNull())
			dataItemObject.subnetName = contentNodeDataDataItem["SubnetName"].asString();
		if(!contentNodeDataDataItem["Cidr"].isNull())
			dataItemObject.cidr = contentNodeDataDataItem["Cidr"].asString();
		if(!contentNodeDataDataItem["VpdId"].isNull())
			dataItemObject.vpdId = contentNodeDataDataItem["VpdId"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["Message"].isNull())
			dataItemObject.message = contentNodeDataDataItem["Message"].asString();
		if(!contentNodeDataDataItem["NcCount"].isNull())
			dataItemObject.ncCount = std::stoi(contentNodeDataDataItem["NcCount"].asString());
		if(!contentNodeDataDataItem["NetworkInterfaceCount"].isNull())
			dataItemObject.networkInterfaceCount = std::stoi(contentNodeDataDataItem["NetworkInterfaceCount"].asString());
		if(!contentNodeDataDataItem["ResourceGroupId"].isNull())
			dataItemObject.resourceGroupId = contentNodeDataDataItem["ResourceGroupId"].asString();
		auto allTagsNode = contentNodeDataDataItem["Tags"]["Tag"];
		for (auto contentNodeDataDataItemTagsTag : allTagsNode)
		{
			Content::DataItem::Tag tagsObject;
			if(!contentNodeDataDataItemTagsTag["TagKey"].isNull())
				tagsObject.tagKey = contentNodeDataDataItemTagsTag["TagKey"].asString();
			if(!contentNodeDataDataItemTagsTag["TagValue"].isNull())
				tagsObject.tagValue = contentNodeDataDataItemTagsTag["TagValue"].asString();
			dataItemObject.tags.push_back(tagsObject);
		}
		auto vpdBaseInfoNode = value["VpdBaseInfo"];
		if(!vpdBaseInfoNode["VpdId"].isNull())
			dataItemObject.vpdBaseInfo.vpdId = vpdBaseInfoNode["VpdId"].asString();
		if(!vpdBaseInfoNode["VpdName"].isNull())
			dataItemObject.vpdBaseInfo.vpdName = vpdBaseInfoNode["VpdName"].asString();
		if(!vpdBaseInfoNode["Cidr"].isNull())
			dataItemObject.vpdBaseInfo.cidr = vpdBaseInfoNode["Cidr"].asString();
		if(!vpdBaseInfoNode["CreateTime"].isNull())
			dataItemObject.vpdBaseInfo.createTime = vpdBaseInfoNode["CreateTime"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSubnetsResult::getMessage()const
{
	return message_;
}

ListSubnetsResult::Content ListSubnetsResult::getContent()const
{
	return content_;
}

int ListSubnetsResult::getCode()const
{
	return code_;
}

