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

#include <alibabacloud/slb/model/DescribeServerCertificatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeServerCertificatesResult::DescribeServerCertificatesResult() :
	ServiceResult()
{}

DescribeServerCertificatesResult::DescribeServerCertificatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServerCertificatesResult::~DescribeServerCertificatesResult()
{}

void DescribeServerCertificatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allServerCertificates = value["ServerCertificates"]["ServerCertificate"];
	for (auto value : allServerCertificates)
	{
		ServerCertificate serverCertificatesObject;
		if(!value["ServerCertificateId"].isNull())
			serverCertificatesObject.serverCertificateId = value["ServerCertificateId"].asString();
		if(!value["Fingerprint"].isNull())
			serverCertificatesObject.fingerprint = value["Fingerprint"].asString();
		if(!value["ServerCertificateName"].isNull())
			serverCertificatesObject.serverCertificateName = value["ServerCertificateName"].asString();
		if(!value["RegionId"].isNull())
			serverCertificatesObject.regionId = value["RegionId"].asString();
		if(!value["RegionIdAlias"].isNull())
			serverCertificatesObject.regionIdAlias = value["RegionIdAlias"].asString();
		if(!value["AliCloudCertificateId"].isNull())
			serverCertificatesObject.aliCloudCertificateId = value["AliCloudCertificateId"].asString();
		if(!value["AliCloudCertificateName"].isNull())
			serverCertificatesObject.aliCloudCertificateName = value["AliCloudCertificateName"].asString();
		if(!value["IsAliCloudCertificate"].isNull())
			serverCertificatesObject.isAliCloudCertificate = std::stoi(value["IsAliCloudCertificate"].asString());
		if(!value["ResourceGroupId"].isNull())
			serverCertificatesObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["CreateTime"].isNull())
			serverCertificatesObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimeStamp"].isNull())
			serverCertificatesObject.createTimeStamp = std::stol(value["CreateTimeStamp"].asString());
		if(!value["ExpireTime"].isNull())
			serverCertificatesObject.expireTime = value["ExpireTime"].asString();
		if(!value["ExpireTimeStamp"].isNull())
			serverCertificatesObject.expireTimeStamp = std::stol(value["ExpireTimeStamp"].asString());
		if(!value["CommonName"].isNull())
			serverCertificatesObject.commonName = value["CommonName"].asString();
		auto allSubjectAlternativeNames = value["SubjectAlternativeNames"]["SubjectAlternativeName"];
		for (auto value : allSubjectAlternativeNames)
			serverCertificatesObject.subjectAlternativeNames.push_back(value.asString());
		serverCertificates_.push_back(serverCertificatesObject);
	}

}

std::vector<DescribeServerCertificatesResult::ServerCertificate> DescribeServerCertificatesResult::getServerCertificates()const
{
	return serverCertificates_;
}

