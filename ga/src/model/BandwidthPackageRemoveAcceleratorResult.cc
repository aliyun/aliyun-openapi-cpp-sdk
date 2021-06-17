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

#include <alibabacloud/ga/model/BandwidthPackageRemoveAcceleratorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

BandwidthPackageRemoveAcceleratorResult::BandwidthPackageRemoveAcceleratorResult() :
	ServiceResult()
{}

BandwidthPackageRemoveAcceleratorResult::BandwidthPackageRemoveAcceleratorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BandwidthPackageRemoveAcceleratorResult::~BandwidthPackageRemoveAcceleratorResult()
{}

void BandwidthPackageRemoveAcceleratorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccelerators = value["Accelerators"]["Accelerator"];
	for (const auto &item : allAccelerators)
		accelerators_.push_back(item.asString());
	if(!value["BandwidthPackageId"].isNull())
		bandwidthPackageId_ = value["BandwidthPackageId"].asString();

}

std::vector<std::string> BandwidthPackageRemoveAcceleratorResult::getAccelerators()const
{
	return accelerators_;
}

std::string BandwidthPackageRemoveAcceleratorResult::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

