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

#include <alibabacloud/vs/model/CreateTemplateRequest.h>

using AlibabaCloud::Vs::Model::CreateTemplateRequest;

CreateTemplateRequest::CreateTemplateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTemplateRequest::~CreateTemplateRequest()
{}

std::string CreateTemplateRequest::getHlsTs()const
{
	return hlsTs_;
}

void CreateTemplateRequest::setHlsTs(const std::string& hlsTs)
{
	hlsTs_ = hlsTs;
	setParameter("HlsTs", hlsTs);
}

std::string CreateTemplateRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void CreateTemplateRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setParameter("OssEndpoint", ossEndpoint);
}

std::string CreateTemplateRequest::getDescription()const
{
	return description_;
}

void CreateTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateTemplateRequest::getOssFilePrefix()const
{
	return ossFilePrefix_;
}

void CreateTemplateRequest::setOssFilePrefix(const std::string& ossFilePrefix)
{
	ossFilePrefix_ = ossFilePrefix;
	setParameter("OssFilePrefix", ossFilePrefix);
}

std::string CreateTemplateRequest::getJpgOverwrite()const
{
	return jpgOverwrite_;
}

void CreateTemplateRequest::setJpgOverwrite(const std::string& jpgOverwrite)
{
	jpgOverwrite_ = jpgOverwrite;
	setParameter("JpgOverwrite", jpgOverwrite);
}

std::string CreateTemplateRequest::getStartTime()const
{
	return startTime_;
}

void CreateTemplateRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string CreateTemplateRequest::getType()const
{
	return type_;
}

void CreateTemplateRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateTemplateRequest::getJpgOnDemand()const
{
	return jpgOnDemand_;
}

void CreateTemplateRequest::setJpgOnDemand(const std::string& jpgOnDemand)
{
	jpgOnDemand_ = jpgOnDemand;
	setParameter("JpgOnDemand", jpgOnDemand);
}

long CreateTemplateRequest::getRetention()const
{
	return retention_;
}

void CreateTemplateRequest::setRetention(long retention)
{
	retention_ = retention;
	setParameter("Retention", std::to_string(retention));
}

std::string CreateTemplateRequest::getShowLog()const
{
	return showLog_;
}

void CreateTemplateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateTemplateRequest::getHlsM3u8()const
{
	return hlsM3u8_;
}

void CreateTemplateRequest::setHlsM3u8(const std::string& hlsM3u8)
{
	hlsM3u8_ = hlsM3u8;
	setParameter("HlsM3u8", hlsM3u8);
}

std::string CreateTemplateRequest::getOssBucket()const
{
	return ossBucket_;
}

void CreateTemplateRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setParameter("OssBucket", ossBucket);
}

std::string CreateTemplateRequest::getTransConfigsJSON()const
{
	return transConfigsJSON_;
}

void CreateTemplateRequest::setTransConfigsJSON(const std::string& transConfigsJSON)
{
	transConfigsJSON_ = transConfigsJSON;
	setParameter("TransConfigsJSON", transConfigsJSON);
}

std::string CreateTemplateRequest::getEndTime()const
{
	return endTime_;
}

void CreateTemplateRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string CreateTemplateRequest::getTrigger()const
{
	return trigger_;
}

void CreateTemplateRequest::setTrigger(const std::string& trigger)
{
	trigger_ = trigger;
	setParameter("Trigger", trigger);
}

long CreateTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTemplateRequest::getJpgSequence()const
{
	return jpgSequence_;
}

void CreateTemplateRequest::setJpgSequence(const std::string& jpgSequence)
{
	jpgSequence_ = jpgSequence;
	setParameter("JpgSequence", jpgSequence);
}

std::string CreateTemplateRequest::getMp4()const
{
	return mp4_;
}

void CreateTemplateRequest::setMp4(const std::string& mp4)
{
	mp4_ = mp4;
	setParameter("Mp4", mp4);
}

std::string CreateTemplateRequest::getFlv()const
{
	return flv_;
}

void CreateTemplateRequest::setFlv(const std::string& flv)
{
	flv_ = flv;
	setParameter("Flv", flv);
}

std::string CreateTemplateRequest::getName()const
{
	return name_;
}

void CreateTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateTemplateRequest::getCallback()const
{
	return callback_;
}

void CreateTemplateRequest::setCallback(const std::string& callback)
{
	callback_ = callback;
	setParameter("Callback", callback);
}

long CreateTemplateRequest::getInterval()const
{
	return interval_;
}

void CreateTemplateRequest::setInterval(long interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

std::string CreateTemplateRequest::getFileFormat()const
{
	return fileFormat_;
}

void CreateTemplateRequest::setFileFormat(const std::string& fileFormat)
{
	fileFormat_ = fileFormat;
	setParameter("FileFormat", fileFormat);
}

std::string CreateTemplateRequest::getRegion()const
{
	return region_;
}

void CreateTemplateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

