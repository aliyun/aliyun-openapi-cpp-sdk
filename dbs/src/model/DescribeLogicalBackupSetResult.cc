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

#include <alibabacloud/dbs/model/DescribeLogicalBackupSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeLogicalBackupSetResult::DescribeLogicalBackupSetResult() :
	ServiceResult()
{}

DescribeLogicalBackupSetResult::DescribeLogicalBackupSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogicalBackupSetResult::~DescribeLogicalBackupSetResult()
{}

void DescribeLogicalBackupSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["RowNum"].isNull())
		rowNum_ = std::stol(value["RowNum"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeLogicalBackupSetResult::getStatus()const
{
	return status_;
}

int DescribeLogicalBackupSetResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeLogicalBackupSetResult::getErrMessage()const
{
	return errMessage_;
}

long DescribeLogicalBackupSetResult::getRowNum()const
{
	return rowNum_;
}

bool DescribeLogicalBackupSetResult::getSuccess()const
{
	return success_;
}

std::string DescribeLogicalBackupSetResult::getErrCode()const
{
	return errCode_;
}

