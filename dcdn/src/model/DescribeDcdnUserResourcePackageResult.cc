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

#include <alibabacloud/dcdn/model/DescribeDcdnUserResourcePackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnUserResourcePackageResult::DescribeDcdnUserResourcePackageResult() :
	ServiceResult()
{}

DescribeDcdnUserResourcePackageResult::DescribeDcdnUserResourcePackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnUserResourcePackageResult::~DescribeDcdnUserResourcePackageResult()
{}

void DescribeDcdnUserResourcePackageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcePackageInfosNode = value["ResourcePackageInfos"]["ResourcePackageInfo"];
	for (auto valueResourcePackageInfosResourcePackageInfo : allResourcePackageInfosNode)
	{
		ResourcePackageInfo resourcePackageInfosObject;
		if(!valueResourcePackageInfosResourcePackageInfo["EndTime"].isNull())
			resourcePackageInfosObject.endTime = valueResourcePackageInfosResourcePackageInfo["EndTime"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["Status"].isNull())
			resourcePackageInfosObject.status = valueResourcePackageInfosResourcePackageInfo["Status"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["DisplayName"].isNull())
			resourcePackageInfosObject.displayName = valueResourcePackageInfosResourcePackageInfo["DisplayName"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["StartTime"].isNull())
			resourcePackageInfosObject.startTime = valueResourcePackageInfosResourcePackageInfo["StartTime"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["CommodityCode"].isNull())
			resourcePackageInfosObject.commodityCode = valueResourcePackageInfosResourcePackageInfo["CommodityCode"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["CurrCapacity"].isNull())
			resourcePackageInfosObject.currCapacity = valueResourcePackageInfosResourcePackageInfo["CurrCapacity"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["InitCapacity"].isNull())
			resourcePackageInfosObject.initCapacity = valueResourcePackageInfosResourcePackageInfo["InitCapacity"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["InstanceId"].isNull())
			resourcePackageInfosObject.instanceId = valueResourcePackageInfosResourcePackageInfo["InstanceId"].asString();
		if(!valueResourcePackageInfosResourcePackageInfo["TemplateName"].isNull())
			resourcePackageInfosObject.templateName = valueResourcePackageInfosResourcePackageInfo["TemplateName"].asString();
		resourcePackageInfos_.push_back(resourcePackageInfosObject);
	}

}

std::vector<DescribeDcdnUserResourcePackageResult::ResourcePackageInfo> DescribeDcdnUserResourcePackageResult::getResourcePackageInfos()const
{
	return resourcePackageInfos_;
}

