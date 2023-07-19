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

#include <alibabacloud/dts/model/StopDedicatedClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

StopDedicatedClusterResult::StopDedicatedClusterResult() :
	ServiceResult()
{}

StopDedicatedClusterResult::StopDedicatedClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StopDedicatedClusterResult::~StopDedicatedClusterResult()
{}

void StopDedicatedClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::string StopDedicatedClusterResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string StopDedicatedClusterResult::getErrMessage()const
{
	return errMessage_;
}

std::string StopDedicatedClusterResult::getSuccess()const
{
	return success_;
}

std::string StopDedicatedClusterResult::getErrCode()const
{
	return errCode_;
}

