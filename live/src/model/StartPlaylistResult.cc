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

#include <alibabacloud/live/model/StartPlaylistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

StartPlaylistResult::StartPlaylistResult() :
	ServiceResult()
{}

StartPlaylistResult::StartPlaylistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartPlaylistResult::~StartPlaylistResult()
{}

void StartPlaylistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto streamInfoNode = value["StreamInfo"];
	if(!streamInfoNode["AppName"].isNull())
		streamInfo_.appName = streamInfoNode["AppName"].asString();
	if(!streamInfoNode["DomainName"].isNull())
		streamInfo_.domainName = streamInfoNode["DomainName"].asString();
	if(!streamInfoNode["StreamName"].isNull())
		streamInfo_.streamName = streamInfoNode["StreamName"].asString();
	auto allStreamsNode = streamInfoNode["Streams"]["Stream"];
	for (auto streamInfoNodeStreamsStream : allStreamsNode)
	{
		StreamInfo::Stream streamObject;
		if(!streamInfoNodeStreamsStream["PullFlvUrl"].isNull())
			streamObject.pullFlvUrl = streamInfoNodeStreamsStream["PullFlvUrl"].asString();
		if(!streamInfoNodeStreamsStream["PullM3U8Url"].isNull())
			streamObject.pullM3U8Url = streamInfoNodeStreamsStream["PullM3U8Url"].asString();
		if(!streamInfoNodeStreamsStream["PullRtmpUrl"].isNull())
			streamObject.pullRtmpUrl = streamInfoNodeStreamsStream["PullRtmpUrl"].asString();
		if(!streamInfoNodeStreamsStream["Quality"].isNull())
			streamObject.quality = streamInfoNodeStreamsStream["Quality"].asString();
		streamInfo_.streams.push_back(streamObject);
	}
	if(!value["ProgramId"].isNull())
		programId_ = value["ProgramId"].asString();

}

StartPlaylistResult::StreamInfo StartPlaylistResult::getStreamInfo()const
{
	return streamInfo_;
}

std::string StartPlaylistResult::getProgramId()const
{
	return programId_;
}

