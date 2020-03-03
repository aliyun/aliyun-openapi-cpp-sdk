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

#include <alibabacloud/geoip/model/DescribeGeoipInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Geoip;
using namespace AlibabaCloud::Geoip::Model;

DescribeGeoipInstancesResult::DescribeGeoipInstancesResult() :
	ServiceResult()
{}

DescribeGeoipInstancesResult::DescribeGeoipInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGeoipInstancesResult::~DescribeGeoipInstancesResult()
{}

void DescribeGeoipInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGeoipInstancesNode = value["GeoipInstances"]["GeoipInstance"];
	for (auto valueGeoipInstancesGeoipInstance : allGeoipInstancesNode)
	{
		GeoipInstance geoipInstancesObject;
		if(!valueGeoipInstancesGeoipInstance["ProductCode"].isNull())
			geoipInstancesObject.productCode = valueGeoipInstancesGeoipInstance["ProductCode"].asString();
		if(!valueGeoipInstancesGeoipInstance["InstanceId"].isNull())
			geoipInstancesObject.instanceId = valueGeoipInstancesGeoipInstance["InstanceId"].asString();
		if(!valueGeoipInstancesGeoipInstance["VersionCode"].isNull())
			geoipInstancesObject.versionCode = valueGeoipInstancesGeoipInstance["VersionCode"].asString();
		if(!valueGeoipInstancesGeoipInstance["Status"].isNull())
			geoipInstancesObject.status = valueGeoipInstancesGeoipInstance["Status"].asString();
		if(!valueGeoipInstancesGeoipInstance["CreateTime"].isNull())
			geoipInstancesObject.createTime = valueGeoipInstancesGeoipInstance["CreateTime"].asString();
		if(!valueGeoipInstancesGeoipInstance["CreateTimestamp"].isNull())
			geoipInstancesObject.createTimestamp = std::stol(valueGeoipInstancesGeoipInstance["CreateTimestamp"].asString());
		if(!valueGeoipInstancesGeoipInstance["ExpireTime"].isNull())
			geoipInstancesObject.expireTime = valueGeoipInstancesGeoipInstance["ExpireTime"].asString();
		if(!valueGeoipInstancesGeoipInstance["ExpireTimestamp"].isNull())
			geoipInstancesObject.expireTimestamp = std::stol(valueGeoipInstancesGeoipInstance["ExpireTimestamp"].asString());
		if(!valueGeoipInstancesGeoipInstance["MaxQps"].isNull())
			geoipInstancesObject.maxQps = std::stol(valueGeoipInstancesGeoipInstance["MaxQps"].asString());
		if(!valueGeoipInstancesGeoipInstance["MaxQpd"].isNull())
			geoipInstancesObject.maxQpd = std::stol(valueGeoipInstancesGeoipInstance["MaxQpd"].asString());
		geoipInstances_.push_back(geoipInstancesObject);
	}

}

std::vector<DescribeGeoipInstancesResult::GeoipInstance> DescribeGeoipInstancesResult::getGeoipInstances()const
{
	return geoipInstances_;
}

