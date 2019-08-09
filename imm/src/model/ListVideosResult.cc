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

#include <alibabacloud/imm/model/ListVideosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListVideosResult::ListVideosResult() :
	ServiceResult()
{}

ListVideosResult::ListVideosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVideosResult::~ListVideosResult()
{}

void ListVideosResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allVideos = value["Videos"]["VideosItem"];
	for (auto value : allVideos)
	{
		VideosItem videosObject;
		if(!value["VideoUri"].isNull())
			videosObject.videoUri = value["VideoUri"].asString();
		if(!value["RemarksA"].isNull())
			videosObject.remarksA = value["RemarksA"].asString();
		if(!value["RemarksB"].isNull())
			videosObject.remarksB = value["RemarksB"].asString();
		if(!value["CreateTime"].isNull())
			videosObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			videosObject.modifyTime = value["ModifyTime"].asString();
		if(!value["VideoWidth"].isNull())
			videosObject.videoWidth = std::stoi(value["VideoWidth"].asString());
		if(!value["VideoHeight"].isNull())
			videosObject.videoHeight = std::stoi(value["VideoHeight"].asString());
		if(!value["VideoFormat"].isNull())
			videosObject.videoFormat = value["VideoFormat"].asString();
		if(!value["VideoDuration"].isNull())
			videosObject.videoDuration = std::stof(value["VideoDuration"].asString());
		if(!value["FileSize"].isNull())
			videosObject.fileSize = std::stoi(value["FileSize"].asString());
		if(!value["VideoFrames"].isNull())
			videosObject.videoFrames = std::stoi(value["VideoFrames"].asString());
		if(!value["SourceType"].isNull())
			videosObject.sourceType = value["SourceType"].asString();
		if(!value["SourceUri"].isNull())
			videosObject.sourceUri = value["SourceUri"].asString();
		if(!value["SourcePosition"].isNull())
			videosObject.sourcePosition = value["SourcePosition"].asString();
		if(!value["ProcessStatus"].isNull())
			videosObject.processStatus = value["ProcessStatus"].asString();
		if(!value["ProcessModifyTime"].isNull())
			videosObject.processModifyTime = value["ProcessModifyTime"].asString();
		if(!value["VideoTagsStatus"].isNull())
			videosObject.videoTagsStatus = value["VideoTagsStatus"].asString();
		if(!value["VideoTagsModifyTime"].isNull())
			videosObject.videoTagsModifyTime = value["VideoTagsModifyTime"].asString();
		if(!value["CelebrityStatus"].isNull())
			videosObject.celebrityStatus = value["CelebrityStatus"].asString();
		if(!value["CelebrityModifyTime"].isNull())
			videosObject.celebrityModifyTime = value["CelebrityModifyTime"].asString();
		if(!value["CelebrityFailReason"].isNull())
			videosObject.celebrityFailReason = value["CelebrityFailReason"].asString();
		if(!value["VideoTagsFailReason"].isNull())
			videosObject.videoTagsFailReason = value["VideoTagsFailReason"].asString();
		if(!value["ProcessFailReason"].isNull())
			videosObject.processFailReason = value["ProcessFailReason"].asString();
		if(!value["RemarksC"].isNull())
			videosObject.remarksC = value["RemarksC"].asString();
		if(!value["RemarksD"].isNull())
			videosObject.remarksD = value["RemarksD"].asString();
		if(!value["ExternalId"].isNull())
			videosObject.externalId = value["ExternalId"].asString();
		auto allVideoTags = value["VideoTags"]["VideoTagsItem"];
		for (auto value : allVideoTags)
		{
			VideosItem::VideoTagsItem videoTagsObject;
			if(!value["VideoTagName"].isNull())
				videoTagsObject.videoTagName = value["VideoTagName"].asString();
			if(!value["VideoTagEnName"].isNull())
				videoTagsObject.videoTagEnName = value["VideoTagEnName"].asString();
			if(!value["VideoTagConfidence"].isNull())
				videoTagsObject.videoTagConfidence = std::stof(value["VideoTagConfidence"].asString());
			videosObject.videoTags.push_back(videoTagsObject);
		}
		auto allCelebrity = value["Celebrity"]["CelebrityItem"];
		for (auto value : allCelebrity)
		{
			VideosItem::CelebrityItem celebrityObject;
			if(!value["CelebrityName"].isNull())
				celebrityObject.celebrityName = value["CelebrityName"].asString();
			if(!value["CelebrityNum"].isNull())
				celebrityObject.celebrityNum = std::stoi(value["CelebrityNum"].asString());
			if(!value["CelebrityLibraryName"].isNull())
				celebrityObject.celebrityLibraryName = value["CelebrityLibraryName"].asString();
			videosObject.celebrity.push_back(celebrityObject);
		}
		auto allPersons = value["Persons"]["PersonsItem"];
		for (auto value : allPersons)
		{
			VideosItem::PersonsItem personsObject;
			if(!value["PersonId"].isNull())
				personsObject.personId = value["PersonId"].asString();
			if(!value["Age"].isNull())
				personsObject.age = std::stoi(value["Age"].asString());
			if(!value["AgeConfidence"].isNull())
				personsObject.ageConfidence = std::stof(value["AgeConfidence"].asString());
			if(!value["Gender"].isNull())
				personsObject.gender = value["Gender"].asString();
			if(!value["GenderConfidence"].isNull())
				personsObject.genderConfidence = std::stof(value["GenderConfidence"].asString());
			videosObject.persons.push_back(personsObject);
		}
		videos_.push_back(videosObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::string ListVideosResult::getSetId()const
{
	return setId_;
}

std::string ListVideosResult::getNextMarker()const
{
	return nextMarker_;
}

std::vector<ListVideosResult::VideosItem> ListVideosResult::getVideos()const
{
	return videos_;
}

