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

#include <alibabacloud/live/model/SetCasterConfigRequest.h>

using AlibabaCloud::Live::Model::SetCasterConfigRequest;

SetCasterConfigRequest::SetCasterConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetCasterConfig")
{}

SetCasterConfigRequest::~SetCasterConfigRequest()
{}

std::string SetCasterConfigRequest::getSideOutputUrl()const
{
	return sideOutputUrl_;
}

void SetCasterConfigRequest::setSideOutputUrl(const std::string& sideOutputUrl)
{
	sideOutputUrl_ = sideOutputUrl;
	setCoreParameter("SideOutputUrl", sideOutputUrl);
}

std::string SetCasterConfigRequest::getCasterId()const
{
	return casterId_;
}

void SetCasterConfigRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

int SetCasterConfigRequest::getChannelEnable()const
{
	return channelEnable_;
}

void SetCasterConfigRequest::setChannelEnable(int channelEnable)
{
	channelEnable_ = channelEnable;
	setCoreParameter("ChannelEnable", channelEnable);
}

std::string SetCasterConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetCasterConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int SetCasterConfigRequest::getProgramEffect()const
{
	return programEffect_;
}

void SetCasterConfigRequest::setProgramEffect(int programEffect)
{
	programEffect_ = programEffect;
	setCoreParameter("ProgramEffect", programEffect);
}

std::string SetCasterConfigRequest::getProgramName()const
{
	return programName_;
}

void SetCasterConfigRequest::setProgramName(const std::string& programName)
{
	programName_ = programName;
	setCoreParameter("ProgramName", programName);
}

long SetCasterConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetCasterConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetCasterConfigRequest::getRecordConfig()const
{
	return recordConfig_;
}

void SetCasterConfigRequest::setRecordConfig(const std::string& recordConfig)
{
	recordConfig_ = recordConfig;
	setCoreParameter("RecordConfig", recordConfig);
}

std::string SetCasterConfigRequest::getUrgentMaterialId()const
{
	return urgentMaterialId_;
}

void SetCasterConfigRequest::setUrgentMaterialId(const std::string& urgentMaterialId)
{
	urgentMaterialId_ = urgentMaterialId;
	setCoreParameter("UrgentMaterialId", urgentMaterialId);
}

std::string SetCasterConfigRequest::getTranscodeConfig()const
{
	return transcodeConfig_;
}

void SetCasterConfigRequest::setTranscodeConfig(const std::string& transcodeConfig)
{
	transcodeConfig_ = transcodeConfig;
	setCoreParameter("TranscodeConfig", transcodeConfig);
}

float SetCasterConfigRequest::getDelay()const
{
	return delay_;
}

void SetCasterConfigRequest::setDelay(float delay)
{
	delay_ = delay;
	setCoreParameter("Delay", delay);
}

std::string SetCasterConfigRequest::getRegionId()const
{
	return regionId_;
}

void SetCasterConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetCasterConfigRequest::getCasterName()const
{
	return casterName_;
}

void SetCasterConfigRequest::setCasterName(const std::string& casterName)
{
	casterName_ = casterName;
	setCoreParameter("CasterName", casterName);
}

std::string SetCasterConfigRequest::getCallbackUrl()const
{
	return callbackUrl_;
}

void SetCasterConfigRequest::setCallbackUrl(const std::string& callbackUrl)
{
	callbackUrl_ = callbackUrl;
	setCoreParameter("CallbackUrl", callbackUrl);
}

