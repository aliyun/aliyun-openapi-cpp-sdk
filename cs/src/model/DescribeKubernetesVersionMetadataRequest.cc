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

#include <alibabacloud/cs/model/DescribeKubernetesVersionMetadataRequest.h>

using AlibabaCloud::CS::Model::DescribeKubernetesVersionMetadataRequest;

DescribeKubernetesVersionMetadataRequest::DescribeKubernetesVersionMetadataRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{}

DescribeKubernetesVersionMetadataRequest::~DescribeKubernetesVersionMetadataRequest()
{}

std::string DescribeKubernetesVersionMetadataRequest::getClusterType()const
{
	return clusterType_;
}

void DescribeKubernetesVersionMetadataRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setCoreParameter("ClusterType", clusterType);
}

bool DescribeKubernetesVersionMetadataRequest::getMultiAZ()const
{
	return multiAZ_;
}

void DescribeKubernetesVersionMetadataRequest::setMultiAZ(bool multiAZ)
{
	multiAZ_ = multiAZ;
	setCoreParameter("MultiAZ", multiAZ ? "true" : "false");
}

std::string DescribeKubernetesVersionMetadataRequest::getKubernetesVersion()const
{
	return kubernetesVersion_;
}

void DescribeKubernetesVersionMetadataRequest::setKubernetesVersion(const std::string& kubernetesVersion)
{
	kubernetesVersion_ = kubernetesVersion;
	setCoreParameter("KubernetesVersion", kubernetesVersion);
}

std::string DescribeKubernetesVersionMetadataRequest::getRegion()const
{
	return region_;
}

void DescribeKubernetesVersionMetadataRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

