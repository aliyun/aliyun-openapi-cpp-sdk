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

#include <alibabacloud/vod/model/SubmitDetectionJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitDetectionJobRequest;

SubmitDetectionJobRequest::SubmitDetectionJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitDetectionJob")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitDetectionJobRequest::~SubmitDetectionJobRequest()
{}

std::string SubmitDetectionJobRequest::getWhiteListUrls()const
{
	return whiteListUrls_;
}

void SubmitDetectionJobRequest::setWhiteListUrls(const std::string& whiteListUrls)
{
	whiteListUrls_ = whiteListUrls;
	setParameter("WhiteListUrls", whiteListUrls);
}

std::string SubmitDetectionJobRequest::getCopyrightEndTime()const
{
	return copyrightEndTime_;
}

void SubmitDetectionJobRequest::setCopyrightEndTime(const std::string& copyrightEndTime)
{
	copyrightEndTime_ = copyrightEndTime;
	setParameter("CopyrightEndTime", copyrightEndTime);
}

std::string SubmitDetectionJobRequest::getCopyrightStatus()const
{
	return copyrightStatus_;
}

void SubmitDetectionJobRequest::setCopyrightStatus(const std::string& copyrightStatus)
{
	copyrightStatus_ = copyrightStatus;
	setParameter("CopyrightStatus", copyrightStatus);
}

std::string SubmitDetectionJobRequest::getCopyrightBeginTime()const
{
	return copyrightBeginTime_;
}

void SubmitDetectionJobRequest::setCopyrightBeginTime(const std::string& copyrightBeginTime)
{
	copyrightBeginTime_ = copyrightBeginTime;
	setParameter("CopyrightBeginTime", copyrightBeginTime);
}

int SubmitDetectionJobRequest::getDuration()const
{
	return duration_;
}

void SubmitDetectionJobRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string SubmitDetectionJobRequest::getEndTime()const
{
	return endTime_;
}

void SubmitDetectionJobRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string SubmitDetectionJobRequest::getVideoId()const
{
	return videoId_;
}

void SubmitDetectionJobRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

std::string SubmitDetectionJobRequest::getBeginTime()const
{
	return beginTime_;
}

void SubmitDetectionJobRequest::setBeginTime(const std::string& beginTime)
{
	beginTime_ = beginTime;
	setParameter("BeginTime", beginTime);
}

bool SubmitDetectionJobRequest::getShortVideo()const
{
	return shortVideo_;
}

void SubmitDetectionJobRequest::setShortVideo(bool shortVideo)
{
	shortVideo_ = shortVideo;
	setParameter("ShortVideo", shortVideo ? "true" : "false");
}

std::string SubmitDetectionJobRequest::getTemplateId()const
{
	return templateId_;
}

void SubmitDetectionJobRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string SubmitDetectionJobRequest::getCopyrightFile()const
{
	return copyrightFile_;
}

void SubmitDetectionJobRequest::setCopyrightFile(const std::string& copyrightFile)
{
	copyrightFile_ = copyrightFile;
	setParameter("CopyrightFile", copyrightFile);
}

