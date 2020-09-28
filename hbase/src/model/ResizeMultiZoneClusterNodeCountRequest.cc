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

#include <alibabacloud/hbase/model/ResizeMultiZoneClusterNodeCountRequest.h>

using AlibabaCloud::HBase::Model::ResizeMultiZoneClusterNodeCountRequest;

ResizeMultiZoneClusterNodeCountRequest::ResizeMultiZoneClusterNodeCountRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ResizeMultiZoneClusterNodeCount")
{
	setMethod(HttpRequest::Method::Post);
}

ResizeMultiZoneClusterNodeCountRequest::~ResizeMultiZoneClusterNodeCountRequest()
{}

std::string ResizeMultiZoneClusterNodeCountRequest::getPrimaryVSwitchId()const
{
	return primaryVSwitchId_;
}

void ResizeMultiZoneClusterNodeCountRequest::setPrimaryVSwitchId(const std::string& primaryVSwitchId)
{
	primaryVSwitchId_ = primaryVSwitchId;
	setParameter("PrimaryVSwitchId", primaryVSwitchId);
}

std::string ResizeMultiZoneClusterNodeCountRequest::getStandbyVSwitchId()const
{
	return standbyVSwitchId_;
}

void ResizeMultiZoneClusterNodeCountRequest::setStandbyVSwitchId(const std::string& standbyVSwitchId)
{
	standbyVSwitchId_ = standbyVSwitchId;
	setParameter("StandbyVSwitchId", standbyVSwitchId);
}

int ResizeMultiZoneClusterNodeCountRequest::getLogNodeCount()const
{
	return logNodeCount_;
}

void ResizeMultiZoneClusterNodeCountRequest::setLogNodeCount(int logNodeCount)
{
	logNodeCount_ = logNodeCount;
	setParameter("LogNodeCount", std::to_string(logNodeCount));
}

std::string ResizeMultiZoneClusterNodeCountRequest::getClusterId()const
{
	return clusterId_;
}

void ResizeMultiZoneClusterNodeCountRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ResizeMultiZoneClusterNodeCountRequest::getPrimaryCoreNodeCount()const
{
	return primaryCoreNodeCount_;
}

void ResizeMultiZoneClusterNodeCountRequest::setPrimaryCoreNodeCount(int primaryCoreNodeCount)
{
	primaryCoreNodeCount_ = primaryCoreNodeCount;
	setParameter("PrimaryCoreNodeCount", std::to_string(primaryCoreNodeCount));
}

int ResizeMultiZoneClusterNodeCountRequest::getCoreNodeCount()const
{
	return coreNodeCount_;
}

void ResizeMultiZoneClusterNodeCountRequest::setCoreNodeCount(int coreNodeCount)
{
	coreNodeCount_ = coreNodeCount;
	setParameter("CoreNodeCount", std::to_string(coreNodeCount));
}

int ResizeMultiZoneClusterNodeCountRequest::getStandbyCoreNodeCount()const
{
	return standbyCoreNodeCount_;
}

void ResizeMultiZoneClusterNodeCountRequest::setStandbyCoreNodeCount(int standbyCoreNodeCount)
{
	standbyCoreNodeCount_ = standbyCoreNodeCount;
	setParameter("StandbyCoreNodeCount", std::to_string(standbyCoreNodeCount));
}

std::string ResizeMultiZoneClusterNodeCountRequest::getArbiterVSwitchId()const
{
	return arbiterVSwitchId_;
}

void ResizeMultiZoneClusterNodeCountRequest::setArbiterVSwitchId(const std::string& arbiterVSwitchId)
{
	arbiterVSwitchId_ = arbiterVSwitchId;
	setParameter("ArbiterVSwitchId", arbiterVSwitchId);
}

