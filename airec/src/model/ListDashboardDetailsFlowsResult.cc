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

#include <alibabacloud/airec/model/ListDashboardDetailsFlowsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDashboardDetailsFlowsResult::ListDashboardDetailsFlowsResult() :
	ServiceResult()
{}

ListDashboardDetailsFlowsResult::ListDashboardDetailsFlowsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDashboardDetailsFlowsResult::~ListDashboardDetailsFlowsResult()
{}

void ListDashboardDetailsFlowsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["MetricType"].isNull())
		result_.metricType = resultNode["MetricType"].asString();
	auto allMetricDataNode = resultNode["MetricData"]["MetricDataItem"];
	for (auto resultNodeMetricDataMetricDataItem : allMetricDataNode)
	{
		Result::MetricDataItem metricDataItemObject;
		if(!resultNodeMetricDataMetricDataItem["TraceId"].isNull())
			metricDataItemObject.traceId = resultNodeMetricDataMetricDataItem["TraceId"].asString();
		if(!resultNodeMetricDataMetricDataItem["SceneId"].isNull())
			metricDataItemObject.sceneId = resultNodeMetricDataMetricDataItem["SceneId"].asString();
		if(!resultNodeMetricDataMetricDataItem["MetricRes"].isNull())
			metricDataItemObject.metricRes = resultNodeMetricDataMetricDataItem["MetricRes"].asString();
		result_.metricData.push_back(metricDataItemObject);
	}

}

ListDashboardDetailsFlowsResult::Result ListDashboardDetailsFlowsResult::getResult()const
{
	return result_;
}

