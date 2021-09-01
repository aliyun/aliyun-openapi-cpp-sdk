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

#include <alibabacloud/mts/model/QueryCoverJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryCoverJobListResult::QueryCoverJobListResult() :
	ServiceResult()
{}

QueryCoverJobListResult::QueryCoverJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCoverJobListResult::~QueryCoverJobListResult()
{}

void QueryCoverJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCoverJobListNode = value["CoverJobList"]["CoverJob"];
	for (auto valueCoverJobListCoverJob : allCoverJobListNode)
	{
		CoverJob coverJobListObject;
		if(!valueCoverJobListCoverJob["CreationTime"].isNull())
			coverJobListObject.creationTime = valueCoverJobListCoverJob["CreationTime"].asString();
		if(!valueCoverJobListCoverJob["State"].isNull())
			coverJobListObject.state = valueCoverJobListCoverJob["State"].asString();
		if(!valueCoverJobListCoverJob["UserData"].isNull())
			coverJobListObject.userData = valueCoverJobListCoverJob["UserData"].asString();
		if(!valueCoverJobListCoverJob["Code"].isNull())
			coverJobListObject.code = valueCoverJobListCoverJob["Code"].asString();
		if(!valueCoverJobListCoverJob["Message"].isNull())
			coverJobListObject.message = valueCoverJobListCoverJob["Message"].asString();
		if(!valueCoverJobListCoverJob["PipelineId"].isNull())
			coverJobListObject.pipelineId = valueCoverJobListCoverJob["PipelineId"].asString();
		if(!valueCoverJobListCoverJob["Id"].isNull())
			coverJobListObject.id = valueCoverJobListCoverJob["Id"].asString();
		auto allCoverImageListNode = valueCoverJobListCoverJob["CoverImageList"]["CoverImage"];
		for (auto valueCoverJobListCoverJobCoverImageListCoverImage : allCoverImageListNode)
		{
			CoverJob::CoverImage coverImageListObject;
			if(!valueCoverJobListCoverJobCoverImageListCoverImage["Time"].isNull())
				coverImageListObject.time = valueCoverJobListCoverJobCoverImageListCoverImage["Time"].asString();
			if(!valueCoverJobListCoverJobCoverImageListCoverImage["Score"].isNull())
				coverImageListObject.score = valueCoverJobListCoverJobCoverImageListCoverImage["Score"].asString();
			if(!valueCoverJobListCoverJobCoverImageListCoverImage["Url"].isNull())
				coverImageListObject.url = valueCoverJobListCoverJobCoverImageListCoverImage["Url"].asString();
			coverJobListObject.coverImageList.push_back(coverImageListObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			coverJobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			coverJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			coverJobListObject.input.bucket = inputNode["Bucket"].asString();
		auto coverConfigNode = value["CoverConfig"];
		auto outputFileNode = coverConfigNode["OutputFile"];
		if(!outputFileNode["Object"].isNull())
			coverJobListObject.coverConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			coverJobListObject.coverConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			coverJobListObject.coverConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		coverJobList_.push_back(coverJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<QueryCoverJobListResult::CoverJob> QueryCoverJobListResult::getCoverJobList()const
{
	return coverJobList_;
}

std::string QueryCoverJobListResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<std::string> QueryCoverJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

