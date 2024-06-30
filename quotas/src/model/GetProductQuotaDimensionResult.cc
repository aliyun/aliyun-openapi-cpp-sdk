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

#include <alibabacloud/quotas/model/GetProductQuotaDimensionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

GetProductQuotaDimensionResult::GetProductQuotaDimensionResult() :
	ServiceResult()
{}

GetProductQuotaDimensionResult::GetProductQuotaDimensionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProductQuotaDimensionResult::~GetProductQuotaDimensionResult()
{}

void GetProductQuotaDimensionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quotaDimensionNode = value["QuotaDimension"];
	if(!quotaDimensionNode["DimensionKey"].isNull())
		quotaDimension_.dimensionKey = quotaDimensionNode["DimensionKey"].asString();
	if(!quotaDimensionNode["Name"].isNull())
		quotaDimension_.name = quotaDimensionNode["Name"].asString();
	auto allDimensionValueDetailNode = quotaDimensionNode["DimensionValueDetail"]["DimensionValueDetailItem"];
	for (auto quotaDimensionNodeDimensionValueDetailDimensionValueDetailItem : allDimensionValueDetailNode)
	{
		QuotaDimension::DimensionValueDetailItem dimensionValueDetailItemObject;
		if(!quotaDimensionNodeDimensionValueDetailDimensionValueDetailItem["Name"].isNull())
			dimensionValueDetailItemObject.name = quotaDimensionNodeDimensionValueDetailDimensionValueDetailItem["Name"].asString();
		if(!quotaDimensionNodeDimensionValueDetailDimensionValueDetailItem["Value"].isNull())
			dimensionValueDetailItemObject.value = quotaDimensionNodeDimensionValueDetailDimensionValueDetailItem["Value"].asString();
		quotaDimension_.dimensionValueDetail.push_back(dimensionValueDetailItemObject);
	}
		auto allDependentDimensions = quotaDimensionNode["DependentDimensions"]["DependentDimensions"];
		for (auto value : allDependentDimensions)
			quotaDimension_.dependentDimensions.push_back(value.asString());
		auto allDimensionValues = quotaDimensionNode["DimensionValues"]["DimensionValues"];
		for (auto value : allDimensionValues)
			quotaDimension_.dimensionValues.push_back(value.asString());

}

GetProductQuotaDimensionResult::QuotaDimension GetProductQuotaDimensionResult::getQuotaDimension()const
{
	return quotaDimension_;
}

