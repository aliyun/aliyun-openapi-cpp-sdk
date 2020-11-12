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

#include <alibabacloud/openanalytics-open/model/AlterTableRequest.h>

using AlibabaCloud::Openanalytics_open::Model::AlterTableRequest;

AlterTableRequest::AlterTableRequest() :
	RpcServiceRequest("openanalytics-open", "2020-09-28", "AlterTable")
{
	setMethod(HttpRequest::Method::Post);
}

AlterTableRequest::~AlterTableRequest()
{}

std::string AlterTableRequest::getNewTableName()const
{
	return newTableName_;
}

void AlterTableRequest::setNewTableName(const std::string& newTableName)
{
	newTableName_ = newTableName;
	setParameter("NewTableName", newTableName);
}

Array AlterTableRequest::getCol()const
{
	return col_;
}

void AlterTableRequest::setCol(const Array& col)
{
	col_ = col;
	setParameter("Col", std::to_string(col));
}

std::string AlterTableRequest::getOldTableName()const
{
	return oldTableName_;
}

void AlterTableRequest::setOldTableName(const std::string& oldTableName)
{
	oldTableName_ = oldTableName;
	setParameter("OldTableName", oldTableName);
}

std::string AlterTableRequest::getOldDbName()const
{
	return oldDbName_;
}

void AlterTableRequest::setOldDbName(const std::string& oldDbName)
{
	oldDbName_ = oldDbName;
	setParameter("OldDbName", oldDbName);
}

std::string AlterTableRequest::getNewDbName()const
{
	return newDbName_;
}

void AlterTableRequest::setNewDbName(const std::string& newDbName)
{
	newDbName_ = newDbName;
	setParameter("NewDbName", newDbName);
}

std::string AlterTableRequest::getParameters()const
{
	return parameters_;
}

void AlterTableRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

