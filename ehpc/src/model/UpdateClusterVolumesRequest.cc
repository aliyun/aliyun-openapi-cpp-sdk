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
{}

UpdateClusterVolumesRequest::~UpdateClusterVolumesRequest()
{}

std::vector<UpdateClusterVolumesRequest::AdditionalVolumes> UpdateClusterVolumesRequest::getAdditionalVolumes()const
{
	return additionalVolumes_;
}

void UpdateClusterVolumesRequest::setAdditionalVolumes(const std::vector<AdditionalVolumes>& additionalVolumes)
{
	additionalVolumes_ = additionalVolumes;
	int i = 0;
	for(int i = 0; i!= additionalVolumes.size(); i++)	{
		auto obj = additionalVolumes.at(i);
		std::string str ="AdditionalVolumes."+ std::to_string(i);
		setCoreParameter(str + ".VolumeType", std::to_string(obj.volumeType));
		setCoreParameter(str + ".VolumeProtocol", std::to_string(obj.volumeProtocol));
		setCoreParameter(str + ".LocalDirectory", std::to_string(obj.localDirectory));
		setCoreParameter(str + ".RemoteDirectory", std::to_string(obj.remoteDirectory));
		setCoreParameter(str + ".Roles", obj.roles);
		setCoreParameter(str + ".VolumeId", std::to_string(obj.volumeId));
		setCoreParameter(str + ".VolumeMountpoint", std::to_string(obj.volumeMountpoint));
		setCoreParameter(str + ".Location", std::to_string(obj.location));
		setCoreParameter(str + ".JobQueue", std::to_string(obj.jobQueue));
	}
}

std::string UpdateClusterVolumesRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateClusterVolumesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string UpdateClusterVolumesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateClusterVolumesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

