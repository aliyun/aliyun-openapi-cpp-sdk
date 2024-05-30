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
	auto allSubjectAlternativeNames = value["SubjectAlternativeNames"]["SubjectAlternativeName"];
	for (const auto &item : allSubjectAlternativeNames)
		subjectAlternativeNames_.push_back(item.asString());
	if(!value["AliCloudCertificateName"].isNull())
		aliCloudCertificateName_ = value["AliCloudCertificateName"].asString();
	if(!value["CreateTimeStamp"].isNull())
		createTimeStamp_ = std::stol(value["CreateTimeStamp"].asString());
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ServerCertificateId"].isNull())
		serverCertificateId_ = value["ServerCertificateId"].asString();
	if(!value["ExpireTimeStamp"].isNull())
		expireTimeStamp_ = std::stol(value["ExpireTimeStamp"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Fingerprint"].isNull())
		fingerprint_ = value["Fingerprint"].asString();
	if(!value["ServerCertificateName"].isNull())
		serverCertificateName_ = value["ServerCertificateName"].asString();
	if(!value["CommonName"].isNull())
		commonName_ = value["CommonName"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["RegionIdAlias"].isNull())
		regionIdAlias_ = value["RegionIdAlias"].asString();
	if(!value["AliCloudCertificateId"].isNull())
		aliCloudCertificateId_ = value["AliCloudCertificateId"].asString();
	if(!value["IsAliCloudCertificate"].isNull())
		isAliCloudCertificate_ = std::stoi(value["IsAliCloudCertificate"].asString());

}

std::string UploadServerCertificateResult::getFingerprint()const
{
	return fingerprint_;
}

long UploadServerCertificateResult::getExpireTimeStamp()const
{
	return expireTimeStamp_;
}

std::string UploadServerCertificateResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string UploadServerCertificateResult::getCreateTime()const
{
	return createTime_;
}

std::vector<std::string> UploadServerCertificateResult::getSubjectAlternativeNames()const
{
	return subjectAlternativeNames_;
}

std::string UploadServerCertificateResult::getAliCloudCertificateId()const
{
	return aliCloudCertificateId_;
}

std::string UploadServerCertificateResult::getRegionIdAlias()const
{
	return regionIdAlias_;
}

std::string UploadServerCertificateResult::getAliCloudCertificateName()const
{
	return aliCloudCertificateName_;
}

int UploadServerCertificateResult::getIsAliCloudCertificate()const
{
	return isAliCloudCertificate_;
}

std::string UploadServerCertificateResult::getServerCertificateId()const
{
	return serverCertificateId_;
}

std::string UploadServerCertificateResult::getServerCertificateName()const
{
	return serverCertificateName_;
}

std::string UploadServerCertificateResult::getRegionId()const
{
	return regionId_;
}

std::string UploadServerCertificateResult::getExpireTime()const
{
	return expireTime_;
}

long UploadServerCertificateResult::getCreateTimeStamp()const
{
	return createTimeStamp_;
}

std::string UploadServerCertificateResult::getCommonName()const
{
	return commonName_;
}

