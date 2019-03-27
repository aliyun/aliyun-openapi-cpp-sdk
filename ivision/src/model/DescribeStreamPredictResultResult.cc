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

#include <alibabacloud/ivision/model/DescribeStreamPredictResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeStreamPredictResultResult::DescribeStreamPredictResultResult() :
	ServiceResult()
{}

DescribeStreamPredictResultResult::DescribeStreamPredictResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStreamPredictResultResult::~DescribeStreamPredictResultResult()
{}

void DescribeStreamPredictResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allStreamPredictDatas = value["StreamPredictDatas"]["StreamPredictData"];
	for (auto value : allStreamPredictDatas)
	{
		StreamPredictData streamPredictDatasObject;
		if(!value["PredictId"].isNull())
			streamPredictDatasObject.predictId = value["PredictId"].asString();
		if(!value["ModelId"].isNull())
			streamPredictDatasObject.modelId = value["ModelId"].asString();
		if(!value["DataUrl"].isNull())
			streamPredictDatasObject.dataUrl = value["DataUrl"].asString();
		if(!value["StreamTimestamp"].isNull())
			streamPredictDatasObject.streamTimestamp = value["StreamTimestamp"].asString();
		if(!value["PredictTime"].isNull())
			streamPredictDatasObject.predictTime = value["PredictTime"].asString();
		if(!value["Status"].isNull())
			streamPredictDatasObject.status = value["Status"].asString();
		auto allResultStatistics = value["ResultStatistics"]["ResultStatisticsItem"];
		for (auto value : allResultStatistics)
		{
			StreamPredictData::ResultStatisticsItem resultStatisticsObject;
			if(!value["TagId"].isNull())
				resultStatisticsObject.tagId = value["TagId"].asString();
			if(!value["TagName"].isNull())
				resultStatisticsObject.tagName = value["TagName"].asString();
			if(!value["Count"].isNull())
				resultStatisticsObject.count = std::stol(value["Count"].asString());
			streamPredictDatasObject.resultStatistics.push_back(resultStatisticsObject);
		}
		auto allPredictionResults = value["PredictionResults"]["PredictionResult"];
		for (auto value : allPredictionResults)
		{
			StreamPredictData::PredictionResult predictionResultsObject;
			if(!value["TagId"].isNull())
				predictionResultsObject.tagId = value["TagId"].asString();
			if(!value["TagName"].isNull())
				predictionResultsObject.tagName = value["TagName"].asString();
			if(!value["Probability"].isNull())
				predictionResultsObject.probability = value["Probability"].asString();
			if(!value["Overlap"].isNull())
				predictionResultsObject.overlap = value["Overlap"].asString();
			if(!value["RegionType"].isNull())
				predictionResultsObject.regionType = value["RegionType"].asString();
			auto regionNode = value["Region"];
			if(!regionNode["Left"].isNull())
				predictionResultsObject.region.left = regionNode["Left"].asString();
			if(!regionNode["Top"].isNull())
				predictionResultsObject.region.top = regionNode["Top"].asString();
			if(!regionNode["Width"].isNull())
				predictionResultsObject.region.width = regionNode["Width"].asString();
			if(!regionNode["Height"].isNull())
				predictionResultsObject.region.height = regionNode["Height"].asString();
			auto propertiesNode = value["Properties"];
			if(!propertiesNode["WithGloves"].isNull())
				predictionResultsObject.properties.withGloves = propertiesNode["WithGloves"].asString();
			if(!propertiesNode["WithGlovesProbability"].isNull())
				predictionResultsObject.properties.withGlovesProbability = propertiesNode["WithGlovesProbability"].asString();
			streamPredictDatasObject.predictionResults.push_back(predictionResultsObject);
		}
		streamPredictDatas_.push_back(streamPredictDatasObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<DescribeStreamPredictResultResult::StreamPredictData> DescribeStreamPredictResultResult::getStreamPredictDatas()const
{
	return streamPredictDatas_;
}

long DescribeStreamPredictResultResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeStreamPredictResultResult::getPageSize()const
{
	return pageSize_;
}

long DescribeStreamPredictResultResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeStreamPredictResultResult::getNextPageToken()const
{
	return nextPageToken_;
}

