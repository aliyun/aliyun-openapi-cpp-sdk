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

#include <alibabacloud/hbase/model/ResizeColdStorageSizeRequest.h>

using AlibabaCloud::HBase::Model::ResizeColdStorageSizeRequest;

ResizeColdStorageSizeRequest::ResizeColdStorageSizeRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ResizeColdStorageSize")
{
	setMethod(HttpRequest::Method::Post);
}

ResizeColdStorageSizeRequest::~ResizeColdStorageSizeRequest()
{}

std::string ResizeColdStorageSizeRequest::getClusterId()const
{
	return clusterId_;
}

void ResizeColdStorageSizeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ResizeColdStorageSizeRequest::getColdStorageSize()const
{
	return coldStorageSize_;
}

void ResizeColdStorageSizeRequest::setColdStorageSize(int coldStorageSize)
{
	coldStorageSize_ = coldStorageSize;
	setParameter("ColdStorageSize", std::to_string(coldStorageSize));
}

