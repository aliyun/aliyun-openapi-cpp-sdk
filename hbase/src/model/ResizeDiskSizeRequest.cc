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

#include <alibabacloud/hbase/model/ResizeDiskSizeRequest.h>

using AlibabaCloud::HBase::Model::ResizeDiskSizeRequest;

ResizeDiskSizeRequest::ResizeDiskSizeRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ResizeDiskSize")
{
	setMethod(HttpRequest::Method::Post);
}

ResizeDiskSizeRequest::~ResizeDiskSizeRequest()
{}

int ResizeDiskSizeRequest::getNodeDiskSize()const
{
	return nodeDiskSize_;
}

void ResizeDiskSizeRequest::setNodeDiskSize(int nodeDiskSize)
{
	nodeDiskSize_ = nodeDiskSize;
	setParameter("NodeDiskSize", std::to_string(nodeDiskSize));
}

std::string ResizeDiskSizeRequest::getClusterId()const
{
	return clusterId_;
}

void ResizeDiskSizeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

