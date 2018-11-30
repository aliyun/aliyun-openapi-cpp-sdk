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

#include <alibabacloud/vod/model/GetVideoPlayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetVideoPlayInfoResult::GetVideoPlayInfoResult() :
	ServiceResult()
{}

GetVideoPlayInfoResult::GetVideoPlayInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVideoPlayInfoResult::~GetVideoPlayInfoResult()
{}

void GetVideoPlayInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto playInfoNode = value["PlayInfo"];
	if(!playInfoNode["AccessKeyId"].isNull())
		playInfo_.accessKeyId = playInfoNode["AccessKeyId"].asString();
	if(!playInfoNode["AccessKeySecret"].isNull())
		playInfo_.accessKeySecret = playInfoNode["AccessKeySecret"].asString();
	if(!playInfoNode["AuthInfo"].isNull())
		playInfo_.authInfo = playInfoNode["AuthInfo"].asString();
	if(!playInfoNode["SecurityToken"].isNull())
		playInfo_.securityToken = playInfoNode["SecurityToken"].asString();
	if(!playInfoNode["Region"].isNull())
		playInfo_.region = playInfoNode["Region"].asString();
	if(!playInfoNode["PlayDomain"].isNull())
		playInfo_.playDomain = playInfoNode["PlayDomain"].asString();
	auto videoInfoNode = value["VideoInfo"];
	if(!videoInfoNode["CoverURL"].isNull())
		videoInfo_.coverURL = videoInfoNode["CoverURL"].asString();
	if(!videoInfoNode["CustomerId"].isNull())
		videoInfo_.customerId = std::stol(videoInfoNode["CustomerId"].asString());
	if(!videoInfoNode["Duration"].isNull())
		videoInfo_.duration = std::stof(videoInfoNode["Duration"].asString());
	if(!videoInfoNode["Status"].isNull())
		videoInfo_.status = videoInfoNode["Status"].asString();
	if(!videoInfoNode["Title"].isNull())
		videoInfo_.title = videoInfoNode["Title"].asString();
	if(!videoInfoNode["VideoId"].isNull())
		videoInfo_.videoId = videoInfoNode["VideoId"].asString();

}

GetVideoPlayInfoResult::PlayInfo GetVideoPlayInfoResult::getPlayInfo()const
{
	return playInfo_;
}

GetVideoPlayInfoResult::VideoInfo GetVideoPlayInfoResult::getVideoInfo()const
{
	return videoInfo_;
}

