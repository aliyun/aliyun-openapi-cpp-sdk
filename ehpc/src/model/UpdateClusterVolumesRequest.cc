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

#include <alibabacloud/ehpc/model/UpdateClusterVolumesRequest.h>

using AlibabaCloud::EHPC::Model::UpdateClusterVolumesRequest;

UpdateClusterVolumesRequest::UpdateClusterVolumesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "UpdateClusterVolumes")
{
	setMethod(HttpRequest::Method::Get);
}

UpdateClusterVolumesRequest::~UpdateClusterVolumesRequest()
{}

std::vector<UpdateClusterVolumesRequest::AdditionalVolumes> UpdateClusterVolumesRequest::getAdditionalVolumes()const
{
	return additionalVolumes_;
}

void UpdateClusterVolumesRequest::setAdditionalVolumes(const std::vector<AdditionalVolumes>& additionalVolumes)
{
	additionalVolumes_ = additionalVolumes;
	for(int dep1 = 0; dep1!= additionalVolumes.size(); dep1++) {
		auto additionalVolumesObj = additionalVolumes.at(dep1);
		std::string additionalVolumesObjStr = "AdditionalVolumes." + std::to_string(dep1 + 1);
		setParameter(additionalVolumesObjStr + ".VolumeType", additionalVolumesObj.volumeType);
		setParameter(additionalVolumesObjStr + ".VolumeProtocol", additionalVolumesObj.volumeProtocol);
		setParameter(additionalVolumesObjStr + ".LocalDirectory", additionalVolumesObj.localDirectory);
		setParameter(additionalVolumesObjStr + ".RemoteDirectory", additionalVolumesObj.remoteDirectory);
		for(int dep2 = 0; dep2!= additionalVolumesObj.roles.size(); dep2++) {
			auto rolesObj = additionalVolumesObj.roles.at(dep2);
			std::string rolesObjStr = additionalVolumesObjStr + "Roles." + std::to_string(dep2 + 1);
			setParameter(rolesObjStr + ".Name", rolesObj.name);
		}
		setParameter(additionalVolumesObjStr + ".VolumeId", additionalVolumesObj.volumeId);
		setParameter(additionalVolumesObjStr + ".VolumeMountpoint", additionalVolumesObj.volumeMountpoint);
		setParameter(additionalVolumesObjStr + ".Location", additionalVolumesObj.location);
		setParameter(additionalVolumesObjStr + ".JobQueue", additionalVolumesObj.jobQueue);
	}
}

std::string UpdateClusterVolumesRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateClusterVolumesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateClusterVolumesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateClusterVolumesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

