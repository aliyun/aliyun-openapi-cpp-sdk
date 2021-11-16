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

#include <alibabacloud/ddoscoo/model/DescribeInstancesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest()
{}

int DescribeInstancesRequest::getEdition()const
{
	return edition_;
}

void DescribeInstancesRequest::setEdition(int edition)
{
	edition_ = edition;
	setParameter("Edition", std::to_string(edition));
}

std::string DescribeInstancesRequest::getRemark()const
{
	return remark_;
}

void DescribeInstancesRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

int DescribeInstancesRequest::getEnabled()const
{
	return enabled_;
}

void DescribeInstancesRequest::setEnabled(int enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", std::to_string(enabled));
}

std::string DescribeInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeInstancesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeInstancesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::vector<DescribeInstancesRequest::Tag> DescribeInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

long DescribeInstancesRequest::getExpireStartTime()const
{
	return expireStartTime_;
}

void DescribeInstancesRequest::setExpireStartTime(long expireStartTime)
{
	expireStartTime_ = expireStartTime;
	setParameter("ExpireStartTime", std::to_string(expireStartTime));
}

long DescribeInstancesRequest::getExpireEndTime()const
{
	return expireEndTime_;
}

void DescribeInstancesRequest::setExpireEndTime(long expireEndTime)
{
	expireEndTime_ = expireEndTime;
	setParameter("ExpireEndTime", std::to_string(expireEndTime));
}

std::string DescribeInstancesRequest::getIp()const
{
	return ip_;
}

void DescribeInstancesRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string DescribeInstancesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeInstancesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

std::string DescribeInstancesRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeInstancesRequest::setPageNo(const std::string& pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", pageNo);
}

std::vector<int> DescribeInstancesRequest::getStatus()const
{
	return status_;
}

void DescribeInstancesRequest::setStatus(const std::vector<int>& status)
{
	status_ = status;
	for(int dep1 = 0; dep1!= status.size(); dep1++) {
		setParameter("Status."+ std::to_string(dep1), std::to_string(status.at(dep1)));
	}
}

