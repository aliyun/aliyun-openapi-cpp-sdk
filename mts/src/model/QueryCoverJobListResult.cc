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
	auto allCoverJobList = value["CoverJobList"]["CoverJob"];
	for (auto value : allCoverJobList)
	{
		CoverJob coverJobListObject;
		if(!value["Id"].isNull())
			coverJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			coverJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			coverJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			coverJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			coverJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			coverJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			coverJobListObject.creationTime = value["CreationTime"].asString();
		auto allCoverImageList = value["CoverImageList"]["CoverImage"];
		for (auto value : allCoverImageList)
		{
			CoverJob::CoverImage coverImageListObject;
			if(!value["Score"].isNull())
				coverImageListObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				coverImageListObject.url = value["Url"].asString();
			if(!value["Time"].isNull())
				coverImageListObject.time = value["Time"].asString();
			coverJobListObject.coverImageList.push_back(coverImageListObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			coverJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			coverJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			coverJobListObject.input.object = inputNode["Object"].asString();
		auto coverConfigNode = value["CoverConfig"];
		auto outputFileNode = coverConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			coverJobListObject.coverConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			coverJobListObject.coverConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			coverJobListObject.coverConfig.outputFile.object = outputFileNode["Object"].asString();
		coverJobList_.push_back(coverJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryCoverJobListResult::CoverJob> QueryCoverJobListResult::getCoverJobList()const
{
	return coverJobList_;
}

std::vector<std::string> QueryCoverJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

