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

#include <alibabacloud/dds/model/DescribeMongoDBLogConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeMongoDBLogConfigResult::DescribeMongoDBLogConfigResult() :
	ServiceResult()
{}

DescribeMongoDBLogConfigResult::DescribeMongoDBLogConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMongoDBLogConfigResult::~DescribeMongoDBLogConfigResult()
{}

void DescribeMongoDBLogConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UserProjectName"].isNull())
		userProjectName_ = value["UserProjectName"].asString();
	if(!value["IsUserProjectLogstoreExist"].isNull())
		isUserProjectLogstoreExist_ = std::stoi(value["IsUserProjectLogstoreExist"].asString());
	if(!value["IsEtlMetaExist"].isNull())
		isEtlMetaExist_ = std::stoi(value["IsEtlMetaExist"].asString());
	if(!value["ServiceType"].isNull())
		serviceType_ = value["ServiceType"].asString();
	if(!value["EnableAudit"].isNull())
		enableAudit_ = value["EnableAudit"].asString() == "true";
	if(!value["TtlForTrail"].isNull())
		ttlForTrail_ = std::stol(value["TtlForTrail"].asString());
	if(!value["UsedStorageForTrail"].isNull())
		usedStorageForTrail_ = std::stol(value["UsedStorageForTrail"].asString());
	if(!value["PreserveStorageForTrail"].isNull())
		preserveStorageForTrail_ = std::stol(value["PreserveStorageForTrail"].asString());
	if(!value["TtlForStandard"].isNull())
		ttlForStandard_ = std::stol(value["TtlForStandard"].asString());
	if(!value["UsedStorageForStandard"].isNull())
		usedStorageForStandard_ = std::stol(value["UsedStorageForStandard"].asString());
	if(!value["PreserveStorageForStandard"].isNull())
		preserveStorageForStandard_ = std::stol(value["PreserveStorageForStandard"].asString());

}

bool DescribeMongoDBLogConfigResult::getEnableAudit()const
{
	return enableAudit_;
}

long DescribeMongoDBLogConfigResult::getTtlForStandard()const
{
	return ttlForStandard_;
}

long DescribeMongoDBLogConfigResult::getPreserveStorageForStandard()const
{
	return preserveStorageForStandard_;
}

std::string DescribeMongoDBLogConfigResult::getUserProjectName()const
{
	return userProjectName_;
}

std::string DescribeMongoDBLogConfigResult::getServiceType()const
{
	return serviceType_;
}

int DescribeMongoDBLogConfigResult::getIsUserProjectLogstoreExist()const
{
	return isUserProjectLogstoreExist_;
}

long DescribeMongoDBLogConfigResult::getUsedStorageForTrail()const
{
	return usedStorageForTrail_;
}

long DescribeMongoDBLogConfigResult::getPreserveStorageForTrail()const
{
	return preserveStorageForTrail_;
}

int DescribeMongoDBLogConfigResult::getIsEtlMetaExist()const
{
	return isEtlMetaExist_;
}

long DescribeMongoDBLogConfigResult::getTtlForTrail()const
{
	return ttlForTrail_;
}

long DescribeMongoDBLogConfigResult::getUsedStorageForStandard()const
{
	return usedStorageForStandard_;
}

