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
	auto allCens = value["Cens"]["Cen"];
	for (auto value : allCens)
	{
		Cen censObject;
		if(!value["CenId"].isNull())
			censObject.cenId = value["CenId"].asString();
		if(!value["Name"].isNull())
			censObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			censObject.description = value["Description"].asString();
		if(!value["ProtectionLevel"].isNull())
			censObject.protectionLevel = value["ProtectionLevel"].asString();
		if(!value["Status"].isNull())
			censObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			censObject.creationTime = value["CreationTime"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Cen::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			censObject.tags.push_back(tagsObject);
		}
		auto allCenBandwidthPackageIds = value["CenBandwidthPackageIds"]["CenBandwidthPackageId"];
		for (auto value : allCenBandwidthPackageIds)
			censObject.cenBandwidthPackageIds.push_back(value.asString());
		cens_.push_back(censObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

