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

#include <alibabacloud/sas/model/DescribePropertyCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyCountResult::DescribePropertyCountResult() :
	ServiceResult()
{}

DescribePropertyCountResult::DescribePropertyCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyCountResult::~DescribePropertyCountResult()
{}

void DescribePropertyCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Process"].isNull())
		process_ = std::stoi(value["Process"].asString());
	if(!value["User"].isNull())
		user_ = std::stoi(value["User"].asString());
	if(!value["Software"].isNull())
		software_ = std::stoi(value["Software"].asString());
	if(!value["Cron"].isNull())
		cron_ = std::stoi(value["Cron"].asString());
	if(!value["Port"].isNull())
		port_ = std::stoi(value["Port"].asString());
	if(!value["Sca"].isNull())
		sca_ = std::stoi(value["Sca"].asString());
	if(!value["Web"].isNull())
		web_ = std::stoi(value["Web"].asString());
	if(!value["Database"].isNull())
		database_ = std::stoi(value["Database"].asString());
	if(!value["Lkm"].isNull())
		lkm_ = std::stoi(value["Lkm"].asString());
	if(!value["Autorun"].isNull())
		autorun_ = std::stoi(value["Autorun"].asString());
	if(!value["Webserver"].isNull())
		webserver_ = std::stoi(value["Webserver"].asString());

}

int DescribePropertyCountResult::getSca()const
{
	return sca_;
}

int DescribePropertyCountResult::getUser()const
{
	return user_;
}

int DescribePropertyCountResult::getWeb()const
{
	return web_;
}

int DescribePropertyCountResult::getPort()const
{
	return port_;
}

int DescribePropertyCountResult::getDatabase()const
{
	return database_;
}

int DescribePropertyCountResult::getProcess()const
{
	return process_;
}

int DescribePropertyCountResult::getSoftware()const
{
	return software_;
}

int DescribePropertyCountResult::getWebserver()const
{
	return webserver_;
}

int DescribePropertyCountResult::getCron()const
{
	return cron_;
}

int DescribePropertyCountResult::getAutorun()const
{
	return autorun_;
}

int DescribePropertyCountResult::getLkm()const
{
	return lkm_;
}

