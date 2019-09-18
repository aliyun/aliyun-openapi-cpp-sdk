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
	auto allResourcePackageInfos = value["ResourcePackageInfos"]["ResourcePackageInfo"];
	for (auto value : allResourcePackageInfos)
	{
		ResourcePackageInfo resourcePackageInfosObject;
		if(!value["CurrCapacity"].isNull())
			resourcePackageInfosObject.currCapacity = value["CurrCapacity"].asString();
		if(!value["InitCapacity"].isNull())
			resourcePackageInfosObject.initCapacity = value["InitCapacity"].asString();
		if(!value["CommodityCode"].isNull())
			resourcePackageInfosObject.commodityCode = value["CommodityCode"].asString();
		if(!value["DisplayName"].isNull())
			resourcePackageInfosObject.displayName = value["DisplayName"].asString();
		if(!value["TemplateName"].isNull())
			resourcePackageInfosObject.templateName = value["TemplateName"].asString();
		if(!value["InstanceId"].isNull())
			resourcePackageInfosObject.instanceId = value["InstanceId"].asString();
		if(!value["Status"].isNull())
			resourcePackageInfosObject.status = value["Status"].asString();
		if(!value["StartTime"].isNull())
			resourcePackageInfosObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			resourcePackageInfosObject.endTime = value["EndTime"].asString();
		resourcePackageInfos_.push_back(resourcePackageInfosObject);
	}

}

std::vector<DescribeDcdnUserResourcePackageResult::ResourcePackageInfo> DescribeDcdnUserResourcePackageResult::getResourcePackageInfos()const
{
	return resourcePackageInfos_;
}

