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

#include <alibabacloud/ivision/model/PredictImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

PredictImageResult::PredictImageResult() :
	ServiceResult()
{}

PredictImageResult::PredictImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PredictImageResult::~PredictImageResult()
{}

void PredictImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPredictDatasNode = value["PredictDatas"]["PredictData"];
	for (auto valuePredictDatasPredictData : allPredictDatasNode)
	{
		PredictData predictDatasObject;
		if(!valuePredictDatasPredictData["ProjectId"].isNull())
			predictDatasObject.projectId = valuePredictDatasPredictData["ProjectId"].asString();
		if(!valuePredictDatasPredictData["IterationId"].isNull())
			predictDatasObject.iterationId = valuePredictDatasPredictData["IterationId"].asString();
		if(!valuePredictDatasPredictData["ModelId"].isNull())
			predictDatasObject.modelId = valuePredictDatasPredictData["ModelId"].asString();
		if(!valuePredictDatasPredictData["DataId"].isNull())
			predictDatasObject.dataId = valuePredictDatasPredictData["DataId"].asString();
		if(!valuePredictDatasPredictData["DataName"].isNull())
			predictDatasObject.dataName = valuePredictDatasPredictData["DataName"].asString();
		if(!valuePredictDatasPredictData["DataUrl"].isNull())
			predictDatasObject.dataUrl = valuePredictDatasPredictData["DataUrl"].asString();
		if(!valuePredictDatasPredictData["CreationTime"].isNull())
			predictDatasObject.creationTime = valuePredictDatasPredictData["CreationTime"].asString();
		if(!valuePredictDatasPredictData["Status"].isNull())
			predictDatasObject.status = valuePredictDatasPredictData["Status"].asString();
		if(!valuePredictDatasPredictData["ErrorCode"].isNull())
			predictDatasObject.errorCode = valuePredictDatasPredictData["ErrorCode"].asString();
		if(!valuePredictDatasPredictData["ErrorMessage"].isNull())
			predictDatasObject.errorMessage = valuePredictDatasPredictData["ErrorMessage"].asString();
		auto allPredictionResultsNode = allPredictDatasNode["PredictionResults"]["PredictionResult"];
		for (auto allPredictDatasNodePredictionResultsPredictionResult : allPredictionResultsNode)
		{
			PredictData::PredictionResult predictionResultsObject;
			if(!allPredictDatasNodePredictionResultsPredictionResult["TagId"].isNull())
				predictionResultsObject.tagId = allPredictDatasNodePredictionResultsPredictionResult["TagId"].asString();
			if(!allPredictDatasNodePredictionResultsPredictionResult["TagName"].isNull())
				predictionResultsObject.tagName = allPredictDatasNodePredictionResultsPredictionResult["TagName"].asString();
			if(!allPredictDatasNodePredictionResultsPredictionResult["Probability"].isNull())
				predictionResultsObject.probability = allPredictDatasNodePredictionResultsPredictionResult["Probability"].asString();
			if(!allPredictDatasNodePredictionResultsPredictionResult["Overlap"].isNull())
				predictionResultsObject.overlap = allPredictDatasNodePredictionResultsPredictionResult["Overlap"].asString();
			if(!allPredictDatasNodePredictionResultsPredictionResult["RegionType"].isNull())
				predictionResultsObject.regionType = allPredictDatasNodePredictionResultsPredictionResult["RegionType"].asString();
			if(!allPredictDatasNodePredictionResultsPredictionResult["Properties"].isNull())
				predictionResultsObject.properties = allPredictDatasNodePredictionResultsPredictionResult["Properties"].asString();
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

}

std::vector<PredictImageResult::PredictData> PredictImageResult::getPredictDatas()const
{
	return predictDatas_;
}

