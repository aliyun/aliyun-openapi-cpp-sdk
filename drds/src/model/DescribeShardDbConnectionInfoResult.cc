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

#include <alibabacloud/drds/model/DescribeShardDbConnectionInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeShardDbConnectionInfoResult::DescribeShardDbConnectionInfoResult() :
	ServiceResult()
{}

DescribeShardDbConnectionInfoResult::DescribeShardDbConnectionInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardDbConnectionInfoResult::~DescribeShardDbConnectionInfoResult()
{}

void DescribeShardDbConnectionInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto connectionInfoNode = value["ConnectionInfo"];
	if(!connectionInfoNode["InstanceName"].isNull())
		connectionInfo_.instanceName = connectionInfoNode["InstanceName"].asString();
	if(!connectionInfoNode["InstanceUrl"].isNull())
		connectionInfo_.instanceUrl = connectionInfoNode["InstanceUrl"].asString();
	if(!connectionInfoNode["subDbName"].isNull())
		connectionInfo_.subDbName = connectionInfoNode["subDbName"].asString();
	if(!connectionInfoNode["dbStatus"].isNull())
		connectionInfo_.dbStatus = connectionInfoNode["dbStatus"].asString();
	if(!connectionInfoNode["dbType"].isNull())
		connectionInfo_.dbType = connectionInfoNode["dbType"].asString();
	if(!connectionInfoNode["minPoolSize"].isNull())
		connectionInfo_.minPoolSize = std::stoi(connectionInfoNode["minPoolSize"].asString());
	if(!connectionInfoNode["maxPoolSize"].isNull())
		connectionInfo_.maxPoolSize = std::stoi(connectionInfoNode["maxPoolSize"].asString());
	if(!connectionInfoNode["idleTimeOut"].isNull())
		connectionInfo_.idleTimeOut = std::stoi(connectionInfoNode["idleTimeOut"].asString());
	if(!connectionInfoNode["blockingTimeout"].isNull())
		connectionInfo_.blockingTimeout = std::stoi(connectionInfoNode["blockingTimeout"].asString());
	if(!connectionInfoNode["connectionProperties"].isNull())
		connectionInfo_.connectionProperties = connectionInfoNode["connectionProperties"].asString();
	if(!connectionInfoNode["preparedStatementCacheSize"].isNull())
		connectionInfo_.preparedStatementCacheSize = std::stoi(connectionInfoNode["preparedStatementCacheSize"].asString());
	if(!connectionInfoNode["userName"].isNull())
		connectionInfo_.userName = connectionInfoNode["userName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeShardDbConnectionInfoResult::ConnectionInfo DescribeShardDbConnectionInfoResult::getConnectionInfo()const
{
	return connectionInfo_;
}

bool DescribeShardDbConnectionInfoResult::getSuccess()const
{
	return success_;
}

