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

#include <alibabacloud/mts/model/SearchMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SearchMediaResult::SearchMediaResult() :
	ServiceResult()
{}

SearchMediaResult::SearchMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchMediaResult::~SearchMediaResult()
{}

void SearchMediaResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allMediaList = value["MediaList"]["Media"];
	for (auto value : allMediaList)
	{
		Media mediaListObject;
		if(!value["MediaId"].isNull())
			mediaListObject.mediaId = value["MediaId"].asString();
		if(!value["Title"].isNull())
			mediaListObject.title = value["Title"].asString();
		if(!value["Description"].isNull())
			mediaListObject.description = value["Description"].asString();
		if(!value["CoverURL"].isNull())
			mediaListObject.coverURL = value["CoverURL"].asString();
		if(!value["CateId"].isNull())
			mediaListObject.cateId = std::stol(value["CateId"].asString());
		if(!value["Duration"].isNull())
			mediaListObject.duration = value["Duration"].asString();
		if(!value["Format"].isNull())
			mediaListObject.format = value["Format"].asString();
		if(!value["Size"].isNull())
			mediaListObject.size = value["Size"].asString();
		if(!value["Bitrate"].isNull())
			mediaListObject.bitrate = value["Bitrate"].asString();
		if(!value["Width"].isNull())
			mediaListObject.width = value["Width"].asString();
		if(!value["Height"].isNull())
			mediaListObject.height = value["Height"].asString();
		if(!value["Fps"].isNull())
			mediaListObject.fps = value["Fps"].asString();
		if(!value["PublishState"].isNull())
			mediaListObject.publishState = value["PublishState"].asString();
		if(!value["CreationTime"].isNull())
			mediaListObject.creationTime = value["CreationTime"].asString();
		auto fileNode = value["File"];
		if(!fileNode["URL"].isNull())
			mediaListObject.file.uRL = fileNode["URL"].asString();
		if(!fileNode["State"].isNull())
			mediaListObject.file.state = fileNode["State"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
			mediaListObject.tags.push_back(value.asString());
		auto allRunIdList = value["RunIdList"]["RunId"];
		for (auto value : allRunIdList)
			mediaListObject.runIdList.push_back(value.asString());
		mediaList_.push_back(mediaListObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::vector<SearchMediaResult::Media> SearchMediaResult::getMediaList()const
{
	return mediaList_;
}

long SearchMediaResult::getTotalNum()const
{
	return totalNum_;
}

long SearchMediaResult::getPageSize()const
{
	return pageSize_;
}

long SearchMediaResult::getPageNumber()const
{
	return pageNumber_;
}

