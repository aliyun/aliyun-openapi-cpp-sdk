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

#include <alibabacloud/vpc/model/CreateCommonBandwidthPackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateCommonBandwidthPackageResult::CreateCommonBandwidthPackageResult() :
	ServiceResult()
{}

CreateCommonBandwidthPackageResult::CreateCommonBandwidthPackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCommonBandwidthPackageResult::~CreateCommonBandwidthPackageResult()
{}

void CreateCommonBandwidthPackageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	bandwidthPackageId_ = value["BandwidthPackageId"].asString();

}

std::string CreateCommonBandwidthPackageResult::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void CreateCommonBandwidthPackageResult::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
}

