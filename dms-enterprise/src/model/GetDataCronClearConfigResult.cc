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

#include <alibabacloud/dms-enterprise/model/GetDataCronClearConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataCronClearConfigResult::GetDataCronClearConfigResult() :
	ServiceResult()
{}

GetDataCronClearConfigResult::GetDataCronClearConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataCronClearConfigResult::~GetDataCronClearConfigResult()
{}

void GetDataCronClearConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataCronClearConfigNode = value["DataCronClearConfig"];
	if(!dataCronClearConfigNode["CronFormat"].isNull())
		dataCronClearConfig_.cronFormat = dataCronClearConfigNode["CronFormat"].asString();
	if(!dataCronClearConfigNode["Duration"].isNull())
		dataCronClearConfig_.duration = dataCronClearConfigNode["Duration"].asString();
	if(!dataCronClearConfigNode["CronStatus"].isNull())
		dataCronClearConfig_.cronStatus = dataCronClearConfigNode["CronStatus"].asString();
	if(!dataCronClearConfigNode["CronCallTimes"].isNull())
		dataCronClearConfig_.cronCallTimes = dataCronClearConfigNode["CronCallTimes"].asString();
	if(!dataCronClearConfigNode["CronLastCallStartTime"].isNull())
		dataCronClearConfig_.cronLastCallStartTime = dataCronClearConfigNode["CronLastCallStartTime"].asString();
	if(!dataCronClearConfigNode["CronNextCallTime"].isNull())
		dataCronClearConfig_.cronNextCallTime = dataCronClearConfigNode["CronNextCallTime"].asString();
	if(!dataCronClearConfigNode["OptimizeTableAfterEveryClearTimes"].isNull())
		dataCronClearConfig_.optimizeTableAfterEveryClearTimes = std::stol(dataCronClearConfigNode["OptimizeTableAfterEveryClearTimes"].asString());
	if(!dataCronClearConfigNode["CurrentClearTaskCount"].isNull())
		dataCronClearConfig_.currentClearTaskCount = std::stol(dataCronClearConfigNode["CurrentClearTaskCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetDataCronClearConfigResult::DataCronClearConfig GetDataCronClearConfigResult::getDataCronClearConfig()const
{
	return dataCronClearConfig_;
}

std::string GetDataCronClearConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataCronClearConfigResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataCronClearConfigResult::getSuccess()const
{
	return success_;
}

