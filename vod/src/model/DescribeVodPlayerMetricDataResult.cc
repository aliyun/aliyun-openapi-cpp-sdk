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

#include <alibabacloud/vod/model/DescribeVodPlayerMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodPlayerMetricDataResult::DescribeVodPlayerMetricDataResult() :
	ServiceResult()
{}

DescribeVodPlayerMetricDataResult::DescribeVodPlayerMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodPlayerMetricDataResult::~DescribeVodPlayerMetricDataResult()
{}

void DescribeVodPlayerMetricDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["datds"];
	for (auto valueDataListdatds : allDataListNode)
	{
		Datds dataListObject;
		if(!valueDataListdatds["TimeStamp"].isNull())
			dataListObject.timeStamp = valueDataListdatds["TimeStamp"].asString();
		if(!valueDataListdatds["Dimension"].isNull())
			dataListObject.dimension = valueDataListdatds["Dimension"].asString();
		if(!valueDataListdatds["Uv"].isNull())
			dataListObject.uv = valueDataListdatds["Uv"].asString();
		if(!valueDataListdatds["Vv"].isNull())
			dataListObject.vv = valueDataListdatds["Vv"].asString();
		if(!valueDataListdatds["RealVv"].isNull())
			dataListObject.realVv = valueDataListdatds["RealVv"].asString();
		if(!valueDataListdatds["FirstFrame"].isNull())
			dataListObject.firstFrame = valueDataListdatds["FirstFrame"].asString();
		if(!valueDataListdatds["SecondPlayRate"].isNull())
			dataListObject.secondPlayRate = valueDataListdatds["SecondPlayRate"].asString();
		if(!valueDataListdatds["SlowPlayRate"].isNull())
			dataListObject.slowPlayRate = valueDataListdatds["SlowPlayRate"].asString();
		if(!valueDataListdatds["StuckCountRate"].isNull())
			dataListObject.stuckCountRate = valueDataListdatds["StuckCountRate"].asString();
		if(!valueDataListdatds["SeekDuration"].isNull())
			dataListObject.seekDuration = valueDataListdatds["SeekDuration"].asString();
		if(!valueDataListdatds["StuckDuration100s"].isNull())
			dataListObject.stuckDuration100s = valueDataListdatds["StuckDuration100s"].asString();
		if(!valueDataListdatds["PlayFailRate"].isNull())
			dataListObject.playFailRate = valueDataListdatds["PlayFailRate"].asString();
		if(!valueDataListdatds["SeedFailRate"].isNull())
			dataListObject.seedFailRate = valueDataListdatds["SeedFailRate"].asString();
		if(!valueDataListdatds["AvgPlayBitrate"].isNull())
			dataListObject.avgPlayBitrate = valueDataListdatds["AvgPlayBitrate"].asString();
		if(!valueDataListdatds["AvgStartBitrate"].isNull())
			dataListObject.avgStartBitrate = valueDataListdatds["AvgStartBitrate"].asString();
		if(!valueDataListdatds["ErrorCount100s"].isNull())
			dataListObject.errorCount100s = valueDataListdatds["ErrorCount100s"].asString();
		if(!valueDataListdatds["AvgPerVv"].isNull())
			dataListObject.avgPerVv = valueDataListdatds["AvgPerVv"].asString();
		if(!valueDataListdatds["AvgVideoDuration"].isNull())
			dataListObject.avgVideoDuration = valueDataListdatds["AvgVideoDuration"].asString();
		if(!valueDataListdatds["AvgPerPlayDuration"].isNull())
			dataListObject.avgPerPlayDuration = valueDataListdatds["AvgPerPlayDuration"].asString();
		if(!valueDataListdatds["AvgPerCompletionVv"].isNull())
			dataListObject.avgPerCompletionVv = valueDataListdatds["AvgPerCompletionVv"].asString();
		if(!valueDataListdatds["CompletionVv"].isNull())
			dataListObject.completionVv = valueDataListdatds["CompletionVv"].asString();
		if(!valueDataListdatds["CompletionRate"].isNull())
			dataListObject.completionRate = valueDataListdatds["CompletionRate"].asString();
		if(!valueDataListdatds["AvgPlayDuration"].isNull())
			dataListObject.avgPlayDuration = valueDataListdatds["AvgPlayDuration"].asString();
		if(!valueDataListdatds["JumpRate5s"].isNull())
			dataListObject.jumpRate5s = valueDataListdatds["JumpRate5s"].asString();
		if(!valueDataListdatds["TotalPlayDuration"].isNull())
			dataListObject.totalPlayDuration = valueDataListdatds["TotalPlayDuration"].asString();
		if(!valueDataListdatds["StuckCount100s"].isNull())
			dataListObject.stuckCount100s = valueDataListdatds["StuckCount100s"].asString();
		dataList_.push_back(dataListObject);
	}
	auto extendNode = value["Extend"];
	if(!extendNode["ActualStartTime"].isNull())
		extend_.actualStartTime = extendNode["ActualStartTime"].asString();
	if(!extendNode["ActualEndTime"].isNull())
		extend_.actualEndTime = extendNode["ActualEndTime"].asString();
	if(!extendNode["IntervalSeconds"].isNull())
		extend_.intervalSeconds = std::stol(extendNode["IntervalSeconds"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCnt"].isNull())
		totalCnt_ = std::stol(value["TotalCnt"].asString());

}

std::vector<DescribeVodPlayerMetricDataResult::Datds> DescribeVodPlayerMetricDataResult::getDataList()const
{
	return dataList_;
}

long DescribeVodPlayerMetricDataResult::getPageSize()const
{
	return pageSize_;
}

long DescribeVodPlayerMetricDataResult::getTotalCnt()const
{
	return totalCnt_;
}

DescribeVodPlayerMetricDataResult::Extend DescribeVodPlayerMetricDataResult::getExtend()const
{
	return extend_;
}

long DescribeVodPlayerMetricDataResult::getPageNumber()const
{
	return pageNumber_;
}

