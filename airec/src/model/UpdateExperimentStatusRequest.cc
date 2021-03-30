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

#include <alibabacloud/airec/model/UpdateExperimentStatusRequest.h>

using AlibabaCloud::Airec::Model::UpdateExperimentStatusRequest;

UpdateExperimentStatusRequest::UpdateExperimentStatusRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/scenes/[sceneId]/experiments/[experimentId]/status");
	setMethod(HttpRequest::Method::Put);
}

UpdateExperimentStatusRequest::~UpdateExperimentStatusRequest()
{}

std::string UpdateExperimentStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateExperimentStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateExperimentStatusRequest::getSceneId()const
{
	return sceneId_;
}

void UpdateExperimentStatusRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string UpdateExperimentStatusRequest::getExperimentId()const
{
	return experimentId_;
}

void UpdateExperimentStatusRequest::setExperimentId(const std::string& experimentId)
{
	experimentId_ = experimentId;
	setParameter("ExperimentId", experimentId);
}

