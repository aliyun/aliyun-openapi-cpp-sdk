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

#include <alibabacloud/vod/model/RefreshUploadVideoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

RefreshUploadVideoResult::RefreshUploadVideoResult() :
	ServiceResult()
{}

RefreshUploadVideoResult::RefreshUploadVideoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RefreshUploadVideoResult::~RefreshUploadVideoResult()
{}

void RefreshUploadVideoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UploadAddress"].isNull())
		uploadAddress_ = value["UploadAddress"].asString();
	if(!value["VideoId"].isNull())
		videoId_ = value["VideoId"].asString();
	if(!value["UploadAuth"].isNull())
		uploadAuth_ = value["UploadAuth"].asString();

}

std::string RefreshUploadVideoResult::getUploadAddress()const
{
	return uploadAddress_;
}

std::string RefreshUploadVideoResult::getVideoId()const
{
	return videoId_;
}

std::string RefreshUploadVideoResult::getUploadAuth()const
{
	return uploadAuth_;
}

