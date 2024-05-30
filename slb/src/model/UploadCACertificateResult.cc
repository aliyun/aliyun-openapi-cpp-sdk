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

#include <alibabacloud/slb/model/UploadCACertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

UploadCACertificateResult::UploadCACertificateResult() :
	ServiceResult()
{}

UploadCACertificateResult::UploadCACertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UploadCACertificateResult::~UploadCACertificateResult()
{}

void UploadCACertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CreateTimeStamp"].isNull())
		createTimeStamp_ = std::stol(value["CreateTimeStamp"].asString());
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["Fingerprint"].isNull())
		fingerprint_ = value["Fingerprint"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CommonName"].isNull())
		commonName_ = value["CommonName"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["CACertificateName"].isNull())
		cACertificateName_ = value["CACertificateName"].asString();
	if(!value["ExpireTimeStamp"].isNull())
		expireTimeStamp_ = std::stol(value["ExpireTimeStamp"].asString());
	if(!value["CACertificateId"].isNull())
		cACertificateId_ = value["CACertificateId"].asString();

}

std::string UploadCACertificateResult::getFingerprint()const
{
	return fingerprint_;
}

std::string UploadCACertificateResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long UploadCACertificateResult::getExpireTimeStamp()const
{
	return expireTimeStamp_;
}

std::string UploadCACertificateResult::getCACertificateId()const
{
	return cACertificateId_;
}

std::string UploadCACertificateResult::getCreateTime()const
{
	return createTime_;
}

std::string UploadCACertificateResult::getCACertificateName()const
{
	return cACertificateName_;
}

std::string UploadCACertificateResult::getExpireTime()const
{
	return expireTime_;
}

long UploadCACertificateResult::getCreateTimeStamp()const
{
	return createTimeStamp_;
}

std::string UploadCACertificateResult::getCommonName()const
{
	return commonName_;
}

