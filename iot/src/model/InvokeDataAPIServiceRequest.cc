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

#include <alibabacloud/iot/model/InvokeDataAPIServiceRequest.h>

using AlibabaCloud::Iot::Model::InvokeDataAPIServiceRequest;

InvokeDataAPIServiceRequest::InvokeDataAPIServiceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "InvokeDataAPIService")
{}

InvokeDataAPIServiceRequest::~InvokeDataAPIServiceRequest()
{}

std::string InvokeDataAPIServiceRequest::getApiSrn()const
{
	return apiSrn_;
}

void InvokeDataAPIServiceRequest::setApiSrn(const std::string& apiSrn)
{
	apiSrn_ = apiSrn;
	setCoreParameter("ApiSrn", apiSrn);
}

std::vector<InvokeDataAPIServiceRequest::Param> InvokeDataAPIServiceRequest::getParam()const
{
	return param_;
}

void InvokeDataAPIServiceRequest::setParam(const std::vector<Param>& param)
{
	param_ = param;
	int i = 0;
	for(int i = 0; i!= param.size(); i++)	{
		auto obj = param.at(i);
		std::string str ="Param."+ std::to_string(i);
		setCoreParameter(str + ".ListParamType", obj.listParamType);
		for(int i = 0; i!= obj.listParamValue.size(); i++)				setCoreParameter(str + ".ListParamValue."+ std::to_string(i), obj.listParamValue.at(i));
		setCoreParameter(str + ".ParamValue", obj.paramValue);
		setCoreParameter(str + ".ParamName", obj.paramName);
	}
}

std::string InvokeDataAPIServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InvokeDataAPIServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

