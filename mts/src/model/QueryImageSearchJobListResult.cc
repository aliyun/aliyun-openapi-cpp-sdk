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
	auto allImageSearchJobList = value["ImageSearchJobList"]["ImageSearchJob"];
	for (auto value : allImageSearchJobList)
	{
		ImageSearchJob imageSearchJobListObject;
		if(!value["Id"].isNull())
			imageSearchJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			imageSearchJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			imageSearchJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			imageSearchJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			imageSearchJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			imageSearchJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			imageSearchJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishTime"].isNull())
			imageSearchJobListObject.finishTime = value["FinishTime"].asString();
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
		auto allImageSearchShots = value["ImageSearchShots"]["ImageSearchShotsItem"];
		for (auto value : allImageSearchShots)
		{
			ImageSearchJob::Result::ImageSearchShotsItem imageSearchShotsItemObject;
			if(!value["MatchedTimestamp"].isNull())
				imageSearchShotsItemObject.matchedTimestamp = value["MatchedTimestamp"].asString();
			if(!value["MatchedFrame"].isNull())
				imageSearchShotsItemObject.matchedFrame = value["MatchedFrame"].asString();
			if(!value["Similarity"].isNull())
				imageSearchShotsItemObject.similarity = value["Similarity"].asString();
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

