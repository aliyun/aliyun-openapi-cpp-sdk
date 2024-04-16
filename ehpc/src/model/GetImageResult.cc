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

#include <alibabacloud/ehpc/model/GetImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetImageResult::GetImageResult() :
	ServiceResult()
{}

GetImageResult::GetImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImageResult::~GetImageResult()
{}

void GetImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imageNode = value["Image"];
	if(!imageNode["ImageType"].isNull())
		image_.imageType = imageNode["ImageType"].asString();
	if(!imageNode["AppId"].isNull())
		image_.appId = imageNode["AppId"].asString();
	if(!imageNode["Name"].isNull())
		image_.name = imageNode["Name"].asString();
	if(!imageNode["Version"].isNull())
		image_.version = imageNode["Version"].asString();
	if(!imageNode["Label"].isNull())
		image_.label = imageNode["Label"].asString();
	if(!imageNode["Description"].isNull())
		image_.description = imageNode["Description"].asString();
	if(!imageNode["Size"].isNull())
		image_.size = imageNode["Size"].asString();
	if(!imageNode["CreateTime"].isNull())
		image_.createTime = imageNode["CreateTime"].asString();
	if(!imageNode["UpdateTime"].isNull())
		image_.updateTime = imageNode["UpdateTime"].asString();
	auto containerImageSpecNode = imageNode["ContainerImageSpec"];
	if(!containerImageSpecNode["RegistryUrl"].isNull())
		image_.containerImageSpec.registryUrl = containerImageSpecNode["RegistryUrl"].asString();
	if(!containerImageSpecNode["IsACRRegistry"].isNull())
		image_.containerImageSpec.isACRRegistry = containerImageSpecNode["IsACRRegistry"].asString() == "true";
	if(!containerImageSpecNode["IsACREnterprise"].isNull())
		image_.containerImageSpec.isACREnterprise = containerImageSpecNode["IsACREnterprise"].asString() == "true";
	if(!containerImageSpecNode["RegistryCriId"].isNull())
		image_.containerImageSpec.registryCriId = containerImageSpecNode["RegistryCriId"].asString();
	auto registryCredentialNode = containerImageSpecNode["RegistryCredential"];
	if(!registryCredentialNode["Server"].isNull())
		image_.containerImageSpec.registryCredential.server = registryCredentialNode["Server"].asString();
	if(!registryCredentialNode["UserName"].isNull())
		image_.containerImageSpec.registryCredential.userName = registryCredentialNode["UserName"].asString();
	if(!registryCredentialNode["Password"].isNull())
		image_.containerImageSpec.registryCredential.password = registryCredentialNode["Password"].asString();
	auto vMImageSpecNode = imageNode["VMImageSpec"];
	if(!vMImageSpecNode["ImageId"].isNull())
		image_.vMImageSpec.imageId = vMImageSpecNode["ImageId"].asString();
	if(!vMImageSpecNode["OsTag"].isNull())
		image_.vMImageSpec.osTag = vMImageSpecNode["OsTag"].asString();
	if(!vMImageSpecNode["Platform"].isNull())
		image_.vMImageSpec.platform = vMImageSpecNode["Platform"].asString();
	if(!vMImageSpecNode["Version"].isNull())
		image_.vMImageSpec.version = vMImageSpecNode["Version"].asString();
	if(!vMImageSpecNode["Architecture"].isNull())
		image_.vMImageSpec.architecture = vMImageSpecNode["Architecture"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int GetImageResult::getTotalCount()const
{
	return totalCount_;
}

GetImageResult::Image GetImageResult::getImage()const
{
	return image_;
}

bool GetImageResult::getSuccess()const
{
	return success_;
}

