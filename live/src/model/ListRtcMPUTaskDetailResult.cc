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

#include <alibabacloud/live/model/ListRtcMPUTaskDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListRtcMPUTaskDetailResult::ListRtcMPUTaskDetailResult() :
	ServiceResult()
{}

ListRtcMPUTaskDetailResult::ListRtcMPUTaskDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRtcMPUTaskDetailResult::~ListRtcMPUTaskDetailResult()
{}

void ListRtcMPUTaskDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMPUTasksNode = value["MPUTasks"]["mpuTask"];
	for (auto valueMPUTasksmpuTask : allMPUTasksNode)
	{
		MpuTask mPUTasksObject;
		if(!valueMPUTasksmpuTask["AppId"].isNull())
			mPUTasksObject.appId = valueMPUTasksmpuTask["AppId"].asString();
		if(!valueMPUTasksmpuTask["ChannelId"].isNull())
			mPUTasksObject.channelId = valueMPUTasksmpuTask["ChannelId"].asString();
		if(!valueMPUTasksmpuTask["TaskId"].isNull())
			mPUTasksObject.taskId = valueMPUTasksmpuTask["TaskId"].asString();
		if(!valueMPUTasksmpuTask["MixMode"].isNull())
			mPUTasksObject.mixMode = valueMPUTasksmpuTask["MixMode"].asString();
		if(!valueMPUTasksmpuTask["StreamURL"].isNull())
			mPUTasksObject.streamURL = valueMPUTasksmpuTask["StreamURL"].asString();
		if(!valueMPUTasksmpuTask["Region"].isNull())
			mPUTasksObject.region = valueMPUTasksmpuTask["Region"].asString();
		if(!valueMPUTasksmpuTask["MaxIdleTime"].isNull())
			mPUTasksObject.maxIdleTime = valueMPUTasksmpuTask["MaxIdleTime"].asString();
		auto allMultiStreamURLNode = valueMPUTasksmpuTask["MultiStreamURL"]["MultiStreamURLItem"];
		for (auto valueMPUTasksmpuTaskMultiStreamURLMultiStreamURLItem : allMultiStreamURLNode)
		{
			MpuTask::MultiStreamURLItem multiStreamURLObject;
			if(!valueMPUTasksmpuTaskMultiStreamURLMultiStreamURLItem["URL"].isNull())
				multiStreamURLObject.uRL = valueMPUTasksmpuTaskMultiStreamURLMultiStreamURLItem["URL"].asString();
			if(!valueMPUTasksmpuTaskMultiStreamURLMultiStreamURLItem["IsAliCdn"].isNull())
				multiStreamURLObject.isAliCdn = valueMPUTasksmpuTaskMultiStreamURLMultiStreamURLItem["IsAliCdn"].asString() == "true";
			mPUTasksObject.multiStreamURL.push_back(multiStreamURLObject);
		}
		auto singleSubParamsNode = value["SingleSubParams"];
		if(!singleSubParamsNode["SourceType"].isNull())
			mPUTasksObject.singleSubParams.sourceType = singleSubParamsNode["SourceType"].asString();
		if(!singleSubParamsNode["StreamType"].isNull())
			mPUTasksObject.singleSubParams.streamType = singleSubParamsNode["StreamType"].asString();
		if(!singleSubParamsNode["UserId"].isNull())
			mPUTasksObject.singleSubParams.userId = singleSubParamsNode["UserId"].asString();
		auto transcodeParamsNode = value["TranscodeParams"];
		auto allUserInfosNode = transcodeParamsNode["UserInfos"]["UserInfo"];
		for (auto transcodeParamsNodeUserInfosUserInfo : allUserInfosNode)
		{
			MpuTask::TranscodeParams::UserInfo userInfoObject;
			if(!transcodeParamsNodeUserInfosUserInfo["ChannelId"].isNull())
				userInfoObject.channelId = transcodeParamsNodeUserInfosUserInfo["ChannelId"].asString();
			if(!transcodeParamsNodeUserInfosUserInfo["UserId"].isNull())
				userInfoObject.userId = transcodeParamsNodeUserInfosUserInfo["UserId"].asString();
			if(!transcodeParamsNodeUserInfosUserInfo["SourceType"].isNull())
				userInfoObject.sourceType = transcodeParamsNodeUserInfosUserInfo["SourceType"].asString();
			if(!transcodeParamsNodeUserInfosUserInfo["StreamType"].isNull())
				userInfoObject.streamType = transcodeParamsNodeUserInfosUserInfo["StreamType"].asString();
			mPUTasksObject.transcodeParams.userInfos.push_back(userInfoObject);
		}
		auto backgroundNode = transcodeParamsNode["Background"];
		if(!backgroundNode["RenderMode"].isNull())
			mPUTasksObject.transcodeParams.background.renderMode = backgroundNode["RenderMode"].asString();
		if(!backgroundNode["URL"].isNull())
			mPUTasksObject.transcodeParams.background.uRL = backgroundNode["URL"].asString();
		auto encodeParamsNode = transcodeParamsNode["EncodeParams"];
		if(!encodeParamsNode["AudioOnly"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.audioOnly = encodeParamsNode["AudioOnly"].asString();
		if(!encodeParamsNode["AudioBitrate"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.audioBitrate = encodeParamsNode["AudioBitrate"].asString();
		if(!encodeParamsNode["AudioChannels"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.audioChannels = encodeParamsNode["AudioChannels"].asString();
		if(!encodeParamsNode["AudioSampleRate"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.audioSampleRate = encodeParamsNode["AudioSampleRate"].asString();
		if(!encodeParamsNode["VideoCodec"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.videoCodec = encodeParamsNode["VideoCodec"].asString();
		if(!encodeParamsNode["VideoBitrate"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.videoBitrate = encodeParamsNode["VideoBitrate"].asString();
		if(!encodeParamsNode["VideoFramerate"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.videoFramerate = encodeParamsNode["VideoFramerate"].asString();
		if(!encodeParamsNode["VideoGop"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.videoGop = encodeParamsNode["VideoGop"].asString();
		if(!encodeParamsNode["VideoHeight"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.videoHeight = encodeParamsNode["VideoHeight"].asString();
		if(!encodeParamsNode["VideoWidth"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.videoWidth = encodeParamsNode["VideoWidth"].asString();
		if(!encodeParamsNode["EnhancedParam"].isNull())
			mPUTasksObject.transcodeParams.encodeParams.enhancedParam = encodeParamsNode["EnhancedParam"].asString();
		auto layoutNode = transcodeParamsNode["Layout"];
		if(!layoutNode["LayoutMode"].isNull())
			mPUTasksObject.transcodeParams.layout.layoutMode = layoutNode["LayoutMode"].asString();
		auto allUserPanesNode = layoutNode["UserPanes"]["UserPane"];
		for (auto layoutNodeUserPanesUserPane : allUserPanesNode)
		{
			MpuTask::TranscodeParams::Layout::UserPane userPaneObject;
			if(!layoutNodeUserPanesUserPane["Height"].isNull())
				userPaneObject.height = layoutNodeUserPanesUserPane["Height"].asString();
			if(!layoutNodeUserPanesUserPane["Width"].isNull())
				userPaneObject.width = layoutNodeUserPanesUserPane["Width"].asString();
			if(!layoutNodeUserPanesUserPane["X"].isNull())
				userPaneObject.x = layoutNodeUserPanesUserPane["X"].asString();
			if(!layoutNodeUserPanesUserPane["Y"].isNull())
				userPaneObject.y = layoutNodeUserPanesUserPane["Y"].asString();
			if(!layoutNodeUserPanesUserPane["ZOrder"].isNull())
				userPaneObject.zOrder = layoutNodeUserPanesUserPane["ZOrder"].asString();
			if(!layoutNodeUserPanesUserPane["BackgroundImageUrl"].isNull())
				userPaneObject.backgroundImageUrl = layoutNodeUserPanesUserPane["BackgroundImageUrl"].asString();
			if(!layoutNodeUserPanesUserPane["RenderMode"].isNull())
				userPaneObject.renderMode = layoutNodeUserPanesUserPane["RenderMode"].asString();
			auto userInfo1Node = value["UserInfo"];
			if(!userInfo1Node["SourceType"].isNull())
				userPaneObject.userInfo1.sourceType = userInfo1Node["SourceType"].asString();
			if(!userInfo1Node["ChannelId"].isNull())
				userPaneObject.userInfo1.channelId = userInfo1Node["ChannelId"].asString();
			if(!userInfo1Node["UserId"].isNull())
				userPaneObject.userInfo1.userId = userInfo1Node["UserId"].asString();
			mPUTasksObject.transcodeParams.layout.userPanes.push_back(userPaneObject);
		}
		auto maxVideoUserNode = layoutNode["MaxVideoUser"];
		if(!maxVideoUserNode["SourceType"].isNull())
			mPUTasksObject.transcodeParams.layout.maxVideoUser.sourceType = maxVideoUserNode["SourceType"].asString();
		if(!maxVideoUserNode["StreamType"].isNull())
			mPUTasksObject.transcodeParams.layout.maxVideoUser.streamType = maxVideoUserNode["StreamType"].asString();
		if(!maxVideoUserNode["ChannelId"].isNull())
			mPUTasksObject.transcodeParams.layout.maxVideoUser.channelId = maxVideoUserNode["ChannelId"].asString();
		if(!maxVideoUserNode["UserId"].isNull())
			mPUTasksObject.transcodeParams.layout.maxVideoUser.userId = maxVideoUserNode["UserId"].asString();
		auto seiParamsNode = value["SeiParams"];
		if(!seiParamsNode["PayloadType"].isNull())
			mPUTasksObject.seiParams.payloadType = seiParamsNode["PayloadType"].asString();
		auto layoutVolumeNode = seiParamsNode["LayoutVolume"];
		if(!layoutVolumeNode["FollowIdr"].isNull())
			mPUTasksObject.seiParams.layoutVolume.followIdr = layoutVolumeNode["FollowIdr"].asString();
		if(!layoutVolumeNode["Interval"].isNull())
			mPUTasksObject.seiParams.layoutVolume.interval = layoutVolumeNode["Interval"].asString();
		auto passThroughNode = seiParamsNode["PassThrough"];
		if(!passThroughNode["FollowIdr"].isNull())
			mPUTasksObject.seiParams.passThrough.followIdr = passThroughNode["FollowIdr"].asString();
		if(!passThroughNode["Interval"].isNull())
			mPUTasksObject.seiParams.passThrough.interval = passThroughNode["Interval"].asString();
		if(!passThroughNode["PayloadContent"].isNull())
			mPUTasksObject.seiParams.passThrough.payloadContent = passThroughNode["PayloadContent"].asString();
		if(!passThroughNode["PayloadContentKey"].isNull())
			mPUTasksObject.seiParams.passThrough.payloadContentKey = passThroughNode["PayloadContentKey"].asString();
		mPUTasks_.push_back(mPUTasksObject);
	}

}

std::vector<ListRtcMPUTaskDetailResult::MpuTask> ListRtcMPUTaskDetailResult::getMPUTasks()const
{
	return mPUTasks_;
}

