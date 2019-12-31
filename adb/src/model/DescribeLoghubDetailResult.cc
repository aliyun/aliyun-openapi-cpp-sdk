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

#include <alibabacloud/adb/model/DescribeLoghubDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeLoghubDetailResult::DescribeLoghubDetailResult() :
	ServiceResult()
{}

DescribeLoghubDetailResult::DescribeLoghubDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoghubDetailResult::~DescribeLoghubDetailResult()
{}

void DescribeLoghubDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto loghubInfoNode = value["LoghubInfo"];
	if(!loghubInfoNode["ProjectName"].isNull())
		loghubInfo_.projectName = loghubInfoNode["ProjectName"].asString();
	if(!loghubInfoNode["LogStoreName"].isNull())
		loghubInfo_.logStoreName = loghubInfoNode["LogStoreName"].asString();
	if(!loghubInfoNode["DeliverName"].isNull())
		loghubInfo_.deliverName = loghubInfoNode["DeliverName"].asString();
	if(!loghubInfoNode["DeliverTime"].isNull())
		loghubInfo_.deliverTime = loghubInfoNode["DeliverTime"].asString();
	if(!loghubInfoNode["DomainUrl"].isNull())
		loghubInfo_.domainUrl = loghubInfoNode["DomainUrl"].asString();
	if(!loghubInfoNode["Description"].isNull())
		loghubInfo_.description = loghubInfoNode["Description"].asString();
	if(!loghubInfoNode["SchemaName"].isNull())
		loghubInfo_.schemaName = loghubInfoNode["SchemaName"].asString();
	if(!loghubInfoNode["TableName"].isNull())
		loghubInfo_.tableName = loghubInfoNode["TableName"].asString();
	if(!loghubInfoNode["RegionId"].isNull())
		loghubInfo_.regionId = loghubInfoNode["RegionId"].asString();
	if(!loghubInfoNode["ZoneId"].isNull())
		loghubInfo_.zoneId = loghubInfoNode["ZoneId"].asString();
	if(!loghubInfoNode["UserName"].isNull())
		loghubInfo_.userName = loghubInfoNode["UserName"].asString();
	if(!loghubInfoNode["Password"].isNull())
		loghubInfo_.password = loghubInfoNode["Password"].asString();
	if(!loghubInfoNode["FilterDirtyData"].isNull())
		loghubInfo_.filterDirtyData = loghubInfoNode["FilterDirtyData"].asString() == "true";
	if(!loghubInfoNode["AccessKey"].isNull())
		loghubInfo_.accessKey = loghubInfoNode["AccessKey"].asString();
	if(!loghubInfoNode["AccessSecret"].isNull())
		loghubInfo_.accessSecret = loghubInfoNode["AccessSecret"].asString();
	if(!loghubInfoNode["DBType"].isNull())
		loghubInfo_.dBType = loghubInfoNode["DBType"].asString();
	if(!loghubInfoNode["DBClusterId"].isNull())
		loghubInfo_.dBClusterId = loghubInfoNode["DBClusterId"].asString();
	auto allLogHubStoresNode = loghubInfoNode["LogHubStores"]["LogHubStore"];
	for (auto loghubInfoNodeLogHubStoresLogHubStore : allLogHubStoresNode)
	{
		LoghubInfo::LogHubStore logHubStoreObject;
		if(!loghubInfoNodeLogHubStoresLogHubStore["LogKey"].isNull())
			logHubStoreObject.logKey = loghubInfoNodeLogHubStoresLogHubStore["LogKey"].asString();
		if(!loghubInfoNodeLogHubStoresLogHubStore["FieldKey"].isNull())
			logHubStoreObject.fieldKey = loghubInfoNodeLogHubStoresLogHubStore["FieldKey"].asString();
		if(!loghubInfoNodeLogHubStoresLogHubStore["Type"].isNull())
			logHubStoreObject.type = loghubInfoNodeLogHubStoresLogHubStore["Type"].asString();
		loghubInfo_.logHubStores.push_back(logHubStoreObject);
	}

}

DescribeLoghubDetailResult::LoghubInfo DescribeLoghubDetailResult::getLoghubInfo()const
{
	return loghubInfo_;
}

