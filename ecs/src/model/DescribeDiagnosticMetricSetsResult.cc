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

#include <alibabacloud/ecs/model/DescribeDiagnosticMetricSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDiagnosticMetricSetsResult::DescribeDiagnosticMetricSetsResult() :
	ServiceResult()
{}

DescribeDiagnosticMetricSetsResult::DescribeDiagnosticMetricSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosticMetricSetsResult::~DescribeDiagnosticMetricSetsResult()
{}

void DescribeDiagnosticMetricSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetricSetsNode = value["MetricSets"]["MetricSet"];
	for (auto valueMetricSetsMetricSet : allMetricSetsNode)
	{
		MetricSet metricSetsObject;
		if(!valueMetricSetsMetricSet["MetricSetId"].isNull())
			metricSetsObject.metricSetId = valueMetricSetsMetricSet["MetricSetId"].asString();
		if(!valueMetricSetsMetricSet["MetricSetName"].isNull())
			metricSetsObject.metricSetName = valueMetricSetsMetricSet["MetricSetName"].asString();
		if(!valueMetricSetsMetricSet["Description"].isNull())
			metricSetsObject.description = valueMetricSetsMetricSet["Description"].asString();
		if(!valueMetricSetsMetricSet["Type"].isNull())
			metricSetsObject.type = valueMetricSetsMetricSet["Type"].asString();
		if(!valueMetricSetsMetricSet["ResourceType"].isNull())
			metricSetsObject.resourceType = valueMetricSetsMetricSet["ResourceType"].asString();
		auto allMetricIds = value["MetricIds"]["MetricId"];
		for (auto value : allMetricIds)
			metricSetsObject.metricIds.push_back(value.asString());
		metricSets_.push_back(metricSetsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeDiagnosticMetricSetsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeDiagnosticMetricSetsResult::MetricSet> DescribeDiagnosticMetricSetsResult::getMetricSets()const
{
	return metricSets_;
}

