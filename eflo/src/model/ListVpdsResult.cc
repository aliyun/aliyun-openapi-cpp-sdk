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

#include <alibabacloud/eflo/model/ListVpdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListVpdsResult::ListVpdsResult() :
	ServiceResult()
{}

ListVpdsResult::ListVpdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpdsResult::~ListVpdsResult()
{}

void ListVpdsResult::parse(const std::string &payload)
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
		if(!contentNodeDataDataItem["TenantId"].isNull())
			dataItemObject.tenantId = contentNodeDataDataItem["TenantId"].asString();
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["VpdId"].isNull())
			dataItemObject.vpdId = contentNodeDataDataItem["VpdId"].asString();
		if(!contentNodeDataDataItem["VpdName"].isNull())
			dataItemObject.vpdName = contentNodeDataDataItem["VpdName"].asString();
		if(!contentNodeDataDataItem["Cidr"].isNull())
			dataItemObject.cidr = contentNodeDataDataItem["Cidr"].asString();
		if(!contentNodeDataDataItem["ServiceCidr"].isNull())
			dataItemObject.serviceCidr = contentNodeDataDataItem["ServiceCidr"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["Message"].isNull())
			dataItemObject.message = contentNodeDataDataItem["Message"].asString();
		if(!contentNodeDataDataItem["NcCount"].isNull())
			dataItemObject.ncCount = std::stoi(contentNodeDataDataItem["NcCount"].asString());
		if(!contentNodeDataDataItem["NetworkInterfaceCount"].isNull())
			dataItemObject.networkInterfaceCount = std::stoi(contentNodeDataDataItem["NetworkInterfaceCount"].asString());
		if(!contentNodeDataDataItem["SubnetCount"].isNull())
			dataItemObject.subnetCount = std::stoi(contentNodeDataDataItem["SubnetCount"].asString());
		if(!contentNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = contentNodeDataDataItem["CreateTime"].asString();
		if(!contentNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = contentNodeDataDataItem["GmtModified"].asString();
		if(!contentNodeDataDataItem["Dependence"].isNull())
			dataItemObject.dependence = contentNodeDataDataItem["Dependence"].asString();
		if(!contentNodeDataDataItem["ResourceGroupId"].isNull())
			dataItemObject.resourceGroupId = contentNodeDataDataItem["ResourceGroupId"].asString();
		auto allErInfosNode = contentNodeDataDataItem["ErInfos"]["ErInfo"];
		for (auto contentNodeDataDataItemErInfosErInfo : allErInfosNode)
		{
			Content::DataItem::ErInfo erInfosObject;
			if(!contentNodeDataDataItemErInfosErInfo["CreateTime"].isNull())
				erInfosObject.createTime = contentNodeDataDataItemErInfosErInfo["CreateTime"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["GmtModified"].isNull())
				erInfosObject.gmtModified = contentNodeDataDataItemErInfosErInfo["GmtModified"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["Message"].isNull())
				erInfosObject.message = contentNodeDataDataItemErInfosErInfo["Message"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["ErId"].isNull())
				erInfosObject.erId = contentNodeDataDataItemErInfosErInfo["ErId"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["RegionId"].isNull())
				erInfosObject.regionId = contentNodeDataDataItemErInfosErInfo["RegionId"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["TenantId"].isNull())
				erInfosObject.tenantId = contentNodeDataDataItemErInfosErInfo["TenantId"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["Status"].isNull())
				erInfosObject.status = contentNodeDataDataItemErInfosErInfo["Status"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["ErName"].isNull())
				erInfosObject.erName = contentNodeDataDataItemErInfosErInfo["ErName"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["MasterZoneId"].isNull())
				erInfosObject.masterZoneId = contentNodeDataDataItemErInfosErInfo["MasterZoneId"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["Description"].isNull())
				erInfosObject.description = contentNodeDataDataItemErInfosErInfo["Description"].asString();
			if(!contentNodeDataDataItemErInfosErInfo["Connections"].isNull())
				erInfosObject.connections = std::stol(contentNodeDataDataItemErInfosErInfo["Connections"].asString());
			if(!contentNodeDataDataItemErInfosErInfo["RouteMaps"].isNull())
				erInfosObject.routeMaps = std::stol(contentNodeDataDataItemErInfosErInfo["RouteMaps"].asString());
			dataItemObject.erInfos.push_back(erInfosObject);
		}
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
		auto allSecondaryCidrBlocks = value["SecondaryCidrBlocks"]["SecondaryCidrBlock"];
		for (auto value : allSecondaryCidrBlocks)
			dataItemObject.secondaryCidrBlocks.push_back(value.asString());
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListVpdsResult::getMessage()const
{
	return message_;
}

ListVpdsResult::Content ListVpdsResult::getContent()const
{
	return content_;
}

int ListVpdsResult::getCode()const
{
	return code_;
}

