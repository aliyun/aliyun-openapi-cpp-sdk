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

#include <alibabacloud/polardb/model/DescribeResourcePackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeResourcePackagesResult::DescribeResourcePackagesResult() :
	ServiceResult()
{}

DescribeResourcePackagesResult::DescribeResourcePackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourcePackagesResult::~DescribeResourcePackagesResult()
{}

void DescribeResourcePackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcePackageListNode = value["ResourcePackageList"]["ResourcePackageListItem"];
	for (auto valueResourcePackageListResourcePackageListItem : allResourcePackageListNode)
	{
		ResourcePackageListItem resourcePackageListObject;
		if(!valueResourcePackageListResourcePackageListItem["ResourcePackageId"].isNull())
			resourcePackageListObject.resourcePackageId = valueResourcePackageListResourcePackageListItem["ResourcePackageId"].asString();
		if(!valueResourcePackageListResourcePackageListItem["ResourcePackageType"].isNull())
			resourcePackageListObject.resourcePackageType = valueResourcePackageListResourcePackageListItem["ResourcePackageType"].asString();
		if(!valueResourcePackageListResourcePackageListItem["Status"].isNull())
			resourcePackageListObject.status = valueResourcePackageListResourcePackageListItem["Status"].asString();
		if(!valueResourcePackageListResourcePackageListItem["UsedCapacity"].isNull())
			resourcePackageListObject.usedCapacity = std::stol(valueResourcePackageListResourcePackageListItem["UsedCapacity"].asString());
		if(!valueResourcePackageListResourcePackageListItem["TotalCapacity"].isNull())
			resourcePackageListObject.totalCapacity = std::stol(valueResourcePackageListResourcePackageListItem["TotalCapacity"].asString());
		if(!valueResourcePackageListResourcePackageListItem["CreateTime"].isNull())
			resourcePackageListObject.createTime = std::stol(valueResourcePackageListResourcePackageListItem["CreateTime"].asString());
		if(!valueResourcePackageListResourcePackageListItem["ExpireTime"].isNull())
			resourcePackageListObject.expireTime = std::stol(valueResourcePackageListResourcePackageListItem["ExpireTime"].asString());
		if(!valueResourcePackageListResourcePackageListItem["AutoQuota"].isNull())
			resourcePackageListObject.autoQuota = valueResourcePackageListResourcePackageListItem["AutoQuota"].asString() == "true";
		auto allResourcePackageQuotaListNode = valueResourcePackageListResourcePackageListItem["ResourcePackageQuotaList"]["ResourcePackageQuotaListItem"];
		for (auto valueResourcePackageListResourcePackageListItemResourcePackageQuotaListResourcePackageQuotaListItem : allResourcePackageQuotaListNode)
		{
			ResourcePackageListItem::ResourcePackageQuotaListItem resourcePackageQuotaListObject;
			if(!valueResourcePackageListResourcePackageListItemResourcePackageQuotaListResourcePackageQuotaListItem["ProjectId"].isNull())
				resourcePackageQuotaListObject.projectId = valueResourcePackageListResourcePackageListItemResourcePackageQuotaListResourcePackageQuotaListItem["ProjectId"].asString();
			if(!valueResourcePackageListResourcePackageListItemResourcePackageQuotaListResourcePackageQuotaListItem["UsedCapacity"].isNull())
				resourcePackageQuotaListObject.usedCapacity = std::stol(valueResourcePackageListResourcePackageListItemResourcePackageQuotaListResourcePackageQuotaListItem["UsedCapacity"].asString());
			if(!valueResourcePackageListResourcePackageListItemResourcePackageQuotaListResourcePackageQuotaListItem["AllocatedCapacity"].isNull())
				resourcePackageQuotaListObject.allocatedCapacity = std::stol(valueResourcePackageListResourcePackageListItemResourcePackageQuotaListResourcePackageQuotaListItem["AllocatedCapacity"].asString());
			resourcePackageListObject.resourcePackageQuotaList.push_back(resourcePackageQuotaListObject);
		}
		auto allTagsNode = valueResourcePackageListResourcePackageListItem["Tags"]["Tag"];
		for (auto valueResourcePackageListResourcePackageListItemTagsTag : allTagsNode)
		{
			ResourcePackageListItem::Tag tagsObject;
			if(!valueResourcePackageListResourcePackageListItemTagsTag["Key"].isNull())
				tagsObject.key = valueResourcePackageListResourcePackageListItemTagsTag["Key"].asString();
			if(!valueResourcePackageListResourcePackageListItemTagsTag["Value"].isNull())
				tagsObject.value = valueResourcePackageListResourcePackageListItemTagsTag["Value"].asString();
			resourcePackageListObject.tags.push_back(tagsObject);
		}
		resourcePackageList_.push_back(resourcePackageListObject);
	}

}

std::vector<DescribeResourcePackagesResult::ResourcePackageListItem> DescribeResourcePackagesResult::getResourcePackageList()const
{
	return resourcePackageList_;
}

