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

#include <alibabacloud/nas/model/DescribeSmbAclResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeSmbAclResult::DescribeSmbAclResult() :
	ServiceResult()
{}

DescribeSmbAclResult::DescribeSmbAclResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmbAclResult::~DescribeSmbAclResult()
{}

void DescribeSmbAclResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto aclNode = value["Acl"];
	if(!aclNode["AuthMethod"].isNull())
		acl_.authMethod = aclNode["AuthMethod"].asString();
	if(!aclNode["AuthCenter"].isNull())
		acl_.authCenter = aclNode["AuthCenter"].asString();
	if(!aclNode["EnableAnonymousAccess"].isNull())
		acl_.enableAnonymousAccess = aclNode["EnableAnonymousAccess"].asString() == "true";
	if(!aclNode["Enabled"].isNull())
		acl_.enabled = aclNode["Enabled"].asString() == "true";
	if(!aclNode["EncryptData"].isNull())
		acl_.encryptData = aclNode["EncryptData"].asString() == "true";
	if(!aclNode["RejectUnencryptedAccess"].isNull())
		acl_.rejectUnencryptedAccess = aclNode["RejectUnencryptedAccess"].asString() == "true";
	if(!aclNode["SuperAdminSid"].isNull())
		acl_.superAdminSid = aclNode["SuperAdminSid"].asString();
	if(!aclNode["HomeDirPath"].isNull())
		acl_.homeDirPath = aclNode["HomeDirPath"].asString();

}

DescribeSmbAclResult::Acl DescribeSmbAclResult::getAcl()const
{
	return acl_;
}

