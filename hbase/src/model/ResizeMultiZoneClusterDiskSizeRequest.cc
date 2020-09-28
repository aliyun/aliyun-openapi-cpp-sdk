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

#include <alibabacloud/hbase/model/ResizeMultiZoneClusterDiskSizeRequest.h>

using AlibabaCloud::HBase::Model::ResizeMultiZoneClusterDiskSizeRequest;

ResizeMultiZoneClusterDiskSizeRequest::ResizeMultiZoneClusterDiskSizeRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ResizeMultiZoneClusterDiskSize")
{
	setMethod(HttpRequest::Method::Post);
}

ResizeMultiZoneClusterDiskSizeRequest::~ResizeMultiZoneClusterDiskSizeRequest()
{}

std::string ResizeMultiZoneClusterDiskSizeRequest::getClusterId()const
{
	return clusterId_;
}

void ResizeMultiZoneClusterDiskSizeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ResizeMultiZoneClusterDiskSizeRequest::getLogDiskSize()const
{
	return logDiskSize_;
}

void ResizeMultiZoneClusterDiskSizeRequest::setLogDiskSize(int logDiskSize)
{
	logDiskSize_ = logDiskSize;
	setParameter("LogDiskSize", std::to_string(logDiskSize));
}

int ResizeMultiZoneClusterDiskSizeRequest::getCoreDiskSize()const
{
	return coreDiskSize_;
}

void ResizeMultiZoneClusterDiskSizeRequest::setCoreDiskSize(int coreDiskSize)
{
	coreDiskSize_ = coreDiskSize;
	setParameter("CoreDiskSize", std::to_string(coreDiskSize));
}

