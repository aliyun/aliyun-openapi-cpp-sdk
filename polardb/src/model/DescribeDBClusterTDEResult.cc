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

#include <alibabacloud/polardb/model/DescribeDBClusterTDEResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterTDEResult::DescribeDBClusterTDEResult() :
	ServiceResult()
{}

DescribeDBClusterTDEResult::DescribeDBClusterTDEResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterTDEResult::~DescribeDBClusterTDEResult()
{}

void DescribeDBClusterTDEResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AutomaticRotation"].isNull())
		automaticRotation_ = value["AutomaticRotation"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["EncryptNewTables"].isNull())
		encryptNewTables_ = value["EncryptNewTables"].asString();
	if(!value["EncryptionKey"].isNull())
		encryptionKey_ = value["EncryptionKey"].asString();
	if(!value["RotationInterval"].isNull())
		rotationInterval_ = value["RotationInterval"].asString();
	if(!value["TDERegion"].isNull())
		tDERegion_ = value["TDERegion"].asString();
	if(!value["TDEStatus"].isNull())
		tDEStatus_ = value["TDEStatus"].asString();
	if(!value["EncryptionKeyStatus"].isNull())
		encryptionKeyStatus_ = value["EncryptionKeyStatus"].asString();

}

std::string DescribeDBClusterTDEResult::getTDEStatus()const
{
	return tDEStatus_;
}

std::string DescribeDBClusterTDEResult::getRotationInterval()const
{
	return rotationInterval_;
}

std::string DescribeDBClusterTDEResult::getEncryptionKeyStatus()const
{
	return encryptionKeyStatus_;
}

std::string DescribeDBClusterTDEResult::getEncryptNewTables()const
{
	return encryptNewTables_;
}

std::string DescribeDBClusterTDEResult::getTDERegion()const
{
	return tDERegion_;
}

std::string DescribeDBClusterTDEResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterTDEResult::getEncryptionKey()const
{
	return encryptionKey_;
}

std::string DescribeDBClusterTDEResult::getAutomaticRotation()const
{
	return automaticRotation_;
}

