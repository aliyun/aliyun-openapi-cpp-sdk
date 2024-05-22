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

#include <alibabacloud/polardbx/model/DescribeColdDataBasicInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeColdDataBasicInfoResult::DescribeColdDataBasicInfoResult() :
	ServiceResult()
{}

DescribeColdDataBasicInfoResult::DescribeColdDataBasicInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeColdDataBasicInfoResult::~DescribeColdDataBasicInfoResult()
{}

void DescribeColdDataBasicInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EnableStatus"].isNull())
		data_.enableStatus = dataNode["EnableStatus"].asString() == "true";
	if(!dataNode["CloudProduct"].isNull())
		data_.cloudProduct = dataNode["CloudProduct"].asString();
	if(!dataNode["VolumeName"].isNull())
		data_.volumeName = dataNode["VolumeName"].asString();
	if(!dataNode["BackupSetSpaceSize"].isNull())
		data_.backupSetSpaceSize = dataNode["BackupSetSpaceSize"].asString();
	if(!dataNode["BackupSetCount"].isNull())
		data_.backupSetCount = std::stoi(dataNode["BackupSetCount"].asString());
	if(!dataNode["CurrentSpaceSize"].isNull())
		data_.currentSpaceSize = dataNode["CurrentSpaceSize"].asString();
	if(!dataNode["DataRedundancyType"].isNull())
		data_.dataRedundancyType = dataNode["DataRedundancyType"].asString();
	if(!dataNode["WriteAccessNum"].isNull())
		data_.writeAccessNum = dataNode["WriteAccessNum"].asString();
	if(!dataNode["ReadAccessNum"].isNull())
		data_.readAccessNum = std::stol(dataNode["ReadAccessNum"].asString());
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();

}

DescribeColdDataBasicInfoResult::Data DescribeColdDataBasicInfoResult::getData()const
{
	return data_;
}

