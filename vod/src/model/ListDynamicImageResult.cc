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

#include <alibabacloud/vod/model/ListDynamicImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListDynamicImageResult::ListDynamicImageResult() :
	ServiceResult()
{}

ListDynamicImageResult::ListDynamicImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDynamicImageResult::~ListDynamicImageResult()
{}

void ListDynamicImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDynamicImageListNode = value["DynamicImageList"]["DynamicImage"];
	for (auto valueDynamicImageListDynamicImage : allDynamicImageListNode)
	{
		DynamicImage dynamicImageListObject;
		if(!valueDynamicImageListDynamicImage["CreationTime"].isNull())
			dynamicImageListObject.creationTime = valueDynamicImageListDynamicImage["CreationTime"].asString();
		if(!valueDynamicImageListDynamicImage["FileURL"].isNull())
			dynamicImageListObject.fileURL = valueDynamicImageListDynamicImage["FileURL"].asString();
		if(!valueDynamicImageListDynamicImage["VideoId"].isNull())
			dynamicImageListObject.videoId = valueDynamicImageListDynamicImage["VideoId"].asString();
		if(!valueDynamicImageListDynamicImage["Width"].isNull())
			dynamicImageListObject.width = valueDynamicImageListDynamicImage["Width"].asString();
		if(!valueDynamicImageListDynamicImage["JobId"].isNull())
			dynamicImageListObject.jobId = valueDynamicImageListDynamicImage["JobId"].asString();
		if(!valueDynamicImageListDynamicImage["Height"].isNull())
			dynamicImageListObject.height = valueDynamicImageListDynamicImage["Height"].asString();
		if(!valueDynamicImageListDynamicImage["Fps"].isNull())
			dynamicImageListObject.fps = valueDynamicImageListDynamicImage["Fps"].asString();
		if(!valueDynamicImageListDynamicImage["Duration"].isNull())
			dynamicImageListObject.duration = valueDynamicImageListDynamicImage["Duration"].asString();
		if(!valueDynamicImageListDynamicImage["Format"].isNull())
			dynamicImageListObject.format = valueDynamicImageListDynamicImage["Format"].asString();
		if(!valueDynamicImageListDynamicImage["DynamicImageId"].isNull())
			dynamicImageListObject.dynamicImageId = valueDynamicImageListDynamicImage["DynamicImageId"].asString();
		if(!valueDynamicImageListDynamicImage["FileSize"].isNull())
			dynamicImageListObject.fileSize = valueDynamicImageListDynamicImage["FileSize"].asString();
		dynamicImageList_.push_back(dynamicImageListObject);
	}

}

std::vector<ListDynamicImageResult::DynamicImage> ListDynamicImageResult::getDynamicImageList()const
{
	return dynamicImageList_;
}

