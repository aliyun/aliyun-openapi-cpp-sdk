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

#include <alibabacloud/rds/model/CreateUploadPathForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateUploadPathForSQLServerResult::CreateUploadPathForSQLServerResult() :
	ServiceResult()
{}

CreateUploadPathForSQLServerResult::CreateUploadPathForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUploadPathForSQLServerResult::~CreateUploadPathForSQLServerResult()
{}

void CreateUploadPathForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["InternetFtpServer"].isNull())
		internetFtpServer_ = value["InternetFtpServer"].asString();
	if(!value["InternetPort"].isNull())
		internetPort_ = std::stoi(value["InternetPort"].asString());
	if(!value["IntranetFtpserver"].isNull())
		intranetFtpserver_ = value["IntranetFtpserver"].asString();
	if(!value["Intranetport"].isNull())
		intranetport_ = std::stoi(value["Intranetport"].asString());
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["Password"].isNull())
		password_ = value["Password"].asString();
	if(!value["FileName"].isNull())
		fileName_ = value["FileName"].asString();

}

std::string CreateUploadPathForSQLServerResult::getIntranetFtpserver()const
{
	return intranetFtpserver_;
}

std::string CreateUploadPathForSQLServerResult::getUserName()const
{
	return userName_;
}

std::string CreateUploadPathForSQLServerResult::getFileName()const
{
	return fileName_;
}

int CreateUploadPathForSQLServerResult::getInternetPort()const
{
	return internetPort_;
}

std::string CreateUploadPathForSQLServerResult::getInternetFtpServer()const
{
	return internetFtpServer_;
}

int CreateUploadPathForSQLServerResult::getIntranetport()const
{
	return intranetport_;
}

std::string CreateUploadPathForSQLServerResult::getPassword()const
{
	return password_;
}

