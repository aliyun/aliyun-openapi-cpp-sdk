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

#include <alibabacloud/iot/model/CreateDataAPIServiceRequest.h>

using AlibabaCloud::Iot::Model::CreateDataAPIServiceRequest;

CreateDataAPIServiceRequest::CreateDataAPIServiceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDataAPIService")
{}

CreateDataAPIServiceRequest::~CreateDataAPIServiceRequest()
{}

std::vector<CreateDataAPIServiceRequest::ResponseParam> CreateDataAPIServiceRequest::getResponseParam()const
{
	return responseParam_;
}

void CreateDataAPIServiceRequest::setResponseParam(const std::vector<ResponseParam>& responseParam)
{
	responseParam_ = responseParam;
	int i = 0;
	for(int i = 0; i!= responseParam.size(); i++)	{
		auto obj = responseParam.at(i);
		std::string str ="ResponseParam."+ std::to_string(i);
		setCoreParameter(str + ".Name", obj.name);
		setCoreParameter(str + ".Type", obj.type);
		setCoreParameter(str + ".Required", obj.required ? "true" : "false");
		setCoreParameter(str + ".Desc", obj.desc);
		setCoreParameter(str + ".Example", obj.example);
	}
}

std::string CreateDataAPIServiceRequest::getOriginSql()const
{
	return originSql_;
}

void CreateDataAPIServiceRequest::setOriginSql(const std::string& originSql)
{
	originSql_ = originSql;
	setCoreParameter("OriginSql", originSql);
}

std::string CreateDataAPIServiceRequest::getDisplayName()const
{
	return displayName_;
}

void CreateDataAPIServiceRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setCoreParameter("DisplayName", displayName);
}

std::string CreateDataAPIServiceRequest::getApiPath()const
{
	return apiPath_;
}

void CreateDataAPIServiceRequest::setApiPath(const std::string& apiPath)
{
	apiPath_ = apiPath;
	setCoreParameter("ApiPath", apiPath);
}

std::vector<CreateDataAPIServiceRequest::RequestParam> CreateDataAPIServiceRequest::getRequestParam()const
{
	return requestParam_;
}

void CreateDataAPIServiceRequest::setRequestParam(const std::vector<RequestParam>& requestParam)
{
	requestParam_ = requestParam;
	int i = 0;
	for(int i = 0; i!= requestParam.size(); i++)	{
		auto obj = requestParam.at(i);
		std::string str ="RequestParam."+ std::to_string(i);
		setCoreParameter(str + ".Name", obj.name);
		setCoreParameter(str + ".Type", obj.type);
		setCoreParameter(str + ".Required", obj.required ? "true" : "false");
		setCoreParameter(str + ".Desc", obj.desc);
		setCoreParameter(str + ".Example", obj.example);
	}
}

std::string CreateDataAPIServiceRequest::getFolderId()const
{
	return folderId_;
}

void CreateDataAPIServiceRequest::setFolderId(const std::string& folderId)
{
	folderId_ = folderId;
	setCoreParameter("FolderId", folderId);
}

std::string CreateDataAPIServiceRequest::getTemplateSql()const
{
	return templateSql_;
}

void CreateDataAPIServiceRequest::setTemplateSql(const std::string& templateSql)
{
	templateSql_ = templateSql;
	setCoreParameter("TemplateSql", templateSql);
}

std::string CreateDataAPIServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDataAPIServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDataAPIServiceRequest::getDesc()const
{
	return desc_;
}

void CreateDataAPIServiceRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setCoreParameter("Desc", desc);
}

