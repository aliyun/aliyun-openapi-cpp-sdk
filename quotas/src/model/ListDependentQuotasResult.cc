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

#include <alibabacloud/quotas/model/ListDependentQuotasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListDependentQuotasResult::ListDependentQuotasResult() :
	ServiceResult()
{}

ListDependentQuotasResult::ListDependentQuotasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDependentQuotasResult::~ListDependentQuotasResult()
{}

void ListDependentQuotasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotasNode = value["Quotas"]["QuotasItem"];
	for (auto valueQuotasQuotasItem : allQuotasNode)
	{
		QuotasItem quotasObject;
		if(!valueQuotasQuotasItem["QuotaActionCode"].isNull())
			quotasObject.quotaActionCode = valueQuotasQuotasItem["QuotaActionCode"].asString();
		if(!valueQuotasQuotasItem["ProductCode"].isNull())
			quotasObject.productCode = valueQuotasQuotasItem["ProductCode"].asString();
		if(!valueQuotasQuotasItem["Scale"].isNull())
			quotasObject.scale = std::stof(valueQuotasQuotasItem["Scale"].asString());
		auto allDimensionsNode = valueQuotasQuotasItem["Dimensions"]["DimensionsItem"];
		for (auto valueQuotasQuotasItemDimensionsDimensionsItem : allDimensionsNode)
		{
			QuotasItem::DimensionsItem dimensionsObject;
			if(!valueQuotasQuotasItemDimensionsDimensionsItem["DimensionKey"].isNull())
				dimensionsObject.dimensionKey = valueQuotasQuotasItemDimensionsDimensionsItem["DimensionKey"].asString();
			auto allDependentDimension = value["DependentDimension"]["DependentDimension"];
			for (auto value : allDependentDimension)
				dimensionsObject.dependentDimension.push_back(value.asString());
			auto allDimensionValues = value["DimensionValues"]["DimensionValues"];
			for (auto value : allDimensionValues)
				dimensionsObject.dimensionValues.push_back(value.asString());
			quotasObject.dimensions.push_back(dimensionsObject);
		}
		quotas_.push_back(quotasObject);
	}

}

std::vector<ListDependentQuotasResult::QuotasItem> ListDependentQuotasResult::getQuotas()const
{
	return quotas_;
}

