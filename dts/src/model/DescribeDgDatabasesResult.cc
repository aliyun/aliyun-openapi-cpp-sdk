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

#include <alibabacloud/dts/model/DescribeDgDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDgDatabasesResult::DescribeDgDatabasesResult() :
	ServiceResult()
{}

DescribeDgDatabasesResult::DescribeDgDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDgDatabasesResult::~DescribeDgDatabasesResult()
{}

void DescribeDgDatabasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDgDatabasesNode = value["DgDatabases"]["DgDatabasesItem"];
	for (auto valueDgDatabasesDgDatabasesItem : allDgDatabasesNode)
	{
		DgDatabasesItem dgDatabasesObject;
		if(!valueDgDatabasesDgDatabasesItem["InstanceId"].isNull())
			dgDatabasesObject.instanceId = valueDgDatabasesDgDatabasesItem["InstanceId"].asString();
		if(!valueDgDatabasesDgDatabasesItem["InstanceName"].isNull())
			dgDatabasesObject.instanceName = valueDgDatabasesDgDatabasesItem["InstanceName"].asString();
		if(!valueDgDatabasesDgDatabasesItem["Region"].isNull())
			dgDatabasesObject.region = valueDgDatabasesDgDatabasesItem["Region"].asString();
		if(!valueDgDatabasesDgDatabasesItem["Engine"].isNull())
			dgDatabasesObject.engine = valueDgDatabasesDgDatabasesItem["Engine"].asString();
		if(!valueDgDatabasesDgDatabasesItem["VpcId"].isNull())
			dgDatabasesObject.vpcId = valueDgDatabasesDgDatabasesItem["VpcId"].asString();
		if(!valueDgDatabasesDgDatabasesItem["VpcCloudInstanceId"].isNull())
			dgDatabasesObject.vpcCloudInstanceId = valueDgDatabasesDgDatabasesItem["VpcCloudInstanceId"].asString();
		if(!valueDgDatabasesDgDatabasesItem["Status"].isNull())
			dgDatabasesObject.status = valueDgDatabasesDgDatabasesItem["Status"].asString();
		if(!valueDgDatabasesDgDatabasesItem["GroupId"].isNull())
			dgDatabasesObject.groupId = valueDgDatabasesDgDatabasesItem["GroupId"].asString();
		if(!valueDgDatabasesDgDatabasesItem["HostPort"].isNull())
			dgDatabasesObject.hostPort = valueDgDatabasesDgDatabasesItem["HostPort"].asString();
		if(!valueDgDatabasesDgDatabasesItem["ConnectHostPort"].isNull())
			dgDatabasesObject.connectHostPort = valueDgDatabasesDgDatabasesItem["ConnectHostPort"].asString();
		dgDatabases_.push_back(dgDatabasesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::vector<DescribeDgDatabasesResult::DgDatabasesItem> DescribeDgDatabasesResult::getDgDatabases()const
{
	return dgDatabases_;
}

int DescribeDgDatabasesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDgDatabasesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDgDatabasesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDgDatabasesResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeDgDatabasesResult::getSuccess()const
{
	return success_;
}

std::string DescribeDgDatabasesResult::getErrCode()const
{
	return errCode_;
}

