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

#include <alibabacloud/csas/model/ListPopTrafficStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPopTrafficStatisticsResult::ListPopTrafficStatisticsResult() :
	ServiceResult()
{}

ListPopTrafficStatisticsResult::ListPopTrafficStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPopTrafficStatisticsResult::~ListPopTrafficStatisticsResult()
{}

void ListPopTrafficStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficDataNode = value["TrafficData"]["data"];
	for (auto valueTrafficDatadata : allTrafficDataNode)
	{
		Data trafficDataObject;
		if(!valueTrafficDatadata["MetricName"].isNull())
			trafficDataObject.metricName = valueTrafficDatadata["MetricName"].asString();
		auto allDatapointsNode = valueTrafficDatadata["Datapoints"]["point"];
		for (auto valueTrafficDatadataDatapointspoint : allDatapointsNode)
		{
			Data::Point datapointsObject;
			if(!valueTrafficDatadataDatapointspoint["DateTime"].isNull())
				datapointsObject.dateTime = valueTrafficDatadataDatapointspoint["DateTime"].asString();
			if(!valueTrafficDatadataDatapointspoint["Average"].isNull())
				datapointsObject.average = valueTrafficDatadataDatapointspoint["Average"].asString();
			trafficDataObject.datapoints.push_back(datapointsObject);
		}
		trafficData_.push_back(trafficDataObject);
	}

}

std::vector<ListPopTrafficStatisticsResult::Data> ListPopTrafficStatisticsResult::getTrafficData()const
{
	return trafficData_;
}

