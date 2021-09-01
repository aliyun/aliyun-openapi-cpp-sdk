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

#include <alibabacloud/mts/model/QueryTagJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryTagJobListResult::QueryTagJobListResult() :
	ServiceResult()
{}

QueryTagJobListResult::QueryTagJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTagJobListResult::~QueryTagJobListResult()
{}

void QueryTagJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagJobListNode = value["TagJobList"]["TagJob"];
	for (auto valueTagJobListTagJob : allTagJobListNode)
	{
		TagJob tagJobListObject;
		if(!valueTagJobListTagJob["CreationTime"].isNull())
			tagJobListObject.creationTime = valueTagJobListTagJob["CreationTime"].asString();
		if(!valueTagJobListTagJob["State"].isNull())
			tagJobListObject.state = valueTagJobListTagJob["State"].asString();
		if(!valueTagJobListTagJob["UserData"].isNull())
			tagJobListObject.userData = valueTagJobListTagJob["UserData"].asString();
		if(!valueTagJobListTagJob["Code"].isNull())
			tagJobListObject.code = valueTagJobListTagJob["Code"].asString();
		if(!valueTagJobListTagJob["Message"].isNull())
			tagJobListObject.message = valueTagJobListTagJob["Message"].asString();
		if(!valueTagJobListTagJob["PipelineId"].isNull())
			tagJobListObject.pipelineId = valueTagJobListTagJob["PipelineId"].asString();
		if(!valueTagJobListTagJob["Id"].isNull())
			tagJobListObject.id = valueTagJobListTagJob["Id"].asString();
		auto videoTagResultNode = value["VideoTagResult"];
		if(!videoTagResultNode["Details"].isNull())
			tagJobListObject.videoTagResult.details = videoTagResultNode["Details"].asString();
		auto allTagAnResultsNode = videoTagResultNode["TagAnResults"]["TagAnResult"];
		for (auto videoTagResultNodeTagAnResultsTagAnResult : allTagAnResultsNode)
		{
			TagJob::VideoTagResult::TagAnResult tagAnResultObject;
			if(!videoTagResultNodeTagAnResultsTagAnResult["Score"].isNull())
				tagAnResultObject.score = videoTagResultNodeTagAnResultsTagAnResult["Score"].asString();
			if(!videoTagResultNodeTagAnResultsTagAnResult["Label"].isNull())
				tagAnResultObject.label = videoTagResultNodeTagAnResultsTagAnResult["Label"].asString();
			tagJobListObject.videoTagResult.tagAnResults.push_back(tagAnResultObject);
		}
		auto allTagFrResultsNode = videoTagResultNode["TagFrResults"]["TagFrResult"];
		for (auto videoTagResultNodeTagFrResultsTagFrResult : allTagFrResultsNode)
		{
			TagJob::VideoTagResult::TagFrResult tagFrResultObject;
			if(!videoTagResultNodeTagFrResultsTagFrResult["Time"].isNull())
				tagFrResultObject.time = videoTagResultNodeTagFrResultsTagFrResult["Time"].asString();
			auto allTagFacesNode = videoTagResultNodeTagFrResultsTagFrResult["TagFaces"]["TagFace"];
			for (auto videoTagResultNodeTagFrResultsTagFrResultTagFacesTagFace : allTagFacesNode)
			{
				TagJob::VideoTagResult::TagFrResult::TagFace tagFacesObject;
				if(!videoTagResultNodeTagFrResultsTagFrResultTagFacesTagFace["Score"].isNull())
					tagFacesObject.score = videoTagResultNodeTagFrResultsTagFrResultTagFacesTagFace["Score"].asString();
				if(!videoTagResultNodeTagFrResultsTagFrResultTagFacesTagFace["Name"].isNull())
					tagFacesObject.name = videoTagResultNodeTagFrResultsTagFrResultTagFacesTagFace["Name"].asString();
				if(!videoTagResultNodeTagFrResultsTagFrResultTagFacesTagFace["Target"].isNull())
					tagFacesObject.target = videoTagResultNodeTagFrResultsTagFrResultTagFacesTagFace["Target"].asString();
				tagFrResultObject.tagFaces.push_back(tagFacesObject);
			}
			tagJobListObject.videoTagResult.tagFrResults.push_back(tagFrResultObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			tagJobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			tagJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			tagJobListObject.input.bucket = inputNode["Bucket"].asString();
		tagJobList_.push_back(tagJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryTagJobListResult::TagJob> QueryTagJobListResult::getTagJobList()const
{
	return tagJobList_;
}

std::vector<std::string> QueryTagJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

