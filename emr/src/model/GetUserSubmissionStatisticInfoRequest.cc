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

#include <alibabacloud/emr/model/GetUserSubmissionStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetUserSubmissionStatisticInfoRequest;

GetUserSubmissionStatisticInfoRequest::GetUserSubmissionStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetUserSubmissionStatisticInfo")
{}

GetUserSubmissionStatisticInfoRequest::~GetUserSubmissionStatisticInfoRequest()
{}

std::string GetUserSubmissionStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetUserSubmissionStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setCoreParameter("FromDatetime", fromDatetime);
}

long GetUserSubmissionStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetUserSubmissionStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetUserSubmissionStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetUserSubmissionStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetUserSubmissionStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetUserSubmissionStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string GetUserSubmissionStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetUserSubmissionStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setCoreParameter("ToDatetime", toDatetime);
}

std::string GetUserSubmissionStatisticInfoRequest::getApplicationType()const
{
	return applicationType_;
}

void GetUserSubmissionStatisticInfoRequest::setApplicationType(const std::string& applicationType)
{
	applicationType_ = applicationType;
	setCoreParameter("ApplicationType", applicationType);
}

std::string GetUserSubmissionStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetUserSubmissionStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetUserSubmissionStatisticInfoRequest::getFinalStatus()const
{
	return finalStatus_;
}

void GetUserSubmissionStatisticInfoRequest::setFinalStatus(const std::string& finalStatus)
{
	finalStatus_ = finalStatus;
	setCoreParameter("FinalStatus", finalStatus);
}

