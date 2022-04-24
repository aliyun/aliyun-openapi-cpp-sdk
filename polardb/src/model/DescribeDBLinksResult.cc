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

#include <alibabacloud/polardb/model/DescribeDBLinksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBLinksResult::DescribeDBLinksResult() :
	ServiceResult()
{}

DescribeDBLinksResult::DescribeDBLinksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBLinksResult::~DescribeDBLinksResult()
{}

void DescribeDBLinksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBLinkInfosNode = value["DBLinkInfos"]["DBLinkInfosItem"];
	for (auto valueDBLinkInfosDBLinkInfosItem : allDBLinkInfosNode)
	{
		DBLinkInfosItem dBLinkInfosObject;
		if(!valueDBLinkInfosDBLinkInfosItem["DBInstanceName"].isNull())
			dBLinkInfosObject.dBInstanceName = valueDBLinkInfosDBLinkInfosItem["DBInstanceName"].asString();
		if(!valueDBLinkInfosDBLinkInfosItem["DBLinkName"].isNull())
			dBLinkInfosObject.dBLinkName = valueDBLinkInfosDBLinkInfosItem["DBLinkName"].asString();
		if(!valueDBLinkInfosDBLinkInfosItem["SourceDBName"].isNull())
			dBLinkInfosObject.sourceDBName = valueDBLinkInfosDBLinkInfosItem["SourceDBName"].asString();
		if(!valueDBLinkInfosDBLinkInfosItem["TargetDBName"].isNull())
			dBLinkInfosObject.targetDBName = valueDBLinkInfosDBLinkInfosItem["TargetDBName"].asString();
		if(!valueDBLinkInfosDBLinkInfosItem["TargetDBInstanceName"].isNull())
			dBLinkInfosObject.targetDBInstanceName = valueDBLinkInfosDBLinkInfosItem["TargetDBInstanceName"].asString();
		if(!valueDBLinkInfosDBLinkInfosItem["TargetAccount"].isNull())
			dBLinkInfosObject.targetAccount = valueDBLinkInfosDBLinkInfosItem["TargetAccount"].asString();
		dBLinkInfos_.push_back(dBLinkInfosObject);
	}
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::vector<DescribeDBLinksResult::DBLinkInfosItem> DescribeDBLinksResult::getDBLinkInfos()const
{
	return dBLinkInfos_;
}

std::string DescribeDBLinksResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

