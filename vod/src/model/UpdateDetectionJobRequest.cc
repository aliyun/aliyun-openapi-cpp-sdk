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

#include <alibabacloud/vod/model/UpdateDetectionJobRequest.h>

using AlibabaCloud::Vod::Model::UpdateDetectionJobRequest;

UpdateDetectionJobRequest::UpdateDetectionJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateDetectionJob")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDetectionJobRequest::~UpdateDetectionJobRequest()
{}

std::string UpdateDetectionJobRequest::getWhiteListUrls()const
{
	return whiteListUrls_;
}

void UpdateDetectionJobRequest::setWhiteListUrls(const std::string& whiteListUrls)
{
	whiteListUrls_ = whiteListUrls;
	setParameter("WhiteListUrls", whiteListUrls);
}

std::string UpdateDetectionJobRequest::getCopyrightEndTime()const
{
	return copyrightEndTime_;
}

void UpdateDetectionJobRequest::setCopyrightEndTime(const std::string& copyrightEndTime)
{
	copyrightEndTime_ = copyrightEndTime;
	setParameter("CopyrightEndTime", copyrightEndTime);
}

std::string UpdateDetectionJobRequest::getCopyrightStatus()const
{
	return copyrightStatus_;
}

void UpdateDetectionJobRequest::setCopyrightStatus(const std::string& copyrightStatus)
{
	copyrightStatus_ = copyrightStatus;
	setParameter("CopyrightStatus", copyrightStatus);
}

std::string UpdateDetectionJobRequest::getCopyrightBeginTime()const
{
	return copyrightBeginTime_;
}

void UpdateDetectionJobRequest::setCopyrightBeginTime(const std::string& copyrightBeginTime)
{
	copyrightBeginTime_ = copyrightBeginTime;
	setParameter("CopyrightBeginTime", copyrightBeginTime);
}

int UpdateDetectionJobRequest::getDuration()const
{
	return duration_;
}

void UpdateDetectionJobRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string UpdateDetectionJobRequest::getJobId()const
{
	return jobId_;
}

void UpdateDetectionJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string UpdateDetectionJobRequest::getEndTime()const
{
	return endTime_;
}

void UpdateDetectionJobRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string UpdateDetectionJobRequest::getBeginTime()const
{
	return beginTime_;
}

void UpdateDetectionJobRequest::setBeginTime(const std::string& beginTime)
{
	beginTime_ = beginTime;
	setParameter("BeginTime", beginTime);
}

std::string UpdateDetectionJobRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateDetectionJobRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string UpdateDetectionJobRequest::getCopyrightFile()const
{
	return copyrightFile_;
}

void UpdateDetectionJobRequest::setCopyrightFile(const std::string& copyrightFile)
{
	copyrightFile_ = copyrightFile;
	setParameter("CopyrightFile", copyrightFile);
}

