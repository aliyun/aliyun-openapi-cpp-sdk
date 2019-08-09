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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCACertificates = value["CACertificates"]["CACertificate"];
	for (auto value : allCACertificates)
	{
		CACertificate cACertificatesObject;
		if(!value["RegionId"].isNull())
			cACertificatesObject.regionId = value["RegionId"].asString();
		if(!value["CACertificateId"].isNull())
			cACertificatesObject.cACertificateId = value["CACertificateId"].asString();
		if(!value["CACertificateName"].isNull())
			cACertificatesObject.cACertificateName = value["CACertificateName"].asString();
		if(!value["Fingerprint"].isNull())
			cACertificatesObject.fingerprint = value["Fingerprint"].asString();
		if(!value["ResourceGroupId"].isNull())
			cACertificatesObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["CreateTime"].isNull())
			cACertificatesObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimeStamp"].isNull())
			cACertificatesObject.createTimeStamp = std::stol(value["CreateTimeStamp"].asString());
		if(!value["ExpireTime"].isNull())
			cACertificatesObject.expireTime = value["ExpireTime"].asString();
		if(!value["ExpireTimeStamp"].isNull())
			cACertificatesObject.expireTimeStamp = std::stol(value["ExpireTimeStamp"].asString());
		if(!value["CommonName"].isNull())
			cACertificatesObject.commonName = value["CommonName"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			CACertificate::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			cACertificatesObject.tags.push_back(tagsObject);
		}
		cACertificates_.push_back(cACertificatesObject);
	}

}

std::vector<DescribeCACertificatesResult::CACertificate> DescribeCACertificatesResult::getCACertificates()const
{
	return cACertificates_;
}

