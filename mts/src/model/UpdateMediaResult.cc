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

#include <alibabacloud/mts/model/UpdateMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

UpdateMediaResult::UpdateMediaResult() :
	ServiceResult()
{}

UpdateMediaResult::UpdateMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateMediaResult::~UpdateMediaResult()
{}

void UpdateMediaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaNode = value["Media"];
	if(!mediaNode["CreationTime"].isNull())
		media_.creationTime = mediaNode["CreationTime"].asString();
	if(!mediaNode["CateId"].isNull())
		media_.cateId = std::stol(mediaNode["CateId"].asString());
	if(!mediaNode["Height"].isNull())
		media_.height = mediaNode["Height"].asString();
	if(!mediaNode["CensorState"].isNull())
		media_.censorState = mediaNode["CensorState"].asString();
	if(!mediaNode["Bitrate"].isNull())
		media_.bitrate = mediaNode["Bitrate"].asString();
	if(!mediaNode["MediaId"].isNull())
		media_.mediaId = mediaNode["MediaId"].asString();
	if(!mediaNode["PublishState"].isNull())
		media_.publishState = mediaNode["PublishState"].asString();
	if(!mediaNode["Description"].isNull())
		media_.description = mediaNode["Description"].asString();
	if(!mediaNode["Width"].isNull())
		media_.width = mediaNode["Width"].asString();
	if(!mediaNode["Size"].isNull())
		media_.size = mediaNode["Size"].asString();
	if(!mediaNode["CoverURL"].isNull())
		media_.coverURL = mediaNode["CoverURL"].asString();
	if(!mediaNode["Duration"].isNull())
		media_.duration = mediaNode["Duration"].asString();
	if(!mediaNode["Fps"].isNull())
		media_.fps = mediaNode["Fps"].asString();
	if(!mediaNode["Title"].isNull())
		media_.title = mediaNode["Title"].asString();
	if(!mediaNode["Format"].isNull())
		media_.format = mediaNode["Format"].asString();
	auto fileNode = mediaNode["File"];
	if(!fileNode["State"].isNull())
		media_.file.state = fileNode["State"].asString();
	if(!fileNode["URL"].isNull())
		media_.file.uRL = fileNode["URL"].asString();
		auto allTags = mediaNode["Tags"]["Tag"];
		for (auto value : allTags)
			media_.tags.push_back(value.asString());
		auto allRunIdList = mediaNode["RunIdList"]["RunId"];
		for (auto value : allRunIdList)
			media_.runIdList.push_back(value.asString());

}

UpdateMediaResult::Media UpdateMediaResult::getMedia()const
{
	return media_;
}

