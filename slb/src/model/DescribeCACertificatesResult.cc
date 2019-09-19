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
	auto allCACertificatesNode = value["CACertificates"]["CACertificate"];
	for (auto valueCACertificatesCACertificate : allCACertificatesNode)
	{
		CACertificate cACertificatesObject;
		if(!valueCACertificatesCACertificate["RegionId"].isNull())
			cACertificatesObject.regionId = valueCACertificatesCACertificate["RegionId"].asString();
		if(!valueCACertificatesCACertificate["CACertificateId"].isNull())
			cACertificatesObject.cACertificateId = valueCACertificatesCACertificate["CACertificateId"].asString();
		if(!valueCACertificatesCACertificate["CACertificateName"].isNull())
			cACertificatesObject.cACertificateName = valueCACertificatesCACertificate["CACertificateName"].asString();
		if(!valueCACertificatesCACertificate["Fingerprint"].isNull())
			cACertificatesObject.fingerprint = valueCACertificatesCACertificate["Fingerprint"].asString();
		if(!valueCACertificatesCACertificate["ResourceGroupId"].isNull())
			cACertificatesObject.resourceGroupId = valueCACertificatesCACertificate["ResourceGroupId"].asString();
		if(!valueCACertificatesCACertificate["CreateTime"].isNull())
			cACertificatesObject.createTime = valueCACertificatesCACertificate["CreateTime"].asString();
		if(!valueCACertificatesCACertificate["CreateTimeStamp"].isNull())
			cACertificatesObject.createTimeStamp = std::stol(valueCACertificatesCACertificate["CreateTimeStamp"].asString());
		if(!valueCACertificatesCACertificate["ExpireTime"].isNull())
			cACertificatesObject.expireTime = valueCACertificatesCACertificate["ExpireTime"].asString();
		if(!valueCACertificatesCACertificate["ExpireTimeStamp"].isNull())
			cACertificatesObject.expireTimeStamp = std::stol(valueCACertificatesCACertificate["ExpireTimeStamp"].asString());
		if(!valueCACertificatesCACertificate["CommonName"].isNull())
			cACertificatesObject.commonName = valueCACertificatesCACertificate["CommonName"].asString();
		auto allTagsNode = allCACertificatesNode["Tags"]["Tag"];
		for (auto allCACertificatesNodeTagsTag : allTagsNode)
		{
			CACertificate::Tag tagsObject;
			if(!allCACertificatesNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allCACertificatesNodeTagsTag["TagKey"].asString();
			if(!allCACertificatesNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allCACertificatesNodeTagsTag["TagValue"].asString();
			cACertificatesObject.tags.push_back(tagsObject);
		}
		cACertificates_.push_back(cACertificatesObject);
	}

}

std::vector<DescribeCACertificatesResult::CACertificate> DescribeCACertificatesResult::getCACertificates()const
{
	return cACertificates_;
}

