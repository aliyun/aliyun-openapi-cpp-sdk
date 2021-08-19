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

#include <alibabacloud/ehpc/model/GetSchedulerInfoRequest.h>

using AlibabaCloud::EHPC::Model::GetSchedulerInfoRequest;

GetSchedulerInfoRequest::GetSchedulerInfoRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetSchedulerInfo")
{
	setMethod(HttpRequest::Method::Get);
}

GetSchedulerInfoRequest::~GetSchedulerInfoRequest()
{}

std::string GetSchedulerInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetSchedulerInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetSchedulerInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetSchedulerInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<GetSchedulerInfoRequest::Scheduler> GetSchedulerInfoRequest::getScheduler()const
{
	return scheduler_;
}

void GetSchedulerInfoRequest::setScheduler(const std::vector<Scheduler>& scheduler)
{
	scheduler_ = scheduler;
	for(int dep1 = 0; dep1!= scheduler.size(); dep1++) {
		auto schedulerObj = scheduler.at(dep1);
		std::string schedulerObjStr = "Scheduler." + std::to_string(dep1 + 1);
		setParameter(schedulerObjStr + ".SchedName", schedulerObj.schedName);
	}
}

std::string GetSchedulerInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetSchedulerInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

