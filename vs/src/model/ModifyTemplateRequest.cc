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

#include <alibabacloud/vs/model/ModifyTemplateRequest.h>

using AlibabaCloud::Vs::Model::ModifyTemplateRequest;

ModifyTemplateRequest::ModifyTemplateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ModifyTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyTemplateRequest::~ModifyTemplateRequest()
{}

std::string ModifyTemplateRequest::getHlsTs()const
{
	return hlsTs_;
}

void ModifyTemplateRequest::setHlsTs(const std::string& hlsTs)
{
	hlsTs_ = hlsTs;
	setParameter("HlsTs", hlsTs);
}

std::string ModifyTemplateRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void ModifyTemplateRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setParameter("OssEndpoint", ossEndpoint);
}

std::string ModifyTemplateRequest::getDescription()const
{
	return description_;
}

void ModifyTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyTemplateRequest::getOssFilePrefix()const
{
	return ossFilePrefix_;
}

void ModifyTemplateRequest::setOssFilePrefix(const std::string& ossFilePrefix)
{
	ossFilePrefix_ = ossFilePrefix;
	setParameter("OssFilePrefix", ossFilePrefix);
}

std::string ModifyTemplateRequest::getJpgOverwrite()const
{
	return jpgOverwrite_;
}

void ModifyTemplateRequest::setJpgOverwrite(const std::string& jpgOverwrite)
{
	jpgOverwrite_ = jpgOverwrite;
	setParameter("JpgOverwrite", jpgOverwrite);
}

std::string ModifyTemplateRequest::getStartTime()const
{
	return startTime_;
}

void ModifyTemplateRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string ModifyTemplateRequest::getJpgOnDemand()const
{
	return jpgOnDemand_;
}

void ModifyTemplateRequest::setJpgOnDemand(const std::string& jpgOnDemand)
{
	jpgOnDemand_ = jpgOnDemand;
	setParameter("JpgOnDemand", jpgOnDemand);
}

std::string ModifyTemplateRequest::getId()const
{
	return id_;
}

void ModifyTemplateRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

long ModifyTemplateRequest::getRetention()const
{
	return retention_;
}

void ModifyTemplateRequest::setRetention(long retention)
{
	retention_ = retention;
	setParameter("Retention", std::to_string(retention));
}

std::string ModifyTemplateRequest::getShowLog()const
{
	return showLog_;
}

void ModifyTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ModifyTemplateRequest::getHlsM3u8()const
{
	return hlsM3u8_;
}

void ModifyTemplateRequest::setHlsM3u8(const std::string& hlsM3u8)
{
	hlsM3u8_ = hlsM3u8;
	setParameter("HlsM3u8", hlsM3u8);
}

std::string ModifyTemplateRequest::getOssBucket()const
{
	return ossBucket_;
}

void ModifyTemplateRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setParameter("OssBucket", ossBucket);
}

std::string ModifyTemplateRequest::getTransConfigsJSON()const
{
	return transConfigsJSON_;
}

void ModifyTemplateRequest::setTransConfigsJSON(const std::string& transConfigsJSON)
{
	transConfigsJSON_ = transConfigsJSON;
	setParameter("TransConfigsJSON", transConfigsJSON);
}

std::string ModifyTemplateRequest::getEndTime()const
{
	return endTime_;
}

void ModifyTemplateRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string ModifyTemplateRequest::getTrigger()const
{
	return trigger_;
}

void ModifyTemplateRequest::setTrigger(const std::string& trigger)
{
	trigger_ = trigger;
	setParameter("Trigger", trigger);
}

long ModifyTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyTemplateRequest::getJpgSequence()const
{
	return jpgSequence_;
}

void ModifyTemplateRequest::setJpgSequence(const std::string& jpgSequence)
{
	jpgSequence_ = jpgSequence;
	setParameter("JpgSequence", jpgSequence);
}

std::string ModifyTemplateRequest::getMp4()const
{
	return mp4_;
}

void ModifyTemplateRequest::setMp4(const std::string& mp4)
{
	mp4_ = mp4;
	setParameter("Mp4", mp4);
}

std::string ModifyTemplateRequest::getFlv()const
{
	return flv_;
}

void ModifyTemplateRequest::setFlv(const std::string& flv)
{
	flv_ = flv;
	setParameter("Flv", flv);
}

std::string ModifyTemplateRequest::getName()const
{
	return name_;
}

void ModifyTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyTemplateRequest::getCallback()const
{
	return callback_;
}

void ModifyTemplateRequest::setCallback(const std::string& callback)
{
	callback_ = callback;
	setParameter("Callback", callback);
}

long ModifyTemplateRequest::getInterval()const
{
	return interval_;
}

void ModifyTemplateRequest::setInterval(long interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

std::string ModifyTemplateRequest::getFileFormat()const
{
	return fileFormat_;
}

void ModifyTemplateRequest::setFileFormat(const std::string& fileFormat)
{
	fileFormat_ = fileFormat;
	setParameter("FileFormat", fileFormat);
}

std::string ModifyTemplateRequest::getRegion()const
{
	return region_;
}

void ModifyTemplateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

