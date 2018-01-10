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
	cACertificateId_ = value["CACertificateId"].asString();
	cACertificateName_ = value["CACertificateName"].asString();
	fingerprint_ = value["Fingerprint"].asString();
	resourceGroupId_ = value["ResourceGroupId"].asString();
	createTime_ = value["CreateTime"].asString();
	createTimeStamp_ = std::stol(value["CreateTimeStamp"].asString());

}

std::string UploadCACertificateResult::getFingerprint()const
{
	return fingerprint_;
}

void UploadCACertificateResult::setFingerprint(const std::string& fingerprint)
{
	fingerprint_ = fingerprint;
}

std::string UploadCACertificateResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UploadCACertificateResult::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
}

std::string UploadCACertificateResult::getCACertificateId()const
{
	return cACertificateId_;
}

void UploadCACertificateResult::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
}

std::string UploadCACertificateResult::getCreateTime()const
{
	return createTime_;
}

void UploadCACertificateResult::setCreateTime(const std::string& createTime)
{
	createTime_ = createTime;
}

std::string UploadCACertificateResult::getCACertificateName()const
{
	return cACertificateName_;
}

void UploadCACertificateResult::setCACertificateName(const std::string& cACertificateName)
{
	cACertificateName_ = cACertificateName;
}

long UploadCACertificateResult::getCreateTimeStamp()const
{
	return createTimeStamp_;
}

void UploadCACertificateResult::setCreateTimeStamp(long createTimeStamp)
{
	createTimeStamp_ = createTimeStamp;
}

