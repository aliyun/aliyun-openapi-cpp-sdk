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

#include <alibabacloud/gpdb/model/DescribeNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeNamespaceResult::DescribeNamespaceResult() :
	ServiceResult()
{}

DescribeNamespaceResult::DescribeNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNamespaceResult::~DescribeNamespaceResult()
{}

void DescribeNamespaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NamespaceInfo"].isNull())
		namespaceInfo_ = value["NamespaceInfo"].asString();
	if(!value["Namespace"].isNull())
		_namespace_ = value["Namespace"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeNamespaceResult::getStatus()const
{
	return status_;
}

std::string DescribeNamespaceResult::getMessage()const
{
	return message_;
}

std::string DescribeNamespaceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeNamespaceResult::get_Namespace()const
{
	return _namespace_;
}

std::string DescribeNamespaceResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeNamespaceResult::getNamespaceInfo()const
{
	return namespaceInfo_;
}

