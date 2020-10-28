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

#include <alibabacloud/drds/model/DescribeHiStoreInstanceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeHiStoreInstanceInfoResult::DescribeHiStoreInstanceInfoResult() :
	ServiceResult()
{}

DescribeHiStoreInstanceInfoResult::DescribeHiStoreInstanceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHiStoreInstanceInfoResult::~DescribeHiStoreInstanceInfoResult()
{}

void DescribeHiStoreInstanceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto hiStoreInstanceInfoNode = value["HiStoreInstanceInfo"];
	if(!hiStoreInstanceInfoNode["HistoreInstanceId"].isNull())
		hiStoreInstanceInfo_.historeInstanceId = hiStoreInstanceInfoNode["HistoreInstanceId"].asString();
	if(!hiStoreInstanceInfoNode["GmtCreate"].isNull())
		hiStoreInstanceInfo_.gmtCreate = std::stol(hiStoreInstanceInfoNode["GmtCreate"].asString());
	if(!hiStoreInstanceInfoNode["RpmVersion"].isNull())
		hiStoreInstanceInfo_.rpmVersion = hiStoreInstanceInfoNode["RpmVersion"].asString();
	if(!hiStoreInstanceInfoNode["DiskSize"].isNull())
		hiStoreInstanceInfo_.diskSize = std::stoi(hiStoreInstanceInfoNode["DiskSize"].asString());
	if(!hiStoreInstanceInfoNode["MachineSpec"].isNull())
		hiStoreInstanceInfo_.machineSpec = hiStoreInstanceInfoNode["MachineSpec"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeHiStoreInstanceInfoResult::HiStoreInstanceInfo DescribeHiStoreInstanceInfoResult::getHiStoreInstanceInfo()const
{
	return hiStoreInstanceInfo_;
}

bool DescribeHiStoreInstanceInfoResult::getSuccess()const
{
	return success_;
}

