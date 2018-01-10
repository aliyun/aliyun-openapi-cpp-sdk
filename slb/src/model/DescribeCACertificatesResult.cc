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

#include <alibabacloud/slb/model/DescribeCACertificatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeCACertificatesResult::DescribeCACertificatesResult() :
	ServiceResult()
{}

DescribeCACertificatesResult::DescribeCACertificatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCACertificatesResult::~DescribeCACertificatesResult()
{}

void DescribeCACertificatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCACertificates = value["CACertificates"]["CACertificate"];
	for (auto value : allCACertificates)
	{
		CACertificate cACertificateObject;
		cACertificateObject.regionId = value["RegionId"].asString();
		cACertificateObject.cACertificateId = value["CACertificateId"].asString();
		cACertificateObject.cACertificateName = value["CACertificateName"].asString();
		cACertificateObject.fingerprint = value["Fingerprint"].asString();
		cACertificateObject.resourceGroupId = value["ResourceGroupId"].asString();
		cACertificateObject.createTime = value["CreateTime"].asString();
		cACertificateObject.createTimeStamp = std::stol(value["CreateTimeStamp"].asString());
		cACertificates_.push_back(cACertificateObject);
	}

}

