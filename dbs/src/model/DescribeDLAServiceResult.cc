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

#include <alibabacloud/dbs/model/DescribeDLAServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeDLAServiceResult::DescribeDLAServiceResult() :
	ServiceResult()
{}

DescribeDLAServiceResult::DescribeDLAServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDLAServiceResult::~DescribeDLAServiceResult()
{}

void DescribeDLAServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["AutoAdd"].isNull())
		autoAdd_ = value["AutoAdd"].asString() == "true";
	if(!value["HaveJobFailed"].isNull())
		haveJobFailed_ = value["HaveJobFailed"].asString() == "true";

}

bool DescribeDLAServiceResult::getAutoAdd()const
{
	return autoAdd_;
}

bool DescribeDLAServiceResult::getHaveJobFailed()const
{
	return haveJobFailed_;
}

std::string DescribeDLAServiceResult::getState()const
{
	return state_;
}

int DescribeDLAServiceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDLAServiceResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeDLAServiceResult::getSuccess()const
{
	return success_;
}

std::string DescribeDLAServiceResult::getErrCode()const
{
	return errCode_;
}

