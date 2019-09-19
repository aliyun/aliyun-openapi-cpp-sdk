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
	auto allServerCertificatesNode = value["ServerCertificates"]["ServerCertificate"];
	for (auto valueServerCertificatesServerCertificate : allServerCertificatesNode)
	{
		ServerCertificate serverCertificatesObject;
		if(!valueServerCertificatesServerCertificate["ServerCertificateId"].isNull())
			serverCertificatesObject.serverCertificateId = valueServerCertificatesServerCertificate["ServerCertificateId"].asString();
		if(!valueServerCertificatesServerCertificate["Fingerprint"].isNull())
			serverCertificatesObject.fingerprint = valueServerCertificatesServerCertificate["Fingerprint"].asString();
		if(!valueServerCertificatesServerCertificate["ServerCertificateName"].isNull())
			serverCertificatesObject.serverCertificateName = valueServerCertificatesServerCertificate["ServerCertificateName"].asString();
		if(!valueServerCertificatesServerCertificate["RegionId"].isNull())
			serverCertificatesObject.regionId = valueServerCertificatesServerCertificate["RegionId"].asString();
		if(!valueServerCertificatesServerCertificate["RegionIdAlias"].isNull())
			serverCertificatesObject.regionIdAlias = valueServerCertificatesServerCertificate["RegionIdAlias"].asString();
		if(!valueServerCertificatesServerCertificate["AliCloudCertificateId"].isNull())
			serverCertificatesObject.aliCloudCertificateId = valueServerCertificatesServerCertificate["AliCloudCertificateId"].asString();
		if(!valueServerCertificatesServerCertificate["AliCloudCertificateName"].isNull())
			serverCertificatesObject.aliCloudCertificateName = valueServerCertificatesServerCertificate["AliCloudCertificateName"].asString();
		if(!valueServerCertificatesServerCertificate["IsAliCloudCertificate"].isNull())
			serverCertificatesObject.isAliCloudCertificate = std::stoi(valueServerCertificatesServerCertificate["IsAliCloudCertificate"].asString());
		if(!valueServerCertificatesServerCertificate["ResourceGroupId"].isNull())
			serverCertificatesObject.resourceGroupId = valueServerCertificatesServerCertificate["ResourceGroupId"].asString();
		if(!valueServerCertificatesServerCertificate["CreateTime"].isNull())
			serverCertificatesObject.createTime = valueServerCertificatesServerCertificate["CreateTime"].asString();
		if(!valueServerCertificatesServerCertificate["CreateTimeStamp"].isNull())
			serverCertificatesObject.createTimeStamp = std::stol(valueServerCertificatesServerCertificate["CreateTimeStamp"].asString());
		if(!valueServerCertificatesServerCertificate["ExpireTime"].isNull())
			serverCertificatesObject.expireTime = valueServerCertificatesServerCertificate["ExpireTime"].asString();
		if(!valueServerCertificatesServerCertificate["ExpireTimeStamp"].isNull())
			serverCertificatesObject.expireTimeStamp = std::stol(valueServerCertificatesServerCertificate["ExpireTimeStamp"].asString());
		if(!valueServerCertificatesServerCertificate["CommonName"].isNull())
			serverCertificatesObject.commonName = valueServerCertificatesServerCertificate["CommonName"].asString();
		auto allTagsNode = allServerCertificatesNode["Tags"]["Tag"];
		for (auto allServerCertificatesNodeTagsTag : allTagsNode)
		{
			ServerCertificate::Tag tagsObject;
			if(!allServerCertificatesNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allServerCertificatesNodeTagsTag["TagKey"].asString();
			if(!allServerCertificatesNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allServerCertificatesNodeTagsTag["TagValue"].asString();
			serverCertificatesObject.tags.push_back(tagsObject);
		}
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

