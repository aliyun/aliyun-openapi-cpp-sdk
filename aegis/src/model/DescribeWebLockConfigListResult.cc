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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allConfigList = value["ConfigList"]["ConfigInfo"];
	for (auto value : allConfigList)
	{
		ConfigInfo configListObject;
		if(!value["Id"].isNull())
			configListObject.id = value["Id"].asString();
		if(!value["Uuid"].isNull())
			configListObject.uuid = value["Uuid"].asString();
		if(!value["Dir"].isNull())
			configListObject.dir = value["Dir"].asString();
		if(!value["ExclusiveDir"].isNull())
			configListObject.exclusiveDir = value["ExclusiveDir"].asString();
		if(!value["ExclusiveFileType"].isNull())
			configListObject.exclusiveFileType = value["ExclusiveFileType"].asString();
		if(!value["LocalBackupDir"].isNull())
			configListObject.localBackupDir = value["LocalBackupDir"].asString();
		if(!value["Mode"].isNull())
			configListObject.mode = value["Mode"].asString();
		if(!value["InclusiveFileType"].isNull())
			configListObject.inclusiveFileType = value["InclusiveFileType"].asString();
		if(!value["ExclusiveFile"].isNull())
			configListObject.exclusiveFile = value["ExclusiveFile"].asString();
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

