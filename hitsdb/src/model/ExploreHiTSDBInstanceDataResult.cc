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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

ExploreHiTSDBInstanceDataResult::ExploreHiTSDBInstanceDataResult() :
	ServiceResult()
{}

ExploreHiTSDBInstanceDataResult::ExploreHiTSDBInstanceDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExploreHiTSDBInstanceDataResult::~ExploreHiTSDBInstanceDataResult()
{}

void ExploreHiTSDBInstanceDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTimeLinesNode = value["TimeLines"]["TimeLine"];
	for (auto valueTimeLinesTimeLine : allTimeLinesNode)
	{
		TimeLine timeLinesObject;
		auto allTagsNode = valueTimeLinesTimeLine["Tags"]["Tag"];
		for (auto valueTimeLinesTimeLineTagsTag : allTagsNode)
		{
			TimeLine::Tag tagsObject;
			if(!valueTimeLinesTimeLineTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueTimeLinesTimeLineTagsTag["TagKey"].asString();
			if(!valueTimeLinesTimeLineTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueTimeLinesTimeLineTagsTag["TagValue"].asString();
			timeLinesObject.tags.push_back(tagsObject);
		}
		auto allSeriesNode = valueTimeLinesTimeLine["Series"]["Point"];
		for (auto valueTimeLinesTimeLineSeriesPoint : allSeriesNode)
		{
			TimeLine::Point seriesObject;
			if(!valueTimeLinesTimeLineSeriesPoint["Timestamp"].isNull())
				seriesObject.timestamp = valueTimeLinesTimeLineSeriesPoint["Timestamp"].asString();
			if(!valueTimeLinesTimeLineSeriesPoint["Value"].isNull())
				seriesObject.value = std::stof(valueTimeLinesTimeLineSeriesPoint["Value"].asString());
			timeLinesObject.series.push_back(seriesObject);
		}
		timeLines_.push_back(timeLinesObject);
	}
	if(!value["Start"].isNull())
		start_ = value["Start"].asString();
	if(!value["End"].isNull())
		end_ = value["End"].asString();
	if(!value["Metric"].isNull())
		metric_ = value["Metric"].asString();

}

std::vector<ExploreHiTSDBInstanceDataResult::TimeLine> ExploreHiTSDBInstanceDataResult::getTimeLines()const
{
	return timeLines_;
}

std::string ExploreHiTSDBInstanceDataResult::getStart()const
{
	return start_;
}

std::string ExploreHiTSDBInstanceDataResult::getEnd()const
{
	return end_;
}

std::string ExploreHiTSDBInstanceDataResult::getMetric()const
{
	return metric_;
}

