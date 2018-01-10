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

#include <alibabacloud/slb/model/UploadServerCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

UploadServerCertificateResult::UploadServerCertificateResult() :
	ServiceResult()
{}

UploadServerCertificateResult::UploadServerCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UploadServerCertificateResult::~UploadServerCertificateResult()
{}

void UploadServerCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	serverCertificateId_ = value["ServerCertificateId"].asString();
	fingerprint_ = value["Fingerprint"].asString();
	serverCertificateName_ = value["ServerCertificateName"].asString();
	regionId_ = value["RegionId"].asString();
	regionIdAlias_ = value["RegionIdAlias"].asString();
	aliCloudCertificateId_ = value["AliCloudCertificateId"].asString();
	aliCloudCertificateName_ = value["AliCloudCertificateName"].asString();
	isAliCloudCertificate_ = std::stoi(value["IsAliCloudCertificate"].asString());
	resourceGroupId_ = value["ResourceGroupId"].asString();
	createTime_ = value["CreateTime"].asString();
	createTimeStamp_ = std::stol(value["CreateTimeStamp"].asString());

}

std::string UploadServerCertificateResult::getRegionIdAlias()const
{
	return regionIdAlias_;
}

void UploadServerCertificateResult::setRegionIdAlias(const std::string& regionIdAlias)
{
	regionIdAlias_ = regionIdAlias;
}

std::string UploadServerCertificateResult::getFingerprint()const
{
	return fingerprint_;
}

void UploadServerCertificateResult::setFingerprint(const std::string& fingerprint)
{
	fingerprint_ = fingerprint;
}

std::string UploadServerCertificateResult::getAliCloudCertificateName()const
{
	return aliCloudCertificateName_;
}

void UploadServerCertificateResult::setAliCloudCertificateName(const std::string& aliCloudCertificateName)
{
	aliCloudCertificateName_ = aliCloudCertificateName;
}

std::string UploadServerCertificateResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UploadServerCertificateResult::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
}

int UploadServerCertificateResult::getIsAliCloudCertificate()const
{
	return isAliCloudCertificate_;
}

void UploadServerCertificateResult::setIsAliCloudCertificate(int isAliCloudCertificate)
{
	isAliCloudCertificate_ = isAliCloudCertificate;
}

std::string UploadServerCertificateResult::getCreateTime()const
{
	return createTime_;
}

void UploadServerCertificateResult::setCreateTime(const std::string& createTime)
{
	createTime_ = createTime;
}

std::string UploadServerCertificateResult::getServerCertificateId()const
{
	return serverCertificateId_;
}

void UploadServerCertificateResult::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
}

std::string UploadServerCertificateResult::getServerCertificateName()const
{
	return serverCertificateName_;
}

void UploadServerCertificateResult::setServerCertificateName(const std::string& serverCertificateName)
{
	serverCertificateName_ = serverCertificateName;
}

std::string UploadServerCertificateResult::getRegionId()const
{
	return regionId_;
}

void UploadServerCertificateResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

long UploadServerCertificateResult::getCreateTimeStamp()const
{
	return createTimeStamp_;
}

void UploadServerCertificateResult::setCreateTimeStamp(long createTimeStamp)
{
	createTimeStamp_ = createTimeStamp;
}

std::string UploadServerCertificateResult::getAliCloudCertificateId()const
{
	return aliCloudCertificateId_;
}

void UploadServerCertificateResult::setAliCloudCertificateId(const std::string& aliCloudCertificateId)
{
	aliCloudCertificateId_ = aliCloudCertificateId;
}

