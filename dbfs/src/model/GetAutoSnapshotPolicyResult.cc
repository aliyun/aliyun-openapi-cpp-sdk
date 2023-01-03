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

#include <alibabacloud/dbfs/model/GetAutoSnapshotPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

GetAutoSnapshotPolicyResult::GetAutoSnapshotPolicyResult() :
	ServiceResult()
{}

GetAutoSnapshotPolicyResult::GetAutoSnapshotPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAutoSnapshotPolicyResult::~GetAutoSnapshotPolicyResult()
{}

void GetAutoSnapshotPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PolicyId"].isNull())
		data_.policyId = dataNode["PolicyId"].asString();
	if(!dataNode["PolicyName"].isNull())
		data_.policyName = dataNode["PolicyName"].asString();
	if(!dataNode["AccountId"].isNull())
		data_.accountId = dataNode["AccountId"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["StatusDetail"].isNull())
		data_.statusDetail = dataNode["StatusDetail"].asString();
	if(!dataNode["RetentionDays"].isNull())
		data_.retentionDays = std::stoi(dataNode["RetentionDays"].asString());
	if(!dataNode["AppliedDbfsNumber"].isNull())
		data_.appliedDbfsNumber = std::stoi(dataNode["AppliedDbfsNumber"].asString());
	if(!dataNode["CreatedTime"].isNull())
		data_.createdTime = dataNode["CreatedTime"].asString();
	if(!dataNode["LastModified"].isNull())
		data_.lastModified = dataNode["LastModified"].asString();
		auto allRepeatWeekdays = dataNode["RepeatWeekdays"]["RepeatWeekdays"];
		for (auto value : allRepeatWeekdays)
			data_.repeatWeekdays.push_back(value.asString());
		auto allTimePoints = dataNode["TimePoints"]["TimePoints"];
		for (auto value : allTimePoints)
			data_.timePoints.push_back(value.asString());

}

GetAutoSnapshotPolicyResult::Data GetAutoSnapshotPolicyResult::getData()const
{
	return data_;
}

