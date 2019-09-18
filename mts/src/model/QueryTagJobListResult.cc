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
	auto allTagJobList = value["TagJobList"]["TagJob"];
	for (auto value : allTagJobList)
	{
		TagJob tagJobListObject;
		if(!value["Id"].isNull())
			tagJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			tagJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			tagJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			tagJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			tagJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			tagJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			tagJobListObject.creationTime = value["CreationTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			tagJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			tagJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			tagJobListObject.input.object = inputNode["Object"].asString();
		auto videoTagResultNode = value["VideoTagResult"];
		if(!videoTagResultNode["Details"].isNull())
			tagJobListObject.videoTagResult.details = videoTagResultNode["Details"].asString();
		auto allTagAnResults = value["TagAnResults"]["TagAnResult"];
		for (auto value : allTagAnResults)
		{
			TagJob::VideoTagResult::TagAnResult tagAnResultObject;
			if(!value["Label"].isNull())
				tagAnResultObject.label = value["Label"].asString();
			if(!value["Score"].isNull())
				tagAnResultObject.score = value["Score"].asString();
			tagJobListObject.videoTagResult.tagAnResults.push_back(tagAnResultObject);
		}
		auto allTagFrResults = value["TagFrResults"]["TagFrResult"];
		for (auto value : allTagFrResults)
		{
			TagJob::VideoTagResult::TagFrResult tagFrResultObject;
			if(!value["Time"].isNull())
				tagFrResultObject.time = value["Time"].asString();
			auto allTagFaces = value["TagFaces"]["TagFace"];
			for (auto value : allTagFaces)
			{
				TagJob::VideoTagResult::TagFrResult::TagFace tagFacesObject;
				if(!value["Name"].isNull())
					tagFacesObject.name = value["Name"].asString();
				if(!value["Score"].isNull())
					tagFacesObject.score = value["Score"].asString();
				if(!value["Target"].isNull())
					tagFacesObject.target = value["Target"].asString();
				tagFrResultObject.tagFaces.push_back(tagFacesObject);
			}
			tagJobListObject.videoTagResult.tagFrResults.push_back(tagFrResultObject);
		}
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

