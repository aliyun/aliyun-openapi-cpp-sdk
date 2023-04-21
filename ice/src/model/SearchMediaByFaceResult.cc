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

#include <alibabacloud/ice/model/SearchMediaByFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

SearchMediaByFaceResult::SearchMediaByFaceResult() :
	ServiceResult()
{}

SearchMediaByFaceResult::SearchMediaByFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchMediaByFaceResult::~SearchMediaByFaceResult()
{}

void SearchMediaByFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaInfoListNode = value["MediaInfoList"]["MediaInfo"];
	for (auto valueMediaInfoListMediaInfo : allMediaInfoListNode)
	{
		MediaInfo mediaInfoListObject;
		if(!valueMediaInfoListMediaInfo["MediaId"].isNull())
			mediaInfoListObject.mediaId = valueMediaInfoListMediaInfo["MediaId"].asString();
		mediaInfoList_.push_back(mediaInfoListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<SearchMediaByFaceResult::MediaInfo> SearchMediaByFaceResult::getMediaInfoList()const
{
	return mediaInfoList_;
}

long SearchMediaByFaceResult::getTotal()const
{
	return total_;
}

std::string SearchMediaByFaceResult::getCode()const
{
	return code_;
}

std::string SearchMediaByFaceResult::getSuccess()const
{
	return success_;
}

