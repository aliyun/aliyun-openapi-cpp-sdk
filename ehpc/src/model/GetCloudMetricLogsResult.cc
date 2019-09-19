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

#include <alibabacloud/ehpc/model/GetCloudMetricLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetCloudMetricLogsResult::GetCloudMetricLogsResult() :
	ServiceResult()
{}

GetCloudMetricLogsResult::GetCloudMetricLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCloudMetricLogsResult::~GetCloudMetricLogsResult()
{}

void GetCloudMetricLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetricLogsNode = value["MetricLogs"]["MetricLog"];
	for (auto valueMetricLogsMetricLog : allMetricLogsNode)
	{
		MetricLog metricLogsObject;
		if(!valueMetricLogsMetricLog["Time"].isNull())
			metricLogsObject.time = std::stoi(valueMetricLogsMetricLog["Time"].asString());
		if(!valueMetricLogsMetricLog["InstanceId"].isNull())
			metricLogsObject.instanceId = valueMetricLogsMetricLog["InstanceId"].asString();
		if(!valueMetricLogsMetricLog["Hostname"].isNull())
			metricLogsObject.hostname = valueMetricLogsMetricLog["Hostname"].asString();
		if(!valueMetricLogsMetricLog["NetworkInterface"].isNull())
			metricLogsObject.networkInterface = valueMetricLogsMetricLog["NetworkInterface"].asString();
		if(!valueMetricLogsMetricLog["DiskDevice"].isNull())
			metricLogsObject.diskDevice = valueMetricLogsMetricLog["DiskDevice"].asString();
		if(!valueMetricLogsMetricLog["MetricData"].isNull())
			metricLogsObject.metricData = valueMetricLogsMetricLog["MetricData"].asString();
		metricLogs_.push_back(metricLogsObject);
	}

}

std::vector<GetCloudMetricLogsResult::MetricLog> GetCloudMetricLogsResult::getMetricLogs()const
{
	return metricLogs_;
}

