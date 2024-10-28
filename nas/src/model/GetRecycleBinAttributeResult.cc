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

#include <alibabacloud/nas/model/GetRecycleBinAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

GetRecycleBinAttributeResult::GetRecycleBinAttributeResult() :
	ServiceResult()
{}

GetRecycleBinAttributeResult::GetRecycleBinAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRecycleBinAttributeResult::~GetRecycleBinAttributeResult()
{}

void GetRecycleBinAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto recycleBinAttributeNode = value["RecycleBinAttribute"];
	if(!recycleBinAttributeNode["Size"].isNull())
		recycleBinAttribute_.size = std::stol(recycleBinAttributeNode["Size"].asString());
	if(!recycleBinAttributeNode["SecondarySize"].isNull())
		recycleBinAttribute_.secondarySize = std::stol(recycleBinAttributeNode["SecondarySize"].asString());
	if(!recycleBinAttributeNode["Status"].isNull())
		recycleBinAttribute_.status = recycleBinAttributeNode["Status"].asString();
	if(!recycleBinAttributeNode["ReservedDays"].isNull())
		recycleBinAttribute_.reservedDays = std::stol(recycleBinAttributeNode["ReservedDays"].asString());
	if(!recycleBinAttributeNode["EnableTime"].isNull())
		recycleBinAttribute_.enableTime = recycleBinAttributeNode["EnableTime"].asString();
	if(!recycleBinAttributeNode["ArchiveSize"].isNull())
		recycleBinAttribute_.archiveSize = std::stol(recycleBinAttributeNode["ArchiveSize"].asString());

}

GetRecycleBinAttributeResult::RecycleBinAttribute GetRecycleBinAttributeResult::getRecycleBinAttribute()const
{
	return recycleBinAttribute_;
}

