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

#include <alibabacloud/sgw/model/DescribeBlockVolumeSnapshotsRequest.h>

using AlibabaCloud::Sgw::Model::DescribeBlockVolumeSnapshotsRequest;

DescribeBlockVolumeSnapshotsRequest::DescribeBlockVolumeSnapshotsRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeBlockVolumeSnapshots")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBlockVolumeSnapshotsRequest::~DescribeBlockVolumeSnapshotsRequest()
{}

int DescribeBlockVolumeSnapshotsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBlockVolumeSnapshotsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBlockVolumeSnapshotsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBlockVolumeSnapshotsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBlockVolumeSnapshotsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBlockVolumeSnapshotsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeBlockVolumeSnapshotsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBlockVolumeSnapshotsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBlockVolumeSnapshotsRequest::getIndexId()const
{
	return indexId_;
}

void DescribeBlockVolumeSnapshotsRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string DescribeBlockVolumeSnapshotsRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeBlockVolumeSnapshotsRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

