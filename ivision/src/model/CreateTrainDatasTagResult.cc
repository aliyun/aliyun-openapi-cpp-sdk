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

#include <alibabacloud/ivision/model/CreateTrainDatasTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreateTrainDatasTagResult::CreateTrainDatasTagResult() :
	ServiceResult()
{}

CreateTrainDatasTagResult::CreateTrainDatasTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTrainDatasTagResult::~CreateTrainDatasTagResult()
{}

void CreateTrainDatasTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto trainDataNode = value["TrainData"];
	if(!trainDataNode["ProjectId"].isNull())
		trainData_.projectId = trainDataNode["ProjectId"].asString();
	if(!trainDataNode["IterationId"].isNull())
		trainData_.iterationId = trainDataNode["IterationId"].asString();
	if(!trainDataNode["DataId"].isNull())
		trainData_.dataId = trainDataNode["DataId"].asString();
	if(!trainDataNode["DataName"].isNull())
		trainData_.dataName = trainDataNode["DataName"].asString();
	if(!trainDataNode["DataUrl"].isNull())
		trainData_.dataUrl = trainDataNode["DataUrl"].asString();
	if(!trainDataNode["CreationTime"].isNull())
		trainData_.creationTime = trainDataNode["CreationTime"].asString();
	if(!trainDataNode["Status"].isNull())
		trainData_.status = trainDataNode["Status"].asString();
	if(!trainDataNode["TagStatus"].isNull())
		trainData_.tagStatus = trainDataNode["TagStatus"].asString();
	auto allTagItemsNode = trainDataNode["TagItems"]["TagItem"];
	for (auto trainDataNodeTagItemsTagItem : allTagItemsNode)
	{
		TrainData::TagItem tagItemObject;
		if(!trainDataNodeTagItemsTagItem["TagId"].isNull())
			tagItemObject.tagId = trainDataNodeTagItemsTagItem["TagId"].asString();
		if(!trainDataNodeTagItemsTagItem["RegionType"].isNull())
			tagItemObject.regionType = trainDataNodeTagItemsTagItem["RegionType"].asString();
		auto regionNode = value["Region"];
		if(!regionNode["Left"].isNull())
			tagItemObject.region.left = regionNode["Left"].asString();
		if(!regionNode["Top"].isNull())
			tagItemObject.region.top = regionNode["Top"].asString();
		if(!regionNode["Width"].isNull())
			tagItemObject.region.width = regionNode["Width"].asString();
		if(!regionNode["Height"].isNull())
			tagItemObject.region.height = regionNode["Height"].asString();
		trainData_.tagItems.push_back(tagItemObject);
	}

}

CreateTrainDatasTagResult::TrainData CreateTrainDatasTagResult::getTrainData()const
{
	return trainData_;
}

