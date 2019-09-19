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

#include <alibabacloud/foas/model/GetInstanceMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetInstanceMetricResult::GetInstanceMetricResult() :
	ServiceResult()
{}

GetInstanceMetricResult::GetInstanceMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceMetricResult::~GetInstanceMetricResult()
{}

void GetInstanceMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetricsNode = value["Metrics"]["Metric"];
	for (auto valueMetricsMetric : allMetricsNode)
	{
		Metric metricsObject;
		if(!valueMetricsMetric["MetricName"].isNull())
			metricsObject.metricName = valueMetricsMetric["MetricName"].asString();
		if(!valueMetricsMetric["Dps"].isNull())
			metricsObject.dps = valueMetricsMetric["Dps"].asString();
		if(!valueMetricsMetric["Summary"].isNull())
			metricsObject.summary = std::stof(valueMetricsMetric["Summary"].asString());
		if(!valueMetricsMetric["Tags"].isNull())
			metricsObject.tags = valueMetricsMetric["Tags"].asString();
		metrics_.push_back(metricsObject);
	}

}

std::vector<GetInstanceMetricResult::Metric> GetInstanceMetricResult::getMetrics()const
{
	return metrics_;
}

