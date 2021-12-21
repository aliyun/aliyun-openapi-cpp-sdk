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

#include <alibabacloud/cbn/model/DescribeCensResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCensResult::DescribeCensResult() :
	ServiceResult()
{}

DescribeCensResult::DescribeCensResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCensResult::~DescribeCensResult()
{}

void DescribeCensResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCensNode = value["Cens"]["Cen"];
	for (auto valueCensCen : allCensNode)
	{
		Cen censObject;
		if(!valueCensCen["Status"].isNull())
			censObject.status = valueCensCen["Status"].asString();
		if(!valueCensCen["CreationTime"].isNull())
			censObject.creationTime = valueCensCen["CreationTime"].asString();
		if(!valueCensCen["Ipv6Level"].isNull())
			censObject.ipv6Level = valueCensCen["Ipv6Level"].asString();
		if(!valueCensCen["Description"].isNull())
			censObject.description = valueCensCen["Description"].asString();
		if(!valueCensCen["ResourceGroupId"].isNull())
			censObject.resourceGroupId = valueCensCen["ResourceGroupId"].asString();
		if(!valueCensCen["CenId"].isNull())
			censObject.cenId = valueCensCen["CenId"].asString();
		if(!valueCensCen["ProtectionLevel"].isNull())
			censObject.protectionLevel = valueCensCen["ProtectionLevel"].asString();
		if(!valueCensCen["Name"].isNull())
			censObject.name = valueCensCen["Name"].asString();
		auto allTagsNode = valueCensCen["Tags"]["Tag"];
		for (auto valueCensCenTagsTag : allTagsNode)
		{
			Cen::Tag tagsObject;
			if(!valueCensCenTagsTag["Key"].isNull())
				tagsObject.key = valueCensCenTagsTag["Key"].asString();
			if(!valueCensCenTagsTag["Value"].isNull())
				tagsObject.value = valueCensCenTagsTag["Value"].asString();
			censObject.tags.push_back(tagsObject);
		}
		auto allCenBandwidthPackageIds = value["CenBandwidthPackageIds"]["CenBandwidthPackageId"];
		for (auto value : allCenBandwidthPackageIds)
			censObject.cenBandwidthPackageIds.push_back(value.asString());
		cens_.push_back(censObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCensResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCensResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCensResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCensResult::Cen> DescribeCensResult::getCens()const
{
	return cens_;
}

