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

#include <alibabacloud/live/model/DescribeCasterConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCasterConfigResult::DescribeCasterConfigResult() :
	ServiceResult()
{}

DescribeCasterConfigResult::DescribeCasterConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCasterConfigResult::~DescribeCasterConfigResult()
{}

void DescribeCasterConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSyncGroupsConfigNode = value["SyncGroupsConfig"]["SyncGroup"];
	for (auto valueSyncGroupsConfigSyncGroup : allSyncGroupsConfigNode)
	{
		SyncGroup syncGroupsConfigObject;
		if(!valueSyncGroupsConfigSyncGroup["HostResourceId"].isNull())
			syncGroupsConfigObject.hostResourceId = valueSyncGroupsConfigSyncGroup["HostResourceId"].asString();
		if(!valueSyncGroupsConfigSyncGroup["Mode"].isNull())
			syncGroupsConfigObject.mode = std::stoi(valueSyncGroupsConfigSyncGroup["Mode"].asString());
		auto allResourceIds = value["ResourceIds"]["ResourceId"];
		for (auto value : allResourceIds)
			syncGroupsConfigObject.resourceIds.push_back(value.asString());
		syncGroupsConfig_.push_back(syncGroupsConfigObject);
	}
	auto recordConfigNode = value["RecordConfig"];
	if(!recordConfigNode["OnDemand"].isNull())
		recordConfig_.onDemand = std::stoi(recordConfigNode["OnDemand"].asString());
	if(!recordConfigNode["OssBucket"].isNull())
		recordConfig_.ossBucket = recordConfigNode["OssBucket"].asString();
	if(!recordConfigNode["OssEndpoint"].isNull())
		recordConfig_.ossEndpoint = recordConfigNode["OssEndpoint"].asString();
	auto allRecordFormatNode = recordConfigNode["RecordFormat"]["RecordFormatItem"];
	for (auto recordConfigNodeRecordFormatRecordFormatItem : allRecordFormatNode)
	{
		RecordConfig::RecordFormatItem recordFormatItemObject;
		if(!recordConfigNodeRecordFormatRecordFormatItem["CycleDuration"].isNull())
			recordFormatItemObject.cycleDuration = std::stoi(recordConfigNodeRecordFormatRecordFormatItem["CycleDuration"].asString());
		if(!recordConfigNodeRecordFormatRecordFormatItem["Format"].isNull())
			recordFormatItemObject.format = recordConfigNodeRecordFormatRecordFormatItem["Format"].asString();
		if(!recordConfigNodeRecordFormatRecordFormatItem["OssObjectPrefix"].isNull())
			recordFormatItemObject.ossObjectPrefix = recordConfigNodeRecordFormatRecordFormatItem["OssObjectPrefix"].asString();
		if(!recordConfigNodeRecordFormatRecordFormatItem["SliceOssObjectPrefix"].isNull())
			recordFormatItemObject.sliceOssObjectPrefix = recordConfigNodeRecordFormatRecordFormatItem["SliceOssObjectPrefix"].asString();
		recordConfig_.recordFormat.push_back(recordFormatItemObject);
	}
	auto transcodeConfigNode = value["TranscodeConfig"];
	if(!transcodeConfigNode["CasterTemplate"].isNull())
		transcodeConfig_.casterTemplate = transcodeConfigNode["CasterTemplate"].asString();
	auto customParamsNode = transcodeConfigNode["CustomParams"];
	auto videoNode = customParamsNode["video"];
	if(!videoNode["fps"].isNull())
		transcodeConfig_.customParams.video.fps = std::stoi(videoNode["fps"].asString());
	if(!videoNode["bitrate"].isNull())
		transcodeConfig_.customParams.video.bitrate = std::stoi(videoNode["bitrate"].asString());
	if(!videoNode["width"].isNull())
		transcodeConfig_.customParams.video.width = std::stoi(videoNode["width"].asString());
	if(!videoNode["height"].isNull())
		transcodeConfig_.customParams.video.height = std::stoi(videoNode["height"].asString());
		auto allLiveTemplateIds = transcodeConfigNode["LiveTemplateIds"]["LocationId"];
		for (auto value : allLiveTemplateIds)
			transcodeConfig_.liveTemplateIds.push_back(value.asString());
	if(!value["AutoSwitchUrgentConfig"].isNull())
		autoSwitchUrgentConfig_ = value["AutoSwitchUrgentConfig"].asString();
	if(!value["AutoSwitchUrgentOn"].isNull())
		autoSwitchUrgentOn_ = value["AutoSwitchUrgentOn"].asString();
	if(!value["CallbackUrl"].isNull())
		callbackUrl_ = value["CallbackUrl"].asString();
	if(!value["CasterId"].isNull())
		casterId_ = value["CasterId"].asString();
	if(!value["CasterName"].isNull())
		casterName_ = value["CasterName"].asString();
	if(!value["ChannelEnable"].isNull())
		channelEnable_ = std::stoi(value["ChannelEnable"].asString());
	if(!value["Delay"].isNull())
		delay_ = std::stof(value["Delay"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["ProgramEffect"].isNull())
		programEffect_ = std::stoi(value["ProgramEffect"].asString());
	if(!value["ProgramName"].isNull())
		programName_ = value["ProgramName"].asString();
	if(!value["SideOutputUrl"].isNull())
		sideOutputUrl_ = value["SideOutputUrl"].asString();
	if(!value["SideOutputUrlList"].isNull())
		sideOutputUrlList_ = value["SideOutputUrlList"].asString();
	if(!value["UrgentImageId"].isNull())
		urgentImageId_ = value["UrgentImageId"].asString();
	if(!value["UrgentImageUrl"].isNull())
		urgentImageUrl_ = value["UrgentImageUrl"].asString();
	if(!value["UrgentLiveStreamUrl"].isNull())
		urgentLiveStreamUrl_ = value["UrgentLiveStreamUrl"].asString();
	if(!value["UrgentMaterialId"].isNull())
		urgentMaterialId_ = value["UrgentMaterialId"].asString();

}

int DescribeCasterConfigResult::getChannelEnable()const
{
	return channelEnable_;
}

std::string DescribeCasterConfigResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeCasterConfigResult::getAutoSwitchUrgentConfig()const
{
	return autoSwitchUrgentConfig_;
}

std::string DescribeCasterConfigResult::getUrgentImageUrl()const
{
	return urgentImageUrl_;
}

std::string DescribeCasterConfigResult::getSideOutputUrlList()const
{
	return sideOutputUrlList_;
}

std::string DescribeCasterConfigResult::getUrgentMaterialId()const
{
	return urgentMaterialId_;
}

DescribeCasterConfigResult::TranscodeConfig DescribeCasterConfigResult::getTranscodeConfig()const
{
	return transcodeConfig_;
}

std::string DescribeCasterConfigResult::getProgramName()const
{
	return programName_;
}

std::string DescribeCasterConfigResult::getUrgentImageId()const
{
	return urgentImageId_;
}

float DescribeCasterConfigResult::getDelay()const
{
	return delay_;
}

std::string DescribeCasterConfigResult::getCallbackUrl()const
{
	return callbackUrl_;
}

std::string DescribeCasterConfigResult::getSideOutputUrl()const
{
	return sideOutputUrl_;
}

std::string DescribeCasterConfigResult::getCasterName()const
{
	return casterName_;
}

int DescribeCasterConfigResult::getProgramEffect()const
{
	return programEffect_;
}

std::string DescribeCasterConfigResult::getAutoSwitchUrgentOn()const
{
	return autoSwitchUrgentOn_;
}

std::vector<DescribeCasterConfigResult::SyncGroup> DescribeCasterConfigResult::getSyncGroupsConfig()const
{
	return syncGroupsConfig_;
}

std::string DescribeCasterConfigResult::getCasterId()const
{
	return casterId_;
}

DescribeCasterConfigResult::RecordConfig DescribeCasterConfigResult::getRecordConfig()const
{
	return recordConfig_;
}

std::string DescribeCasterConfigResult::getUrgentLiveStreamUrl()const
{
	return urgentLiveStreamUrl_;
}

