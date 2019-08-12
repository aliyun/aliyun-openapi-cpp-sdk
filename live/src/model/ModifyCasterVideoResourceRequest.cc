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

#include <alibabacloud/live/model/ModifyCasterVideoResourceRequest.h>

using AlibabaCloud::Live::Model::ModifyCasterVideoResourceRequest;

ModifyCasterVideoResourceRequest::ModifyCasterVideoResourceRequest() :
	RpcServiceRequest("live", "2016-11-01", "ModifyCasterVideoResource")
{}

ModifyCasterVideoResourceRequest::~ModifyCasterVideoResourceRequest()
{}

std::string ModifyCasterVideoResourceRequest::getResourceId()const
{
	return resourceId_;
}

void ModifyCasterVideoResourceRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string ModifyCasterVideoResourceRequest::getVodUrl()const
{
	return vodUrl_;
}

void ModifyCasterVideoResourceRequest::setVodUrl(const std::string& vodUrl)
{
	vodUrl_ = vodUrl;
	setCoreParameter("VodUrl", vodUrl);
}

std::string ModifyCasterVideoResourceRequest::getCasterId()const
{
	return casterId_;
}

void ModifyCasterVideoResourceRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

int ModifyCasterVideoResourceRequest::getEndOffset()const
{
	return endOffset_;
}

void ModifyCasterVideoResourceRequest::setEndOffset(int endOffset)
{
	endOffset_ = endOffset;
	setCoreParameter("EndOffset", endOffset);
}

long ModifyCasterVideoResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCasterVideoResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyCasterVideoResourceRequest::getMaterialId()const
{
	return materialId_;
}

void ModifyCasterVideoResourceRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setCoreParameter("MaterialId", materialId);
}

int ModifyCasterVideoResourceRequest::getBeginOffset()const
{
	return beginOffset_;
}

void ModifyCasterVideoResourceRequest::setBeginOffset(int beginOffset)
{
	beginOffset_ = beginOffset;
	setCoreParameter("BeginOffset", beginOffset);
}

std::string ModifyCasterVideoResourceRequest::getLiveStreamUrl()const
{
	return liveStreamUrl_;
}

void ModifyCasterVideoResourceRequest::setLiveStreamUrl(const std::string& liveStreamUrl)
{
	liveStreamUrl_ = liveStreamUrl;
	setCoreParameter("LiveStreamUrl", liveStreamUrl);
}

std::string ModifyCasterVideoResourceRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCasterVideoResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ModifyCasterVideoResourceRequest::getPtsCallbackInterval()const
{
	return ptsCallbackInterval_;
}

void ModifyCasterVideoResourceRequest::setPtsCallbackInterval(int ptsCallbackInterval)
{
	ptsCallbackInterval_ = ptsCallbackInterval;
	setCoreParameter("PtsCallbackInterval", ptsCallbackInterval);
}

std::string ModifyCasterVideoResourceRequest::getResourceName()const
{
	return resourceName_;
}

void ModifyCasterVideoResourceRequest::setResourceName(const std::string& resourceName)
{
	resourceName_ = resourceName;
	setCoreParameter("ResourceName", resourceName);
}

int ModifyCasterVideoResourceRequest::getRepeatNum()const
{
	return repeatNum_;
}

void ModifyCasterVideoResourceRequest::setRepeatNum(int repeatNum)
{
	repeatNum_ = repeatNum;
	setCoreParameter("RepeatNum", repeatNum);
}

