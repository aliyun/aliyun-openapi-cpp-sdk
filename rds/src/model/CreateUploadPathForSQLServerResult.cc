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
	internetFtpServer_ = value["InternetFtpServer"].asString();
	internetPort_ = std::stoi(value["InternetPort"].asString());
	intranetFtpserver_ = value["IntranetFtpserver"].asString();
	intranetport_ = std::stoi(value["Intranetport"].asString());
	userName_ = value["UserName"].asString();
	password_ = value["Password"].asString();
	fileName_ = value["FileName"].asString();

}

std::string CreateUploadPathForSQLServerResult::getIntranetFtpserver()const
{
	return intranetFtpserver_;
}

void CreateUploadPathForSQLServerResult::setIntranetFtpserver(const std::string& intranetFtpserver)
{
	intranetFtpserver_ = intranetFtpserver;
}

std::string CreateUploadPathForSQLServerResult::getUserName()const
{
	return userName_;
}

void CreateUploadPathForSQLServerResult::setUserName(const std::string& userName)
{
	userName_ = userName;
}

std::string CreateUploadPathForSQLServerResult::getFileName()const
{
	return fileName_;
}

void CreateUploadPathForSQLServerResult::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
}

int CreateUploadPathForSQLServerResult::getInternetPort()const
{
	return internetPort_;
}

void CreateUploadPathForSQLServerResult::setInternetPort(int internetPort)
{
	internetPort_ = internetPort;
}

std::string CreateUploadPathForSQLServerResult::getInternetFtpServer()const
{
	return internetFtpServer_;
}

void CreateUploadPathForSQLServerResult::setInternetFtpServer(const std::string& internetFtpServer)
{
	internetFtpServer_ = internetFtpServer;
}

int CreateUploadPathForSQLServerResult::getIntranetport()const
{
	return intranetport_;
}

void CreateUploadPathForSQLServerResult::setIntranetport(int intranetport)
{
	intranetport_ = intranetport;
}

std::string CreateUploadPathForSQLServerResult::getPassword()const
{
	return password_;
}

void CreateUploadPathForSQLServerResult::setPassword(const std::string& password)
{
	password_ = password;
}

