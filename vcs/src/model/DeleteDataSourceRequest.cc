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

#include <alibabacloud/vcs/model/DeleteDataSourceRequest.h>

using AlibabaCloud::Vcs::Model::DeleteDataSourceRequest;

DeleteDataSourceRequest::DeleteDataSourceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "DeleteDataSource")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDataSourceRequest::~DeleteDataSourceRequest()
{}

std::string DeleteDataSourceRequest::getCorpId()const
{
	return corpId_;
}

void DeleteDataSourceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string DeleteDataSourceRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void DeleteDataSourceRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

