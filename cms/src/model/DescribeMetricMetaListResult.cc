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

#include <alibabacloud/cms/model/DescribeMetricMetaListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMetricMetaListResult::DescribeMetricMetaListResult() :
	ServiceResult()
{}

DescribeMetricMetaListResult::DescribeMetricMetaListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetricMetaListResult::~DescribeMetricMetaListResult()
{}

void DescribeMetricMetaListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["MetricName"].isNull())
			resourcesObject.metricName = valueResourcesResource["MetricName"].asString();
		if(!valueResourcesResource["Description"].isNull())
			resourcesObject.description = valueResourcesResource["Description"].asString();
		if(!valueResourcesResource["Labels"].isNull())
			resourcesObject.labels = valueResourcesResource["Labels"].asString();
		if(!valueResourcesResource["Unit"].isNull())
			resourcesObject.unit = valueResourcesResource["Unit"].asString();
		if(!valueResourcesResource["Dimensions"].isNull())
			resourcesObject.dimensions = valueResourcesResource["Dimensions"].asString();
		if(!valueResourcesResource["Namespace"].isNull())
			resourcesObject._namespace = valueResourcesResource["Namespace"].asString();
		if(!valueResourcesResource["Periods"].isNull())
			resourcesObject.periods = valueResourcesResource["Periods"].asString();
		if(!valueResourcesResource["Statistics"].isNull())
			resourcesObject.statistics = valueResourcesResource["Statistics"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMetricMetaListResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeMetricMetaListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeMetricMetaListResult::Resource> DescribeMetricMetaListResult::getResources()const
{
	return resources_;
}

std::string DescribeMetricMetaListResult::getCode()const
{
	return code_;
}

bool DescribeMetricMetaListResult::getSuccess()const
{
	return success_;
}

