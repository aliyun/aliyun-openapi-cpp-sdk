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

#include <alibabacloud/eas/model/DescribeServiceCronScalerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeServiceCronScalerResult::DescribeServiceCronScalerResult() :
	ServiceResult()
{}

DescribeServiceCronScalerResult::DescribeServiceCronScalerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServiceCronScalerResult::~DescribeServiceCronScalerResult()
{}

void DescribeServiceCronScalerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScaleJobsNode = value["ScaleJobs"]["ScaleJob"];
	for (auto valueScaleJobsScaleJob : allScaleJobsNode)
	{
		ScaleJob scaleJobsObject;
		if(!valueScaleJobsScaleJob["Schedule"].isNull())
			scaleJobsObject.schedule = valueScaleJobsScaleJob["Schedule"].asString();
		if(!valueScaleJobsScaleJob["TargetSize"].isNull())
			scaleJobsObject.targetSize = std::stoi(valueScaleJobsScaleJob["TargetSize"].asString());
		if(!valueScaleJobsScaleJob["Name"].isNull())
			scaleJobsObject.name = valueScaleJobsScaleJob["Name"].asString();
		if(!valueScaleJobsScaleJob["Message"].isNull())
			scaleJobsObject.message = valueScaleJobsScaleJob["Message"].asString();
		if(!valueScaleJobsScaleJob["State"].isNull())
			scaleJobsObject.state = valueScaleJobsScaleJob["State"].asString();
		if(!valueScaleJobsScaleJob["LastProbeTime"].isNull())
			scaleJobsObject.lastProbeTime = valueScaleJobsScaleJob["LastProbeTime"].asString();
		if(!valueScaleJobsScaleJob["CreateTime"].isNull())
			scaleJobsObject.createTime = valueScaleJobsScaleJob["CreateTime"].asString();
		scaleJobs_.push_back(scaleJobsObject);
	}
	auto allExcludeDates = value["ExcludeDates"]["ExcludeDate"];
	for (const auto &item : allExcludeDates)
		excludeDates_.push_back(item.asString());
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();

}

std::vector<std::string> DescribeServiceCronScalerResult::getExcludeDates()const
{
	return excludeDates_;
}

std::string DescribeServiceCronScalerResult::getServiceName()const
{
	return serviceName_;
}

std::vector<DescribeServiceCronScalerResult::ScaleJob> DescribeServiceCronScalerResult::getScaleJobs()const
{
	return scaleJobs_;
}

