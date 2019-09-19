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

#include <alibabacloud/aegis/model/DescribeWebLockConfigListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWebLockConfigListResult::DescribeWebLockConfigListResult() :
	ServiceResult()
{}

DescribeWebLockConfigListResult::DescribeWebLockConfigListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebLockConfigListResult::~DescribeWebLockConfigListResult()
{}

void DescribeWebLockConfigListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigListNode = value["ConfigList"]["ConfigInfo"];
	for (auto valueConfigListConfigInfo : allConfigListNode)
	{
		ConfigInfo configListObject;
		if(!valueConfigListConfigInfo["Id"].isNull())
			configListObject.id = valueConfigListConfigInfo["Id"].asString();
		if(!valueConfigListConfigInfo["Uuid"].isNull())
			configListObject.uuid = valueConfigListConfigInfo["Uuid"].asString();
		if(!valueConfigListConfigInfo["Dir"].isNull())
			configListObject.dir = valueConfigListConfigInfo["Dir"].asString();
		if(!valueConfigListConfigInfo["ExclusiveDir"].isNull())
			configListObject.exclusiveDir = valueConfigListConfigInfo["ExclusiveDir"].asString();
		if(!valueConfigListConfigInfo["ExclusiveFileType"].isNull())
			configListObject.exclusiveFileType = valueConfigListConfigInfo["ExclusiveFileType"].asString();
		if(!valueConfigListConfigInfo["LocalBackupDir"].isNull())
			configListObject.localBackupDir = valueConfigListConfigInfo["LocalBackupDir"].asString();
		if(!valueConfigListConfigInfo["Mode"].isNull())
			configListObject.mode = valueConfigListConfigInfo["Mode"].asString();
		if(!valueConfigListConfigInfo["InclusiveFileType"].isNull())
			configListObject.inclusiveFileType = valueConfigListConfigInfo["InclusiveFileType"].asString();
		if(!valueConfigListConfigInfo["ExclusiveFile"].isNull())
			configListObject.exclusiveFile = valueConfigListConfigInfo["ExclusiveFile"].asString();
		configList_.push_back(configListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebLockConfigListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeWebLockConfigListResult::ConfigInfo> DescribeWebLockConfigListResult::getConfigList()const
{
	return configList_;
}

