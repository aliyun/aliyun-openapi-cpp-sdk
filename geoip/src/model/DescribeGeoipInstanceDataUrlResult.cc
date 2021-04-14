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

#include <alibabacloud/geoip/model/DescribeGeoipInstanceDataUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Geoip;
using namespace AlibabaCloud::Geoip::Model;

DescribeGeoipInstanceDataUrlResult::DescribeGeoipInstanceDataUrlResult() :
	ServiceResult()
{}

DescribeGeoipInstanceDataUrlResult::DescribeGeoipInstanceDataUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGeoipInstanceDataUrlResult::~DescribeGeoipInstanceDataUrlResult()
{}

void DescribeGeoipInstanceDataUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FixedDomainDownloadUrl"].isNull())
		fixedDomainDownloadUrl_ = value["FixedDomainDownloadUrl"].asString();
	if(!value["DownloadUrl"].isNull())
		downloadUrl_ = value["DownloadUrl"].asString();

}

std::string DescribeGeoipInstanceDataUrlResult::getFixedDomainDownloadUrl()const
{
	return fixedDomainDownloadUrl_;
}

std::string DescribeGeoipInstanceDataUrlResult::getDownloadUrl()const
{
	return downloadUrl_;
}

