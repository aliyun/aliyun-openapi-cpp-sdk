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

#include <alibabacloud/ivision/model/CreateTrainDatasFromPredictionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreateTrainDatasFromPredictionResult::CreateTrainDatasFromPredictionResult() :
	ServiceResult()
{}

CreateTrainDatasFromPredictionResult::CreateTrainDatasFromPredictionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTrainDatasFromPredictionResult::~CreateTrainDatasFromPredictionResult()
{}

void CreateTrainDatasFromPredictionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrainDatasNode = value["TrainDatas"]["TrainData"];
	for (auto valueTrainDatasTrainData : allTrainDatasNode)
	{
		TrainData trainDatasObject;
		if(!valueTrainDatasTrainData["ProjectId"].isNull())
			trainDatasObject.projectId = valueTrainDatasTrainData["ProjectId"].asString();
		if(!valueTrainDatasTrainData["IterationId"].isNull())
			trainDatasObject.iterationId = valueTrainDatasTrainData["IterationId"].asString();
		if(!valueTrainDatasTrainData["DataId"].isNull())
			trainDatasObject.dataId = valueTrainDatasTrainData["DataId"].asString();
		if(!valueTrainDatasTrainData["DataName"].isNull())
			trainDatasObject.dataName = valueTrainDatasTrainData["DataName"].asString();
		if(!valueTrainDatasTrainData["DataUrl"].isNull())
			trainDatasObject.dataUrl = valueTrainDatasTrainData["DataUrl"].asString();
		if(!valueTrainDatasTrainData["CreationTime"].isNull())
			trainDatasObject.creationTime = valueTrainDatasTrainData["CreationTime"].asString();
		if(!valueTrainDatasTrainData["Status"].isNull())
			trainDatasObject.status = valueTrainDatasTrainData["Status"].asString();
		if(!valueTrainDatasTrainData["TagStatus"].isNull())
			trainDatasObject.tagStatus = valueTrainDatasTrainData["TagStatus"].asString();
		auto allTagItemsNode = allTrainDatasNode["TagItems"]["TagItem"];
		for (auto allTrainDatasNodeTagItemsTagItem : allTagItemsNode)
		{
			TrainData::TagItem tagItemsObject;
			if(!allTrainDatasNodeTagItemsTagItem["TagId"].isNull())
				tagItemsObject.tagId = allTrainDatasNodeTagItemsTagItem["TagId"].asString();
			if(!allTrainDatasNodeTagItemsTagItem["RegionType"].isNull())
				tagItemsObject.regionType = allTrainDatasNodeTagItemsTagItem["RegionType"].asString();
			auto regionNode = value["Region"];
			if(!regionNode["Left"].isNull())
				tagItemsObject.region.left = regionNode["Left"].asString();
			if(!regionNode["Top"].isNull())
				tagItemsObject.region.top = regionNode["Top"].asString();
			if(!regionNode["Width"].isNull())
				tagItemsObject.region.width = regionNode["Width"].asString();
			if(!regionNode["Height"].isNull())
				tagItemsObject.region.height = regionNode["Height"].asString();
			trainDatasObject.tagItems.push_back(tagItemsObject);
		}
		trainDatas_.push_back(trainDatasObject);
	}

}

std::vector<CreateTrainDatasFromPredictionResult::TrainData> CreateTrainDatasFromPredictionResult::getTrainDatas()const
{
	return trainDatas_;
}

