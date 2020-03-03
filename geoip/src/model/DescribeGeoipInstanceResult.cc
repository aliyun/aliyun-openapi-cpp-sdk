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

#include <alibabacloud/geoip/model/DescribeGeoipInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Geoip;
using namespace AlibabaCloud::Geoip::Model;

DescribeGeoipInstanceResult::DescribeGeoipInstanceResult() :
	ServiceResult()
{}

DescribeGeoipInstanceResult::DescribeGeoipInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGeoipInstanceResult::~DescribeGeoipInstanceResult()
{}

void DescribeGeoipInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ProductCode"].isNull())
		productCode_ = value["ProductCode"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["VersionCode"].isNull())
		versionCode_ = value["VersionCode"].asString();
	if(!value["MaxQps"].isNull())
		maxQps_ = std::stol(value["MaxQps"].asString());
	if(!value["MaxQpd"].isNull())
		maxQpd_ = std::stol(value["MaxQpd"].asString());
	if(!value["QueryCount"].isNull())
		queryCount_ = std::stol(value["QueryCount"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["ExpireTimestamp"].isNull())
		expireTimestamp_ = std::stol(value["ExpireTimestamp"].asString());

}

std::string DescribeGeoipInstanceResult::getVersionCode()const
{
	return versionCode_;
}

long DescribeGeoipInstanceResult::getExpireTimestamp()const
{
	return expireTimestamp_;
}

long DescribeGeoipInstanceResult::getMaxQpd()const
{
	return maxQpd_;
}

long DescribeGeoipInstanceResult::getMaxQps()const
{
	return maxQps_;
}

std::string DescribeGeoipInstanceResult::getProductCode()const
{
	return productCode_;
}

std::string DescribeGeoipInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeGeoipInstanceResult::getCreateTime()const
{
	return createTime_;
}

long DescribeGeoipInstanceResult::getQueryCount()const
{
	return queryCount_;
}

std::string DescribeGeoipInstanceResult::getExpireTime()const
{
	return expireTime_;
}

long DescribeGeoipInstanceResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

