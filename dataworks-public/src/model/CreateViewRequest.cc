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

#include <alibabacloud/dataworks-public/model/CreateViewRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateViewRequest;

CreateViewRequest::CreateViewRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateView")
{
	setMethod(HttpRequest::Method::Post);
}

CreateViewRequest::~CreateViewRequest()
{}

std::string CreateViewRequest::getViewName()const
{
	return viewName_;
}

void CreateViewRequest::setViewName(const std::string& viewName)
{
	viewName_ = viewName;
	setBodyParameter("ViewName", viewName);
}

std::string CreateViewRequest::getClientToken()const
{
	return clientToken_;
}

void CreateViewRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateViewRequest::getSelectSQL()const
{
	return selectSQL_;
}

void CreateViewRequest::setSelectSQL(const std::string& selectSQL)
{
	selectSQL_ = selectSQL;
	setBodyParameter("SelectSQL", selectSQL);
}

std::string CreateViewRequest::getSelectWhere()const
{
	return selectWhere_;
}

void CreateViewRequest::setSelectWhere(const std::string& selectWhere)
{
	selectWhere_ = selectWhere;
	setBodyParameter("SelectWhere", selectWhere);
}

std::string CreateViewRequest::getSelectTableName()const
{
	return selectTableName_;
}

void CreateViewRequest::setSelectTableName(const std::string& selectTableName)
{
	selectTableName_ = selectTableName;
	setBodyParameter("SelectTableName", selectTableName);
}

std::string CreateViewRequest::getComment()const
{
	return comment_;
}

void CreateViewRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setBodyParameter("Comment", comment);
}

std::string CreateViewRequest::getSelectColumn()const
{
	return selectColumn_;
}

void CreateViewRequest::setSelectColumn(const std::string& selectColumn)
{
	selectColumn_ = selectColumn;
	setBodyParameter("SelectColumn", selectColumn);
}

std::string CreateViewRequest::getAppGuid()const
{
	return appGuid_;
}

void CreateViewRequest::setAppGuid(const std::string& appGuid)
{
	appGuid_ = appGuid;
	setBodyParameter("AppGuid", appGuid);
}

std::vector<CreateViewRequest::ViewColumn> CreateViewRequest::getViewColumn()const
{
	return viewColumn_;
}

void CreateViewRequest::setViewColumn(const std::vector<ViewColumn>& viewColumn)
{
	viewColumn_ = viewColumn;
	for(int dep1 = 0; dep1!= viewColumn.size(); dep1++) {
		auto viewColumnObj = viewColumn.at(dep1);
		std::string viewColumnObjStr = "ViewColumn." + std::to_string(dep1 + 1);
		setParameter(viewColumnObjStr + ".Comment", viewColumnObj.comment);
		setParameter(viewColumnObjStr + ".ColumnName", viewColumnObj.columnName);
	}
}

