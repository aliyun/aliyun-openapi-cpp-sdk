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

#include <alibabacloud/oceanbasepro/model/DescribeTenantEncryptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantEncryptionResult::DescribeTenantEncryptionResult() :
	ServiceResult()
{}

DescribeTenantEncryptionResult::DescribeTenantEncryptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantEncryptionResult::~DescribeTenantEncryptionResult()
{}

void DescribeTenantEncryptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTenantEncryptionsNode = value["TenantEncryptions"]["TenantEncryptionsItem"];
	for (auto valueTenantEncryptionsTenantEncryptionsItem : allTenantEncryptionsNode)
	{
		TenantEncryptionsItem tenantEncryptionsObject;
		if(!valueTenantEncryptionsTenantEncryptionsItem["TenantId"].isNull())
			tenantEncryptionsObject.tenantId = valueTenantEncryptionsTenantEncryptionsItem["TenantId"].asString();
		if(!valueTenantEncryptionsTenantEncryptionsItem["TenantMode"].isNull())
			tenantEncryptionsObject.tenantMode = valueTenantEncryptionsTenantEncryptionsItem["TenantMode"].asString();
		if(!valueTenantEncryptionsTenantEncryptionsItem["TenantName"].isNull())
			tenantEncryptionsObject.tenantName = valueTenantEncryptionsTenantEncryptionsItem["TenantName"].asString();
		if(!valueTenantEncryptionsTenantEncryptionsItem["EnableEncryption"].isNull())
			tenantEncryptionsObject.enableEncryption = valueTenantEncryptionsTenantEncryptionsItem["EnableEncryption"].asString() == "true";
		if(!valueTenantEncryptionsTenantEncryptionsItem["TenantStatus"].isNull())
			tenantEncryptionsObject.tenantStatus = valueTenantEncryptionsTenantEncryptionsItem["TenantStatus"].asString();
		if(!valueTenantEncryptionsTenantEncryptionsItem["Status"].isNull())
			tenantEncryptionsObject.status = valueTenantEncryptionsTenantEncryptionsItem["Status"].asString();
		if(!valueTenantEncryptionsTenantEncryptionsItem["EncryptionType"].isNull())
			tenantEncryptionsObject.encryptionType = valueTenantEncryptionsTenantEncryptionsItem["EncryptionType"].asString();
		if(!valueTenantEncryptionsTenantEncryptionsItem["EncryptionKeyId"].isNull())
			tenantEncryptionsObject.encryptionKeyId = valueTenantEncryptionsTenantEncryptionsItem["EncryptionKeyId"].asString();
		tenantEncryptions_.push_back(tenantEncryptionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTenantEncryptionResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTenantEncryptionResult::TenantEncryptionsItem> DescribeTenantEncryptionResult::getTenantEncryptions()const
{
	return tenantEncryptions_;
}

