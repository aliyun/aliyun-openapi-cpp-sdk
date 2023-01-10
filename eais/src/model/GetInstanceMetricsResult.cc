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

#include <alibabacloud/eais/model/GetInstanceMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eais;
using namespace AlibabaCloud::Eais::Model;

GetInstanceMetricsResult::GetInstanceMetricsResult() :
	ServiceResult()
{}

GetInstanceMetricsResult::GetInstanceMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceMetricsResult::~GetInstanceMetricsResult()
{}

void GetInstanceMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPodMetricsNode = value["PodMetrics"]["PodMetric"];
	for (auto valuePodMetricsPodMetric : allPodMetricsNode)
	{
		PodMetric podMetricsObject;
		if(!valuePodMetricsPodMetric["PodId"].isNull())
			podMetricsObject.podId = valuePodMetricsPodMetric["PodId"].asString();
		auto allMetricsNode = valuePodMetricsPodMetric["Metrics"]["Metric"];
		for (auto valuePodMetricsPodMetricMetricsMetric : allMetricsNode)
		{
			PodMetric::Metric metricsObject;
			if(!valuePodMetricsPodMetricMetricsMetric["Time"].isNull())
				metricsObject.time = valuePodMetricsPodMetricMetricsMetric["Time"].asString();
			if(!valuePodMetricsPodMetricMetricsMetric["Value"].isNull())
				metricsObject.value = valuePodMetricsPodMetricMetricsMetric["Value"].asString();
			podMetricsObject.metrics.push_back(metricsObject);
		}
		podMetrics_.push_back(podMetricsObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string GetInstanceMetricsResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<GetInstanceMetricsResult::PodMetric> GetInstanceMetricsResult::getPodMetrics()const
{
	return podMetrics_;
}

