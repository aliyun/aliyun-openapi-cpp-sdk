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

#include <alibabacloud/bssopenapi/model/ModifyInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::ModifyInstanceRequest;

ModifyInstanceRequest::ModifyInstanceRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "ModifyInstance")
{}

ModifyInstanceRequest::~ModifyInstanceRequest()
{}

std::string ModifyInstanceRequest::getProductCode()const
{
	return productCode_;
}

void ModifyInstanceRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string ModifyInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyInstanceRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void ModifyInstanceRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setCoreParameter("SubscriptionType", subscriptionType);
}

std::string ModifyInstanceRequest::getModifyType()const
{
	return modifyType_;
}

void ModifyInstanceRequest::setModifyType(const std::string& modifyType)
{
	modifyType_ = modifyType;
	setCoreParameter("ModifyType", modifyType);
}

std::vector<ModifyInstanceRequest::Parameter> ModifyInstanceRequest::getParameter()const
{
	return parameter_;
}

void ModifyInstanceRequest::setParameter(const std::vector<Parameter>& parameter)
{
	parameter_ = parameter;
	int i = 0;
	for(int i = 0; i!= parameter.size(); i++)	{
		auto obj = parameter.at(i);
		std::string str ="Parameter."+ std::to_string(i);
		setCoreParameter(str + ".Code", obj.code);
		setCoreParameter(str + ".Value", obj.value);
	}
}

long ModifyInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceRequest::getProductType()const
{
	return productType_;
}

void ModifyInstanceRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", productType);
}

