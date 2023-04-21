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

#include <alibabacloud/ice/model/SearchMediaClipByFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

SearchMediaClipByFaceResult::SearchMediaClipByFaceResult() :
	ServiceResult()
{}

SearchMediaClipByFaceResult::SearchMediaClipByFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchMediaClipByFaceResult::~SearchMediaClipByFaceResult()
{}

void SearchMediaClipByFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaClipListNode = value["MediaClipList"]["MediaClip"];
	for (auto valueMediaClipListMediaClip : allMediaClipListNode)
	{
		MediaClip mediaClipListObject;
		if(!valueMediaClipListMediaClip["Score"].isNull())
			mediaClipListObject.score = std::stof(valueMediaClipListMediaClip["Score"].asString());
		if(!valueMediaClipListMediaClip["EntityId"].isNull())
			mediaClipListObject.entityId = valueMediaClipListMediaClip["EntityId"].asString();
		if(!valueMediaClipListMediaClip["LabelName"].isNull())
			mediaClipListObject.labelName = valueMediaClipListMediaClip["LabelName"].asString();
		if(!valueMediaClipListMediaClip["Category"].isNull())
			mediaClipListObject.category = valueMediaClipListMediaClip["Category"].asString();
		auto allOccurrencesInfosNode = valueMediaClipListMediaClip["OccurrencesInfos"]["OccurrencesInfo"];
		for (auto valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfo : allOccurrencesInfosNode)
		{
			MediaClip::OccurrencesInfo occurrencesInfosObject;
			if(!valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfo["StartTime"].isNull())
				occurrencesInfosObject.startTime = std::stof(valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfo["StartTime"].asString());
			if(!valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfo["EndTime"].isNull())
				occurrencesInfosObject.endTime = std::stof(valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfo["EndTime"].asString());
			auto allTrackDataNode = valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfo["TrackData"]["TrackDataItem"];
			for (auto valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfoTrackDataTrackDataItem : allTrackDataNode)
			{
				MediaClip::OccurrencesInfo::TrackDataItem trackDataObject;
				if(!valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfoTrackDataTrackDataItem["Timestamp"].isNull())
					trackDataObject.timestamp = std::stof(valueMediaClipListMediaClipOccurrencesInfosOccurrencesInfoTrackDataTrackDataItem["Timestamp"].asString());
				auto boxPositionNode = value["BoxPosition"];
				if(!boxPositionNode["X"].isNull())
					trackDataObject.boxPosition.x = std::stoi(boxPositionNode["X"].asString());
				if(!boxPositionNode["Y"].isNull())
					trackDataObject.boxPosition.y = std::stoi(boxPositionNode["Y"].asString());
				if(!boxPositionNode["W"].isNull())
					trackDataObject.boxPosition.w = std::stoi(boxPositionNode["W"].asString());
				if(!boxPositionNode["H"].isNull())
					trackDataObject.boxPosition.h = std::stoi(boxPositionNode["H"].asString());
				occurrencesInfosObject.trackData.push_back(trackDataObject);
			}
			mediaClipListObject.occurrencesInfos.push_back(occurrencesInfosObject);
		}
		mediaClipList_.push_back(mediaClipListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long SearchMediaClipByFaceResult::getTotal()const
{
	return total_;
}

std::string SearchMediaClipByFaceResult::getCode()const
{
	return code_;
}

std::string SearchMediaClipByFaceResult::getSuccess()const
{
	return success_;
}

std::vector<SearchMediaClipByFaceResult::MediaClip> SearchMediaClipByFaceResult::getMediaClipList()const
{
	return mediaClipList_;
}

