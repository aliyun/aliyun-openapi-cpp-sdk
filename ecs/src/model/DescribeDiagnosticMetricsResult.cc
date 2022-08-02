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

#include <alibabacloud/ecs/model/DescribeDiagnosticMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDiagnosticMetricsResult::DescribeDiagnosticMetricsResult() :
	ServiceResult()
{}

DescribeDiagnosticMetricsResult::DescribeDiagnosticMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosticMetricsResult::~DescribeDiagnosticMetricsResult()
{}

void DescribeDiagnosticMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetricsNode = value["Metrics"]["Metric"];
	for (auto valueMetricsMetric : allMetricsNode)
	{
		Metric metricsObject;
		if(!valueMetricsMetric["MetricId"].isNull())
			metricsObject.metricId = valueMetricsMetric["MetricId"].asString();
		if(!valueMetricsMetric["MetricName"].isNull())
			metricsObject.metricName = valueMetricsMetric["MetricName"].asString();
		if(!valueMetricsMetric["MetricCategory"].isNull())
			metricsObject.metricCategory = valueMetricsMetric["MetricCategory"].asString();
		if(!valueMetricsMetric["Description"].isNull())
			metricsObject.description = valueMetricsMetric["Description"].asString();
		if(!valueMetricsMetric["ResourceType"].isNull())
			metricsObject.resourceType = valueMetricsMetric["ResourceType"].asString();
		if(!valueMetricsMetric["GuestMetric"].isNull())
			metricsObject.guestMetric = valueMetricsMetric["GuestMetric"].asString() == "true";
		if(!valueMetricsMetric["SupportedOperatingSystem"].isNull())
			metricsObject.supportedOperatingSystem = valueMetricsMetric["SupportedOperatingSystem"].asString();
		metrics_.push_back(metricsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribeDiagnosticMetricsResult::Metric> DescribeDiagnosticMetricsResult::getMetrics()const
{
	return metrics_;
}

std::string DescribeDiagnosticMetricsResult::getNextToken()const
{
	return nextToken_;
}

