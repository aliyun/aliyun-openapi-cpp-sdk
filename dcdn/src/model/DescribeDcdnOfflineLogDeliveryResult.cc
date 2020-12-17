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

#include <alibabacloud/dcdn/model/DescribeDcdnOfflineLogDeliveryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnOfflineLogDeliveryResult::DescribeDcdnOfflineLogDeliveryResult() :
	ServiceResult()
{}

DescribeDcdnOfflineLogDeliveryResult::DescribeDcdnOfflineLogDeliveryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnOfflineLogDeliveryResult::~DescribeDcdnOfflineLogDeliveryResult()
{}

void DescribeDcdnOfflineLogDeliveryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["Domain"];
	for (auto valueDomainsDomain : allDomainsNode)
	{
		Domain domainsObject;
		if(!valueDomainsDomain["DomainName"].isNull())
			domainsObject.domainName = valueDomainsDomain["DomainName"].asString();
		domains_.push_back(domainsObject);
	}
	auto allRegionsNode = value["Regions"]["Region"];
	for (auto valueRegionsRegion : allRegionsNode)
	{
		Region regionsObject;
		if(!valueRegionsRegion["OssId"].isNull())
			regionsObject.ossId = std::stoi(valueRegionsRegion["OssId"].asString());
		if(!valueRegionsRegion["OssBucketName"].isNull())
			regionsObject.ossBucketName = valueRegionsRegion["OssBucketName"].asString();
		if(!valueRegionsRegion["OssPathPrefix"].isNull())
			regionsObject.ossPathPrefix = valueRegionsRegion["OssPathPrefix"].asString();
		if(!valueRegionsRegion["DlaVcName"].isNull())
			regionsObject.dlaVcName = valueRegionsRegion["DlaVcName"].asString();
		if(!valueRegionsRegion["RegionId"].isNull())
			regionsObject.regionId = valueRegionsRegion["RegionId"].asString();
		if(!valueRegionsRegion["RegionName"].isNull())
			regionsObject.regionName = valueRegionsRegion["RegionName"].asString();
		if(!valueRegionsRegion["IsOverseas"].isNull())
			regionsObject.isOverseas = valueRegionsRegion["IsOverseas"].asString();
		if(!valueRegionsRegion["OssEndpoint"].isNull())
			regionsObject.ossEndpoint = valueRegionsRegion["OssEndpoint"].asString();
		if(!valueRegionsRegion["AreaId"].isNull())
			regionsObject.areaId = valueRegionsRegion["AreaId"].asString();
		if(!valueRegionsRegion["AreaName"].isNull())
			regionsObject.areaName = valueRegionsRegion["AreaName"].asString();
		if(!valueRegionsRegion["DlaDbName"].isNull())
			regionsObject.dlaDbName = valueRegionsRegion["DlaDbName"].asString();
		if(!valueRegionsRegion["DlaTableName"].isNull())
			regionsObject.dlaTableName = valueRegionsRegion["DlaTableName"].asString();
		regions_.push_back(regionsObject);
	}
	auto allFields = value["Fields"]["Field"];
	for (const auto &item : allFields)
		fields_.push_back(item.asString());

}

std::vector<DescribeDcdnOfflineLogDeliveryResult::Domain> DescribeDcdnOfflineLogDeliveryResult::getDomains()const
{
	return domains_;
}

std::vector<std::string> DescribeDcdnOfflineLogDeliveryResult::getFields()const
{
	return fields_;
}

std::vector<DescribeDcdnOfflineLogDeliveryResult::Region> DescribeDcdnOfflineLogDeliveryResult::getRegions()const
{
	return regions_;
}

