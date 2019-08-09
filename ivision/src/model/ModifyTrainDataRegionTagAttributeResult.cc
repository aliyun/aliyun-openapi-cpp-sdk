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

#include <alibabacloud/ivision/model/ModifyTrainDataRegionTagAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

ModifyTrainDataRegionTagAttributeResult::ModifyTrainDataRegionTagAttributeResult() :
	ServiceResult()
{}

ModifyTrainDataRegionTagAttributeResult::ModifyTrainDataRegionTagAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyTrainDataRegionTagAttributeResult::~ModifyTrainDataRegionTagAttributeResult()
{}

void ModifyTrainDataRegionTagAttributeResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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
	auto allTagItems = value["TagItems"]["TagItem"];
	for (auto value : allTagItems)
	{
		TrainData::TagItem tagItemObject;
		if(!value["TagId"].isNull())
			tagItemObject.tagId = value["TagId"].asString();
		if(!value["RegionType"].isNull())
			tagItemObject.regionType = value["RegionType"].asString();
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

ModifyTrainDataRegionTagAttributeResult::TrainData ModifyTrainDataRegionTagAttributeResult::getTrainData()const
{
	return trainData_;
}

