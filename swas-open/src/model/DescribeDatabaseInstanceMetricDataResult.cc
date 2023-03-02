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

#include <alibabacloud/swas-open/model/DescribeDatabaseInstanceMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeDatabaseInstanceMetricDataResult::DescribeDatabaseInstanceMetricDataResult() :
	ServiceResult()
{}

DescribeDatabaseInstanceMetricDataResult::DescribeDatabaseInstanceMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatabaseInstanceMetricDataResult::~DescribeDatabaseInstanceMetricDataResult()
{}

void DescribeDatabaseInstanceMetricDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["MetricName"].isNull())
		metricName_ = value["MetricName"].asString();
	if(!value["Unit"].isNull())
		unit_ = value["Unit"].asString();
	if(!value["DataFormat"].isNull())
		dataFormat_ = value["DataFormat"].asString();
	if(!value["MetricData"].isNull())
		metricData_ = value["MetricData"].asString();

}

std::string DescribeDatabaseInstanceMetricDataResult::getMetricName()const
{
	return metricName_;
}

std::string DescribeDatabaseInstanceMetricDataResult::getDataFormat()const
{
	return dataFormat_;
}

std::string DescribeDatabaseInstanceMetricDataResult::getUnit()const
{
	return unit_;
}

std::string DescribeDatabaseInstanceMetricDataResult::getMetricData()const
{
	return metricData_;
}

