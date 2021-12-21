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

#include <alibabacloud/cbn/model/DescribeCenGeographicSpansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenGeographicSpansResult::DescribeCenGeographicSpansResult() :
	ServiceResult()
{}

DescribeCenGeographicSpansResult::DescribeCenGeographicSpansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenGeographicSpansResult::~DescribeCenGeographicSpansResult()
{}

void DescribeCenGeographicSpansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGeographicSpanModelsNode = value["GeographicSpanModels"]["GeographicSpanModel"];
	for (auto valueGeographicSpanModelsGeographicSpanModel : allGeographicSpanModelsNode)
	{
		GeographicSpanModel geographicSpanModelsObject;
		if(!valueGeographicSpanModelsGeographicSpanModel["LocalGeoRegionId"].isNull())
			geographicSpanModelsObject.localGeoRegionId = valueGeographicSpanModelsGeographicSpanModel["LocalGeoRegionId"].asString();
		if(!valueGeographicSpanModelsGeographicSpanModel["GeographicSpanId"].isNull())
			geographicSpanModelsObject.geographicSpanId = valueGeographicSpanModelsGeographicSpanModel["GeographicSpanId"].asString();
		if(!valueGeographicSpanModelsGeographicSpanModel["OppositeGeoRegionId"].isNull())
			geographicSpanModelsObject.oppositeGeoRegionId = valueGeographicSpanModelsGeographicSpanModel["OppositeGeoRegionId"].asString();
		geographicSpanModels_.push_back(geographicSpanModelsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCenGeographicSpansResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenGeographicSpansResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenGeographicSpansResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenGeographicSpansResult::GeographicSpanModel> DescribeCenGeographicSpansResult::getGeographicSpanModels()const
{
	return geographicSpanModels_;
}

