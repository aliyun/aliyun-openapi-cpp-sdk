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

#include <alibabacloud/vod/model/ListAIImageInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIImageInfoResult::ListAIImageInfoResult() :
	ServiceResult()
{}

ListAIImageInfoResult::ListAIImageInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIImageInfoResult::~ListAIImageInfoResult()
{}

void ListAIImageInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAIImageInfoListNode = value["AIImageInfoList"]["AIImageInfo"];
	for (auto valueAIImageInfoListAIImageInfo : allAIImageInfoListNode)
	{
		AIImageInfo aIImageInfoListObject;
		if(!valueAIImageInfoListAIImageInfo["CreationTime"].isNull())
			aIImageInfoListObject.creationTime = valueAIImageInfoListAIImageInfo["CreationTime"].asString();
		if(!valueAIImageInfoListAIImageInfo["AIImageInfoId"].isNull())
			aIImageInfoListObject.aIImageInfoId = valueAIImageInfoListAIImageInfo["AIImageInfoId"].asString();
		if(!valueAIImageInfoListAIImageInfo["Time"].isNull())
			aIImageInfoListObject.time = valueAIImageInfoListAIImageInfo["Time"].asString();
		if(!valueAIImageInfoListAIImageInfo["FileURL"].isNull())
			aIImageInfoListObject.fileURL = valueAIImageInfoListAIImageInfo["FileURL"].asString();
		if(!valueAIImageInfoListAIImageInfo["Version"].isNull())
			aIImageInfoListObject.version = valueAIImageInfoListAIImageInfo["Version"].asString();
		if(!valueAIImageInfoListAIImageInfo["VideoId"].isNull())
			aIImageInfoListObject.videoId = valueAIImageInfoListAIImageInfo["VideoId"].asString();
		if(!valueAIImageInfoListAIImageInfo["JobId"].isNull())
			aIImageInfoListObject.jobId = valueAIImageInfoListAIImageInfo["JobId"].asString();
		if(!valueAIImageInfoListAIImageInfo["Score"].isNull())
			aIImageInfoListObject.score = valueAIImageInfoListAIImageInfo["Score"].asString();
		if(!valueAIImageInfoListAIImageInfo["Format"].isNull())
			aIImageInfoListObject.format = valueAIImageInfoListAIImageInfo["Format"].asString();
		aIImageInfoList_.push_back(aIImageInfoListObject);
	}

}

std::vector<ListAIImageInfoResult::AIImageInfo> ListAIImageInfoResult::getAIImageInfoList()const
{
	return aIImageInfoList_;
}

