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

#include <alibabacloud/cs/model/PauseComponentUpgradeRequest.h>

using AlibabaCloud::CS::Model::PauseComponentUpgradeRequest;

PauseComponentUpgradeRequest::PauseComponentUpgradeRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[clusterid]/components/[componentid]/pause");
	setMethod(HttpRequest::Method::Post);
}

PauseComponentUpgradeRequest::~PauseComponentUpgradeRequest()
{}

std::string PauseComponentUpgradeRequest::getComponentid()const
{
	return componentid_;
}

void PauseComponentUpgradeRequest::setComponentid(const std::string& componentid)
{
	componentid_ = componentid;
	setParameter("Componentid", componentid);
}

std::string PauseComponentUpgradeRequest::getClusterid()const
{
	return clusterid_;
}

void PauseComponentUpgradeRequest::setClusterid(const std::string& clusterid)
{
	clusterid_ = clusterid;
	setParameter("Clusterid", clusterid);
}

