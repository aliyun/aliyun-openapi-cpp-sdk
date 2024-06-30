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

#include <alibabacloud/quotas/model/ListProductQuotaDimensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListProductQuotaDimensionsResult::ListProductQuotaDimensionsResult() :
	ServiceResult()
{}

ListProductQuotaDimensionsResult::ListProductQuotaDimensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductQuotaDimensionsResult::~ListProductQuotaDimensionsResult()
{}

void ListProductQuotaDimensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotaDimensionsNode = value["QuotaDimensions"]["QuotaDimensionsItem"];
	for (auto valueQuotaDimensionsQuotaDimensionsItem : allQuotaDimensionsNode)
	{
		QuotaDimensionsItem quotaDimensionsObject;
		if(!valueQuotaDimensionsQuotaDimensionsItem["Requisite"].isNull())
			quotaDimensionsObject.requisite = valueQuotaDimensionsQuotaDimensionsItem["Requisite"].asString() == "true";
		if(!valueQuotaDimensionsQuotaDimensionsItem["DimensionKey"].isNull())
			quotaDimensionsObject.dimensionKey = valueQuotaDimensionsQuotaDimensionsItem["DimensionKey"].asString();
		if(!valueQuotaDimensionsQuotaDimensionsItem["Name"].isNull())
			quotaDimensionsObject.name = valueQuotaDimensionsQuotaDimensionsItem["Name"].asString();
		auto allDimensionValueDetailNode = valueQuotaDimensionsQuotaDimensionsItem["DimensionValueDetail"]["DimensionValueDetailItem"];
		for (auto valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItem : allDimensionValueDetailNode)
		{
			QuotaDimensionsItem::DimensionValueDetailItem dimensionValueDetailObject;
			if(!valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItem["Name"].isNull())
				dimensionValueDetailObject.name = valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItem["Name"].asString();
			if(!valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItem["Value"].isNull())
				dimensionValueDetailObject.value = valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItem["Value"].asString();
			auto allDependentDimensions1Node = valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItem["DependentDimensions"]["DependentDimension"];
			for (auto valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItemDependentDimensionsDependentDimension : allDependentDimensions1Node)
			{
				QuotaDimensionsItem::DimensionValueDetailItem::DependentDimension dependentDimensions1Object;
				if(!valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItemDependentDimensionsDependentDimension["Key"].isNull())
					dependentDimensions1Object.key = valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItemDependentDimensionsDependentDimension["Key"].asString();
				if(!valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItemDependentDimensionsDependentDimension["Value"].isNull())
					dependentDimensions1Object.value = valueQuotaDimensionsQuotaDimensionsItemDimensionValueDetailDimensionValueDetailItemDependentDimensionsDependentDimension["Value"].asString();
				dimensionValueDetailObject.dependentDimensions1.push_back(dependentDimensions1Object);
			}
			quotaDimensionsObject.dimensionValueDetail.push_back(dimensionValueDetailObject);
		}
		auto allDependentDimensions = value["DependentDimensions"]["DependentDimension"];
		for (auto value : allDependentDimensions)
			quotaDimensionsObject.dependentDimensions.push_back(value.asString());
		auto allDimensionValues = value["DimensionValues"]["DimensionValues"];
		for (auto value : allDimensionValues)
			quotaDimensionsObject.dimensionValues.push_back(value.asString());
		quotaDimensions_.push_back(quotaDimensionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListProductQuotaDimensionsResult::QuotaDimensionsItem> ListProductQuotaDimensionsResult::getQuotaDimensions()const
{
	return quotaDimensions_;
}

int ListProductQuotaDimensionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListProductQuotaDimensionsResult::getNextToken()const
{
	return nextToken_;
}

int ListProductQuotaDimensionsResult::getMaxResults()const
{
	return maxResults_;
}

