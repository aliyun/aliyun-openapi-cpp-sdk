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

#include <alibabacloud/eas/model/DescribeResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeResourceResult::DescribeResourceResult() :
	ServiceResult()
{}

DescribeResourceResult::DescribeResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceResult::~DescribeResourceResult()
{}

void DescribeResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResourceId"].isNull())
		resourceId_ = value["ResourceId"].asString();
	if(!value["ResourceName"].isNull())
		resourceName_ = value["ResourceName"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["OwnerUid"].isNull())
		ownerUid_ = value["OwnerUid"].asString();
	if(!value["InstanceCount"].isNull())
		instanceCount_ = std::stoi(value["InstanceCount"].asString());
	if(!value["PrePaidInstanceCount"].isNull())
		prePaidInstanceCount_ = std::stoi(value["PrePaidInstanceCount"].asString());
	if(!value["PostPaidInstanceCount"].isNull())
		postPaidInstanceCount_ = std::stoi(value["PostPaidInstanceCount"].asString());
	if(!value["CpuCount"].isNull())
		cpuCount_ = std::stoi(value["CpuCount"].asString());
	if(!value["GpuCount"].isNull())
		gpuCount_ = std::stoi(value["GpuCount"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ExtraData"].isNull())
		extraData_ = value["ExtraData"].asString();

}

std::string DescribeResourceResult::getStatus()const
{
	return status_;
}

int DescribeResourceResult::getPrePaidInstanceCount()const
{
	return prePaidInstanceCount_;
}

std::string DescribeResourceResult::getMessage()const
{
	return message_;
}

std::string DescribeResourceResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeResourceResult::getResourceName()const
{
	return resourceName_;
}

std::string DescribeResourceResult::getOwnerUid()const
{
	return ownerUid_;
}

std::string DescribeResourceResult::getCreateTime()const
{
	return createTime_;
}

int DescribeResourceResult::getPostPaidInstanceCount()const
{
	return postPaidInstanceCount_;
}

std::string DescribeResourceResult::getExtraData()const
{
	return extraData_;
}

int DescribeResourceResult::getInstanceCount()const
{
	return instanceCount_;
}

int DescribeResourceResult::getCpuCount()const
{
	return cpuCount_;
}

std::string DescribeResourceResult::getResourceId()const
{
	return resourceId_;
}

std::string DescribeResourceResult::getUpdateTime()const
{
	return updateTime_;
}

int DescribeResourceResult::getGpuCount()const
{
	return gpuCount_;
}

