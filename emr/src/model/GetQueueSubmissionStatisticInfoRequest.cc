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

#include <alibabacloud/emr/model/GetQueueSubmissionStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetQueueSubmissionStatisticInfoRequest;

GetQueueSubmissionStatisticInfoRequest::GetQueueSubmissionStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetQueueSubmissionStatisticInfo")
{}

GetQueueSubmissionStatisticInfoRequest::~GetQueueSubmissionStatisticInfoRequest()
{}

std::string GetQueueSubmissionStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetQueueSubmissionStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setCoreParameter("FromDatetime", std::to_string(fromDatetime));
}

long GetQueueSubmissionStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetQueueSubmissionStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetQueueSubmissionStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetQueueSubmissionStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string GetQueueSubmissionStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetQueueSubmissionStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string GetQueueSubmissionStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetQueueSubmissionStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setCoreParameter("ToDatetime", std::to_string(toDatetime));
}

std::string GetQueueSubmissionStatisticInfoRequest::getApplicationType()const
{
	return applicationType_;
}

void GetQueueSubmissionStatisticInfoRequest::setApplicationType(const std::string& applicationType)
{
	applicationType_ = applicationType;
	setCoreParameter("ApplicationType", std::to_string(applicationType));
}

std::string GetQueueSubmissionStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetQueueSubmissionStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string GetQueueSubmissionStatisticInfoRequest::getFinalStatus()const
{
	return finalStatus_;
}

void GetQueueSubmissionStatisticInfoRequest::setFinalStatus(const std::string& finalStatus)
{
	finalStatus_ = finalStatus;
	setCoreParameter("FinalStatus", std::to_string(finalStatus));
}

