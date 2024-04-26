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

#include <alibabacloud/ecs/model/DescribeAutoSnapshotPolicyExResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoSnapshotPolicyExResult::DescribeAutoSnapshotPolicyExResult() :
	ServiceResult()
{}

DescribeAutoSnapshotPolicyExResult::DescribeAutoSnapshotPolicyExResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoSnapshotPolicyExResult::~DescribeAutoSnapshotPolicyExResult()
{}

void DescribeAutoSnapshotPolicyExResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAutoSnapshotPoliciesNode = value["AutoSnapshotPolicies"]["AutoSnapshotPolicy"];
	for (auto valueAutoSnapshotPoliciesAutoSnapshotPolicy : allAutoSnapshotPoliciesNode)
	{
		AutoSnapshotPolicy autoSnapshotPoliciesObject;
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["TimePoints"].isNull())
			autoSnapshotPoliciesObject.timePoints = valueAutoSnapshotPoliciesAutoSnapshotPolicy["TimePoints"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["CreationTime"].isNull())
			autoSnapshotPoliciesObject.creationTime = valueAutoSnapshotPoliciesAutoSnapshotPolicy["CreationTime"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["Status"].isNull())
			autoSnapshotPoliciesObject.status = valueAutoSnapshotPoliciesAutoSnapshotPolicy["Status"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyName"].isNull())
			autoSnapshotPoliciesObject.autoSnapshotPolicyName = valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyName"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["TargetCopyRegions"].isNull())
			autoSnapshotPoliciesObject.targetCopyRegions = valueAutoSnapshotPoliciesAutoSnapshotPolicy["TargetCopyRegions"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["CopiedSnapshotsRetentionDays"].isNull())
			autoSnapshotPoliciesObject.copiedSnapshotsRetentionDays = std::stoi(valueAutoSnapshotPoliciesAutoSnapshotPolicy["CopiedSnapshotsRetentionDays"].asString());
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyId"].isNull())
			autoSnapshotPoliciesObject.autoSnapshotPolicyId = valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyId"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RetentionDays"].isNull())
			autoSnapshotPoliciesObject.retentionDays = std::stoi(valueAutoSnapshotPoliciesAutoSnapshotPolicy["RetentionDays"].asString());
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RegionId"].isNull())
			autoSnapshotPoliciesObject.regionId = valueAutoSnapshotPoliciesAutoSnapshotPolicy["RegionId"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["DiskNums"].isNull())
			autoSnapshotPoliciesObject.diskNums = std::stoi(valueAutoSnapshotPoliciesAutoSnapshotPolicy["DiskNums"].asString());
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["EnableCrossRegionCopy"].isNull())
			autoSnapshotPoliciesObject.enableCrossRegionCopy = valueAutoSnapshotPoliciesAutoSnapshotPolicy["EnableCrossRegionCopy"].asString() == "true";
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RepeatWeekdays"].isNull())
			autoSnapshotPoliciesObject.repeatWeekdays = valueAutoSnapshotPoliciesAutoSnapshotPolicy["RepeatWeekdays"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["VolumeNums"].isNull())
			autoSnapshotPoliciesObject.volumeNums = std::stoi(valueAutoSnapshotPoliciesAutoSnapshotPolicy["VolumeNums"].asString());
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["ResourceGroupId"].isNull())
			autoSnapshotPoliciesObject.resourceGroupId = valueAutoSnapshotPoliciesAutoSnapshotPolicy["ResourceGroupId"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["Type"].isNull())
			autoSnapshotPoliciesObject.type = valueAutoSnapshotPoliciesAutoSnapshotPolicy["Type"].asString();
		auto allTagsNode = valueAutoSnapshotPoliciesAutoSnapshotPolicy["Tags"]["Tag"];
		for (auto valueAutoSnapshotPoliciesAutoSnapshotPolicyTagsTag : allTagsNode)
		{
			AutoSnapshotPolicy::Tag tagsObject;
			if(!valueAutoSnapshotPoliciesAutoSnapshotPolicyTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueAutoSnapshotPoliciesAutoSnapshotPolicyTagsTag["TagValue"].asString();
			if(!valueAutoSnapshotPoliciesAutoSnapshotPolicyTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueAutoSnapshotPoliciesAutoSnapshotPolicyTagsTag["TagKey"].asString();
			autoSnapshotPoliciesObject.tags.push_back(tagsObject);
		}
		auto copyEncryptionConfigurationNode = value["CopyEncryptionConfiguration"];
		if(!copyEncryptionConfigurationNode["Encrypted"].isNull())
			autoSnapshotPoliciesObject.copyEncryptionConfiguration.encrypted = copyEncryptionConfigurationNode["Encrypted"].asString() == "true";
		if(!copyEncryptionConfigurationNode["KMSKeyId"].isNull())
			autoSnapshotPoliciesObject.copyEncryptionConfiguration.kMSKeyId = copyEncryptionConfigurationNode["KMSKeyId"].asString();
		autoSnapshotPolicies_.push_back(autoSnapshotPoliciesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAutoSnapshotPolicyExResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoSnapshotPolicyExResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoSnapshotPolicyExResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAutoSnapshotPolicyExResult::AutoSnapshotPolicy> DescribeAutoSnapshotPolicyExResult::getAutoSnapshotPolicies()const
{
	return autoSnapshotPolicies_;
}

