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

#include <alibabacloud/quickbi-public/model/QueryWorksBloodRelationshipResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryWorksBloodRelationshipResult::QueryWorksBloodRelationshipResult() :
	ServiceResult()
{}

QueryWorksBloodRelationshipResult::QueryWorksBloodRelationshipResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryWorksBloodRelationshipResult::~QueryWorksBloodRelationshipResult()
{}

void QueryWorksBloodRelationshipResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Item"];
	for (auto valueResultItem : allResultNode)
	{
		Item resultObject;
		if(!valueResultItem["ComponentId"].isNull())
			resultObject.componentId = valueResultItem["ComponentId"].asString();
		if(!valueResultItem["ComponentName"].isNull())
			resultObject.componentName = valueResultItem["ComponentName"].asString();
		if(!valueResultItem["ComponentType"].isNull())
			resultObject.componentType = std::stoi(valueResultItem["ComponentType"].asString());
		if(!valueResultItem["ComponentTypeName"].isNull())
			resultObject.componentTypeName = valueResultItem["ComponentTypeName"].asString();
		if(!valueResultItem["ComponentTypeCnName"].isNull())
			resultObject.componentTypeCnName = valueResultItem["ComponentTypeCnName"].asString();
		if(!valueResultItem["DatasetId"].isNull())
			resultObject.datasetId = valueResultItem["DatasetId"].asString();
		auto allQueryParamsNode = valueResultItem["QueryParams"]["QueryParam"];
		for (auto valueResultItemQueryParamsQueryParam : allQueryParamsNode)
		{
			Item::QueryParam queryParamsObject;
			if(!valueResultItemQueryParamsQueryParam["AreaId"].isNull())
				queryParamsObject.areaId = valueResultItemQueryParamsQueryParam["AreaId"].asString();
			if(!valueResultItemQueryParamsQueryParam["AreaName"].isNull())
				queryParamsObject.areaName = valueResultItemQueryParamsQueryParam["AreaName"].asString();
			if(!valueResultItemQueryParamsQueryParam["Caption"].isNull())
				queryParamsObject.caption = valueResultItemQueryParamsQueryParam["Caption"].asString();
			if(!valueResultItemQueryParamsQueryParam["DataType"].isNull())
				queryParamsObject.dataType = valueResultItemQueryParamsQueryParam["DataType"].asString();
			if(!valueResultItemQueryParamsQueryParam["IsMeasure"].isNull())
				queryParamsObject.isMeasure = valueResultItemQueryParamsQueryParam["IsMeasure"].asString() == "true";
			if(!valueResultItemQueryParamsQueryParam["PathId"].isNull())
				queryParamsObject.pathId = valueResultItemQueryParamsQueryParam["PathId"].asString();
			if(!valueResultItemQueryParamsQueryParam["Uid"].isNull())
				queryParamsObject.uid = valueResultItemQueryParamsQueryParam["Uid"].asString();
			if(!valueResultItemQueryParamsQueryParam["Expression"].isNull())
				queryParamsObject.expression = valueResultItemQueryParamsQueryParam["Expression"].asString();
			resultObject.queryParams.push_back(queryParamsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryWorksBloodRelationshipResult::getSuccess()const
{
	return success_;
}

std::vector<QueryWorksBloodRelationshipResult::Item> QueryWorksBloodRelationshipResult::getResult()const
{
	return result_;
}

