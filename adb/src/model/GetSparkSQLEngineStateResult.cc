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

#include <alibabacloud/adb/model/GetSparkSQLEngineStateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetSparkSQLEngineStateResult::GetSparkSQLEngineStateResult() :
	ServiceResult()
{}

GetSparkSQLEngineStateResult::GetSparkSQLEngineStateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSparkSQLEngineStateResult::~GetSparkSQLEngineStateResult()
{}

void GetSparkSQLEngineStateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["MinExecutor"].isNull())
		data_.minExecutor = dataNode["MinExecutor"].asString();
	if(!dataNode["MaxExecutor"].isNull())
		data_.maxExecutor = dataNode["MaxExecutor"].asString();
	if(!dataNode["Jars"].isNull())
		data_.jars = dataNode["Jars"].asString();
	if(!dataNode["SlotNum"].isNull())
		data_.slotNum = dataNode["SlotNum"].asString();
	if(!dataNode["Config"].isNull())
		data_.config = dataNode["Config"].asString();
	if(!dataNode["State"].isNull())
		data_.state = dataNode["State"].asString();
	if(!dataNode["SubmittedTimeInMillis"].isNull())
		data_.submittedTimeInMillis = dataNode["SubmittedTimeInMillis"].asString();

}

GetSparkSQLEngineStateResult::Data GetSparkSQLEngineStateResult::getData()const
{
	return data_;
}

