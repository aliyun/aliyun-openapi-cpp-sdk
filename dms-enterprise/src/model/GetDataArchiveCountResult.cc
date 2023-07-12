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

#include <alibabacloud/dms-enterprise/model/GetDataArchiveCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataArchiveCountResult::GetDataArchiveCountResult() :
	ServiceResult()
{}

GetDataArchiveCountResult::GetDataArchiveCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataArchiveCountResult::~GetDataArchiveCountResult()
{}

void GetDataArchiveCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["FailCount"].isNull())
		data_.failCount = std::stol(dataNode["FailCount"].asString());
	if(!dataNode["ProcessingCount"].isNull())
		data_.processingCount = std::stol(dataNode["ProcessingCount"].asString());
	if(!dataNode["SuccessCount"].isNull())
		data_.successCount = std::stol(dataNode["SuccessCount"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDataArchiveCountResult::Data GetDataArchiveCountResult::getData()const
{
	return data_;
}

bool GetDataArchiveCountResult::getSuccess()const
{
	return success_;
}

