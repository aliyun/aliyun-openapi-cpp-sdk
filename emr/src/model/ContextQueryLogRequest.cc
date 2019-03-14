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

#include <alibabacloud/emr/model/ContextQueryLogRequest.h>

using AlibabaCloud::Emr::Model::ContextQueryLogRequest;

ContextQueryLogRequest::ContextQueryLogRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ContextQueryLog")
{}

ContextQueryLogRequest::~ContextQueryLogRequest()
{}

std::string ContextQueryLogRequest::getPackId()const
{
	return packId_;
}

void ContextQueryLogRequest::setPackId(const std::string& packId)
{
	packId_ = packId;
	setParameter("PackId", packId);
}

long ContextQueryLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ContextQueryLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ContextQueryLogRequest::getTotalOffset()const
{
	return totalOffset_;
}

void ContextQueryLogRequest::setTotalOffset(int totalOffset)
{
	totalOffset_ = totalOffset;
	setParameter("TotalOffset", std::to_string(totalOffset));
}

int ContextQueryLogRequest::getSize()const
{
	return size_;
}

void ContextQueryLogRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ContextQueryLogRequest::getRegionId()const
{
	return regionId_;
}

void ContextQueryLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ContextQueryLogRequest::getPackMeta()const
{
	return packMeta_;
}

void ContextQueryLogRequest::setPackMeta(const std::string& packMeta)
{
	packMeta_ = packMeta;
	setParameter("PackMeta", packMeta);
}

int ContextQueryLogRequest::getFrom()const
{
	return from_;
}

void ContextQueryLogRequest::setFrom(int from)
{
	from_ = from;
	setParameter("From", std::to_string(from));
}

std::string ContextQueryLogRequest::getClusterId()const
{
	return clusterId_;
}

void ContextQueryLogRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ContextQueryLogRequest::getTo()const
{
	return to_;
}

void ContextQueryLogRequest::setTo(int to)
{
	to_ = to;
	setParameter("To", std::to_string(to));
}

bool ContextQueryLogRequest::getReverse()const
{
	return reverse_;
}

void ContextQueryLogRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setParameter("Reverse", std::to_string(reverse));
}

std::string ContextQueryLogRequest::getLogStore()const
{
	return logStore_;
}

void ContextQueryLogRequest::setLogStore(const std::string& logStore)
{
	logStore_ = logStore;
	setParameter("LogStore", logStore);
}

std::string ContextQueryLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ContextQueryLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

