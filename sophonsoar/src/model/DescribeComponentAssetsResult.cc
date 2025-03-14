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

#include <alibabacloud/sophonsoar/model/DescribeComponentAssetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeComponentAssetsResult::DescribeComponentAssetsResult() :
	ServiceResult()
{}

DescribeComponentAssetsResult::DescribeComponentAssetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeComponentAssetsResult::~DescribeComponentAssetsResult()
{}

void DescribeComponentAssetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentAssetsNode = value["ComponentAssets"]["ComponentAssetsItem"];
	for (auto valueComponentAssetsComponentAssetsItem : allComponentAssetsNode)
	{
		ComponentAssetsItem componentAssetsObject;
		if(!valueComponentAssetsComponentAssetsItem["Id"].isNull())
			componentAssetsObject.id = std::stol(valueComponentAssetsComponentAssetsItem["Id"].asString());
		if(!valueComponentAssetsComponentAssetsItem["GmtCreate"].isNull())
			componentAssetsObject.gmtCreate = valueComponentAssetsComponentAssetsItem["GmtCreate"].asString();
		if(!valueComponentAssetsComponentAssetsItem["GmtModified"].isNull())
			componentAssetsObject.gmtModified = valueComponentAssetsComponentAssetsItem["GmtModified"].asString();
		if(!valueComponentAssetsComponentAssetsItem["Name"].isNull())
			componentAssetsObject.name = valueComponentAssetsComponentAssetsItem["Name"].asString();
		if(!valueComponentAssetsComponentAssetsItem["Componentname"].isNull())
			componentAssetsObject.componentname = valueComponentAssetsComponentAssetsItem["Componentname"].asString();
		if(!valueComponentAssetsComponentAssetsItem["Params"].isNull())
			componentAssetsObject.params = valueComponentAssetsComponentAssetsItem["Params"].asString();
		if(!valueComponentAssetsComponentAssetsItem["DomainId"].isNull())
			componentAssetsObject.domainId = valueComponentAssetsComponentAssetsItem["DomainId"].asString();
		if(!valueComponentAssetsComponentAssetsItem["TenantId"].isNull())
			componentAssetsObject.tenantId = valueComponentAssetsComponentAssetsItem["TenantId"].asString();
		if(!valueComponentAssetsComponentAssetsItem["Owner"].isNull())
			componentAssetsObject.owner = valueComponentAssetsComponentAssetsItem["Owner"].asString();
		if(!valueComponentAssetsComponentAssetsItem["AssetUuid"].isNull())
			componentAssetsObject.assetUuid = valueComponentAssetsComponentAssetsItem["AssetUuid"].asString();
		componentAssets_.push_back(componentAssetsObject);
	}

}

std::vector<DescribeComponentAssetsResult::ComponentAssetsItem> DescribeComponentAssetsResult::getComponentAssets()const
{
	return componentAssets_;
}

