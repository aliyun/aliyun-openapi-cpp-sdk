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

#include <alibabacloud/edas/model/ListScaleOutEcuRequest.h>

using AlibabaCloud::Edas::Model::ListScaleOutEcuRequest;

ListScaleOutEcuRequest::ListScaleOutEcuRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/resource/scale_out_ecu_list");
	setMethod(HttpRequest::Method::Post);
}

ListScaleOutEcuRequest::~ListScaleOutEcuRequest()
{}

int ListScaleOutEcuRequest::getMem()const
{
	return mem_;
}

void ListScaleOutEcuRequest::setMem(int mem)
{
	mem_ = mem;
	setParameter("Mem", std::to_string(mem));
}

std::string ListScaleOutEcuRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void ListScaleOutEcuRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string ListScaleOutEcuRequest::getAppId()const
{
	return appId_;
}

void ListScaleOutEcuRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ListScaleOutEcuRequest::getGroupId()const
{
	return groupId_;
}

void ListScaleOutEcuRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int ListScaleOutEcuRequest::getInstanceNum()const
{
	return instanceNum_;
}

void ListScaleOutEcuRequest::setInstanceNum(int instanceNum)
{
	instanceNum_ = instanceNum;
	setParameter("InstanceNum", std::to_string(instanceNum));
}

int ListScaleOutEcuRequest::getCpu()const
{
	return cpu_;
}

void ListScaleOutEcuRequest::setCpu(int cpu)
{
	cpu_ = cpu;
	setParameter("Cpu", std::to_string(cpu));
}

std::string ListScaleOutEcuRequest::getClusterId()const
{
	return clusterId_;
}

void ListScaleOutEcuRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

