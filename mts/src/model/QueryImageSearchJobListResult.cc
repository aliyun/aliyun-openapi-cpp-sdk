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

#include <alibabacloud/mts/model/QueryImageSearchJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryImageSearchJobListResult::QueryImageSearchJobListResult() :
	ServiceResult()
{}

QueryImageSearchJobListResult::QueryImageSearchJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryImageSearchJobListResult::~QueryImageSearchJobListResult()
{}

void QueryImageSearchJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageSearchJobListNode = value["ImageSearchJobList"]["ImageSearchJob"];
	for (auto valueImageSearchJobListImageSearchJob : allImageSearchJobListNode)
	{
		ImageSearchJob imageSearchJobListObject;
		if(!valueImageSearchJobListImageSearchJob["Id"].isNull())
			imageSearchJobListObject.id = valueImageSearchJobListImageSearchJob["Id"].asString();
		if(!valueImageSearchJobListImageSearchJob["UserData"].isNull())
			imageSearchJobListObject.userData = valueImageSearchJobListImageSearchJob["UserData"].asString();
		if(!valueImageSearchJobListImageSearchJob["PipelineId"].isNull())
			imageSearchJobListObject.pipelineId = valueImageSearchJobListImageSearchJob["PipelineId"].asString();
		if(!valueImageSearchJobListImageSearchJob["State"].isNull())
			imageSearchJobListObject.state = valueImageSearchJobListImageSearchJob["State"].asString();
		if(!valueImageSearchJobListImageSearchJob["Code"].isNull())
			imageSearchJobListObject.code = valueImageSearchJobListImageSearchJob["Code"].asString();
		if(!valueImageSearchJobListImageSearchJob["Message"].isNull())
			imageSearchJobListObject.message = valueImageSearchJobListImageSearchJob["Message"].asString();
		if(!valueImageSearchJobListImageSearchJob["CreationTime"].isNull())
			imageSearchJobListObject.creationTime = valueImageSearchJobListImageSearchJob["CreationTime"].asString();
		if(!valueImageSearchJobListImageSearchJob["FinishTime"].isNull())
			imageSearchJobListObject.finishTime = valueImageSearchJobListImageSearchJob["FinishTime"].asString();
		auto inputVideoNode = value["InputVideo"];
		if(!inputVideoNode["Bucket"].isNull())
			imageSearchJobListObject.inputVideo.bucket = inputVideoNode["Bucket"].asString();
		if(!inputVideoNode["Location"].isNull())
			imageSearchJobListObject.inputVideo.location = inputVideoNode["Location"].asString();
		if(!inputVideoNode["Object"].isNull())
			imageSearchJobListObject.inputVideo.object = inputVideoNode["Object"].asString();
		auto inputImageNode = value["inputImage"];
		if(!inputImageNode["Bucket"].isNull())
			imageSearchJobListObject.inputImage.bucket = inputImageNode["Bucket"].asString();
		if(!inputImageNode["Location"].isNull())
			imageSearchJobListObject.inputImage.location = inputImageNode["Location"].asString();
		if(!inputImageNode["Object"].isNull())
			imageSearchJobListObject.inputImage.object = inputImageNode["Object"].asString();
		auto resultNode = value["Result"];
		auto allImageSearchShotsNode = resultNode["ImageSearchShots"]["ImageSearchShotsItem"];
		for (auto resultNodeImageSearchShotsImageSearchShotsItem : allImageSearchShotsNode)
		{
			ImageSearchJob::Result::ImageSearchShotsItem imageSearchShotsItemObject;
			if(!resultNodeImageSearchShotsImageSearchShotsItem["MatchedTimestamp"].isNull())
				imageSearchShotsItemObject.matchedTimestamp = resultNodeImageSearchShotsImageSearchShotsItem["MatchedTimestamp"].asString();
			if(!resultNodeImageSearchShotsImageSearchShotsItem["MatchedFrame"].isNull())
				imageSearchShotsItemObject.matchedFrame = resultNodeImageSearchShotsImageSearchShotsItem["MatchedFrame"].asString();
			if(!resultNodeImageSearchShotsImageSearchShotsItem["Similarity"].isNull())
				imageSearchShotsItemObject.similarity = resultNodeImageSearchShotsImageSearchShotsItem["Similarity"].asString();
			imageSearchJobListObject.result.imageSearchShots.push_back(imageSearchShotsItemObject);
		}
		imageSearchJobList_.push_back(imageSearchJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryImageSearchJobListResult::ImageSearchJob> QueryImageSearchJobListResult::getImageSearchJobList()const
{
	return imageSearchJobList_;
}

std::vector<std::string> QueryImageSearchJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

