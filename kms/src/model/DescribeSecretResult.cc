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

#include <alibabacloud/kms/model/DescribeSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

DescribeSecretResult::DescribeSecretResult() :
	ServiceResult()
{}

DescribeSecretResult::DescribeSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecretResult::~DescribeSecretResult()
{}

void DescribeSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();
	if(!value["SecretName"].isNull())
		secretName_ = value["SecretName"].asString();
	if(!value["EncryptionKeyId"].isNull())
		encryptionKeyId_ = value["EncryptionKeyId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["PlannedDeleteTime"].isNull())
		plannedDeleteTime_ = value["PlannedDeleteTime"].asString();

}

std::string DescribeSecretResult::getSecretName()const
{
	return secretName_;
}

std::string DescribeSecretResult::getDescription()const
{
	return description_;
}

std::string DescribeSecretResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeSecretResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeSecretResult::getPlannedDeleteTime()const
{
	return plannedDeleteTime_;
}

std::string DescribeSecretResult::getArn()const
{
	return arn_;
}

std::vector<DescribeSecretResult::Tag> DescribeSecretResult::getTags()const
{
	return tags_;
}

std::string DescribeSecretResult::getEncryptionKeyId()const
{
	return encryptionKeyId_;
}

