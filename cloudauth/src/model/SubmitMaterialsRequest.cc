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

#include <alibabacloud/cloudauth/model/SubmitMaterialsRequest.h>

using AlibabaCloud::Cloudauth::Model::SubmitMaterialsRequest;

SubmitMaterialsRequest::SubmitMaterialsRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "SubmitMaterials")
{}

SubmitMaterialsRequest::~SubmitMaterialsRequest()
{}

long SubmitMaterialsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitMaterialsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitMaterialsRequest::getSourceIp()const
{
	return sourceIp_;
}

void SubmitMaterialsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::vector<SubmitMaterialsRequest::Material> SubmitMaterialsRequest::getMaterial()const
{
	return material_;
}

void SubmitMaterialsRequest::setMaterial(const std::vector<Material>& material)
{
	material_ = material;
	int i = 0;
	for(int i = 0; i!= material.size(); i++)	{
		auto obj = material.at(i);
		std::string str ="Material."+ std::to_string(i);
		setParameter(str + ".MaterialType", obj.materialType);
		setParameter(str + ".Value", obj.value);
	}
}

std::string SubmitMaterialsRequest::getVerifyToken()const
{
	return verifyToken_;
}

void SubmitMaterialsRequest::setVerifyToken(const std::string& verifyToken)
{
	verifyToken_ = verifyToken;
	setParameter("VerifyToken", verifyToken);
}

