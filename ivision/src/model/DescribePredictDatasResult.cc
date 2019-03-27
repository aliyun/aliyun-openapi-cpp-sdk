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

#include <alibabacloud/ivision/model/DescribePredictDatasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribePredictDatasResult::DescribePredictDatasResult() :
	ServiceResult()
{}

DescribePredictDatasResult::DescribePredictDatasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePredictDatasResult::~DescribePredictDatasResult()
{}

void DescribePredictDatasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPredictDatas = value["PredictDatas"]["PredictData"];
	for (auto value : allPredictDatas)
	{
		PredictData predictDatasObject;
		if(!value["ProjectId"].isNull())
			predictDatasObject.projectId = value["ProjectId"].asString();
		if(!value["IterationId"].isNull())
			predictDatasObject.iterationId = value["IterationId"].asString();
		if(!value["DataId"].isNull())
			predictDatasObject.dataId = value["DataId"].asString();
		if(!value["DataName"].isNull())
			predictDatasObject.dataName = value["DataName"].asString();
		if(!value["DataUrl"].isNull())
			predictDatasObject.dataUrl = value["DataUrl"].asString();
		if(!value["CreationTime"].isNull())
			predictDatasObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			predictDatasObject.status = value["Status"].asString();
		if(!value["ErrorCode"].isNull())
			predictDatasObject.errorCode = value["ErrorCode"].asString();
		if(!value["ErrorMessage"].isNull())
			predictDatasObject.errorMessage = value["ErrorMessage"].asString();
		auto allPredictionResults = value["PredictionResults"]["PredictionResult"];
		for (auto value : allPredictionResults)
		{
			PredictData::PredictionResult predictionResultsObject;
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
			if(!value["Properties"].isNull())
				predictionResultsObject.properties = value["Properties"].asString();
			auto regionNode = value["Region"];
			if(!regionNode["Left"].isNull())
				predictionResultsObject.region.left = regionNode["Left"].asString();
			if(!regionNode["Top"].isNull())
				predictionResultsObject.region.top = regionNode["Top"].asString();
			if(!regionNode["Width"].isNull())
				predictionResultsObject.region.width = regionNode["Width"].asString();
			if(!regionNode["Height"].isNull())
				predictionResultsObject.region.height = regionNode["Height"].asString();
			predictDatasObject.predictionResults.push_back(predictionResultsObject);
		}
		predictDatas_.push_back(predictDatasObject);
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

std::vector<DescribePredictDatasResult::PredictData> DescribePredictDatasResult::getPredictDatas()const
{
	return predictDatas_;
}

long DescribePredictDatasResult::getTotalNum()const
{
	return totalNum_;
}

long DescribePredictDatasResult::getPageSize()const
{
	return pageSize_;
}

long DescribePredictDatasResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribePredictDatasResult::getNextPageToken()const
{
	return nextPageToken_;
}

