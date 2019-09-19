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

#include <alibabacloud/cms/model/QueryMetricMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryMetricMetaResult::QueryMetricMetaResult() :
	ServiceResult()
{}

QueryMetricMetaResult::QueryMetricMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMetricMetaResult::~QueryMetricMetaResult()
{}

void QueryMetricMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["Project"].isNull())
			resourcesObject.project = valueResourcesResource["Project"].asString();
		if(!valueResourcesResource["Metric"].isNull())
			resourcesObject.metric = valueResourcesResource["Metric"].asString();
		if(!valueResourcesResource["Statistics"].isNull())
			resourcesObject.statistics = valueResourcesResource["Statistics"].asString();
		if(!valueResourcesResource["Unit"].isNull())
			resourcesObject.unit = valueResourcesResource["Unit"].asString();
		if(!valueResourcesResource["Description"].isNull())
			resourcesObject.description = valueResourcesResource["Description"].asString();
		if(!valueResourcesResource["Dimensions"].isNull())
			resourcesObject.dimensions = valueResourcesResource["Dimensions"].asString();
		if(!valueResourcesResource["Periods"].isNull())
			resourcesObject.periods = valueResourcesResource["Periods"].asString();
		if(!valueResourcesResource["Labels"].isNull())
			resourcesObject.labels = valueResourcesResource["Labels"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QueryMetricMetaResult::Resource> QueryMetricMetaResult::getResources()const
{
	return resources_;
}

std::string QueryMetricMetaResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryMetricMetaResult::getErrorMessage()const
{
	return errorMessage_;
}

bool QueryMetricMetaResult::getSuccess()const
{
	return success_;
}

