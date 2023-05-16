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

#include <alibabacloud/computenestsupplier/model/GetServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

GetServiceResult::GetServiceResult() :
	ServiceResult()
{}

GetServiceResult::GetServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceResult::~GetServiceResult()
{}

void GetServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceInfosNode = value["ServiceInfos"]["ServiceInfo"];
	for (auto valueServiceInfosServiceInfo : allServiceInfosNode)
	{
		ServiceInfo serviceInfosObject;
		if(!valueServiceInfosServiceInfo["Locale"].isNull())
			serviceInfosObject.locale = valueServiceInfosServiceInfo["Locale"].asString();
		if(!valueServiceInfosServiceInfo["Image"].isNull())
			serviceInfosObject.image = valueServiceInfosServiceInfo["Image"].asString();
		if(!valueServiceInfosServiceInfo["Name"].isNull())
			serviceInfosObject.name = valueServiceInfosServiceInfo["Name"].asString();
		if(!valueServiceInfosServiceInfo["ShortDescription"].isNull())
			serviceInfosObject.shortDescription = valueServiceInfosServiceInfo["ShortDescription"].asString();
		serviceInfos_.push_back(serviceInfosObject);
	}
	auto allCommoditySpecificationsNode = value["CommoditySpecifications"]["commoditySpecification"];
	for (auto valueCommoditySpecificationscommoditySpecification : allCommoditySpecificationsNode)
	{
		CommoditySpecification commoditySpecificationsObject;
		if(!valueCommoditySpecificationscommoditySpecification["SpecificationCode"].isNull())
			commoditySpecificationsObject.specificationCode = valueCommoditySpecificationscommoditySpecification["SpecificationCode"].asString();
		if(!valueCommoditySpecificationscommoditySpecification["TemplateName"].isNull())
			commoditySpecificationsObject.templateName = valueCommoditySpecificationscommoditySpecification["TemplateName"].asString();
		if(!valueCommoditySpecificationscommoditySpecification["PredefinedParameterName"].isNull())
			commoditySpecificationsObject.predefinedParameterName = valueCommoditySpecificationscommoditySpecification["PredefinedParameterName"].asString();
		commoditySpecifications_.push_back(commoditySpecificationsObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allCommodityEntitiesNode = value["CommodityEntities"]["commodityEntitiesItem"];
	for (auto valueCommodityEntitiescommodityEntitiesItem : allCommodityEntitiesNode)
	{
		CommodityEntitiesItem commodityEntitiesObject;
		if(!valueCommodityEntitiescommodityEntitiesItem["TemplateName"].isNull())
			commodityEntitiesObject.templateName = valueCommodityEntitiescommodityEntitiesItem["TemplateName"].asString();
		if(!valueCommodityEntitiescommodityEntitiesItem["PredefinedParameterName"].isNull())
			commodityEntitiesObject.predefinedParameterName = valueCommodityEntitiescommodityEntitiesItem["PredefinedParameterName"].asString();
		auto allEntityIds = value["EntityIds"]["entityIds"];
		for (auto value : allEntityIds)
			commodityEntitiesObject.entityIds.push_back(value.asString());
		commodityEntities_.push_back(commodityEntitiesObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["DeployMetadata"].isNull())
		deployMetadata_ = value["DeployMetadata"].asString();
	if(!value["PublishTime"].isNull())
		publishTime_ = value["PublishTime"].asString();
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();
	if(!value["DeployType"].isNull())
		deployType_ = value["DeployType"].asString();
	if(!value["ServiceId"].isNull())
		serviceId_ = value["ServiceId"].asString();
	if(!value["SupplierUrl"].isNull())
		supplierUrl_ = value["SupplierUrl"].asString();
	if(!value["ServiceDocUrl"].isNull())
		serviceDocUrl_ = value["ServiceDocUrl"].asString();
	if(!value["ServiceProductUrl"].isNull())
		serviceProductUrl_ = value["ServiceProductUrl"].asString();
	if(!value["ServiceType"].isNull())
		serviceType_ = value["ServiceType"].asString();
	if(!value["SupplierName"].isNull())
		supplierName_ = value["SupplierName"].asString();
	if(!value["CommodityCode"].isNull())
		commodityCode_ = value["CommodityCode"].asString();
	if(!value["IsSupportOperated"].isNull())
		isSupportOperated_ = value["IsSupportOperated"].asString() == "true";
	if(!value["PolicyNames"].isNull())
		policyNames_ = value["PolicyNames"].asString();
	if(!value["Duration"].isNull())
		duration_ = std::stol(value["Duration"].asString());
	if(!value["Progress"].isNull())
		progress_ = std::stol(value["Progress"].asString());
	if(!value["StatusDetail"].isNull())
		statusDetail_ = value["StatusDetail"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["ShareType"].isNull())
		shareType_ = value["ShareType"].asString();
	if(!value["AlarmMetadata"].isNull())
		alarmMetadata_ = value["AlarmMetadata"].asString();
	if(!value["UpgradeMetadata"].isNull())
		upgradeMetadata_ = value["UpgradeMetadata"].asString();
	if(!value["VersionName"].isNull())
		versionName_ = value["VersionName"].asString();
	if(!value["PayFromType"].isNull())
		payFromType_ = value["PayFromType"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["DefaultLicenseDays"].isNull())
		defaultLicenseDays_ = std::stol(value["DefaultLicenseDays"].asString());
	if(!value["TrialDuration"].isNull())
		trialDuration_ = std::stol(value["TrialDuration"].asString());
	if(!value["TrialType"].isNull())
		trialType_ = value["TrialType"].asString();
	if(!value["TenantType"].isNull())
		tenantType_ = value["TenantType"].asString();
	if(!value["LicenseMetadata"].isNull())
		licenseMetadata_ = value["LicenseMetadata"].asString();
	if(!value["OperationMetadata"].isNull())
		operationMetadata_ = value["OperationMetadata"].asString();
	if(!value["TestStatus"].isNull())
		testStatus_ = value["TestStatus"].asString();
	if(!value["ApprovalType"].isNull())
		approvalType_ = value["ApprovalType"].asString();
	if(!value["RegistrationId"].isNull())
		registrationId_ = value["RegistrationId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["Permission"].isNull())
		permission_ = value["Permission"].asString();

}

std::string GetServiceResult::getDeployType()const
{
	return deployType_;
}

std::string GetServiceResult::getTestStatus()const
{
	return testStatus_;
}

bool GetServiceResult::getIsSupportOperated()const
{
	return isSupportOperated_;
}

long GetServiceResult::getDefaultLicenseDays()const
{
	return defaultLicenseDays_;
}

std::string GetServiceResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::vector<GetServiceResult::CommoditySpecification> GetServiceResult::getCommoditySpecifications()const
{
	return commoditySpecifications_;
}

std::string GetServiceResult::getServiceId()const
{
	return serviceId_;
}

std::string GetServiceResult::getPolicyNames()const
{
	return policyNames_;
}

std::vector<GetServiceResult::CommodityEntitiesItem> GetServiceResult::getCommodityEntities()const
{
	return commodityEntities_;
}

std::string GetServiceResult::getDeployMetadata()const
{
	return deployMetadata_;
}

long GetServiceResult::getTrialDuration()const
{
	return trialDuration_;
}

std::string GetServiceResult::getVersion()const
{
	return version_;
}

std::string GetServiceResult::getServiceType()const
{
	return serviceType_;
}

std::string GetServiceResult::getLicenseMetadata()const
{
	return licenseMetadata_;
}

std::string GetServiceResult::getCommodityCode()const
{
	return commodityCode_;
}

std::string GetServiceResult::getTrialType()const
{
	return trialType_;
}

std::string GetServiceResult::getApprovalType()const
{
	return approvalType_;
}

std::string GetServiceResult::getPermission()const
{
	return permission_;
}

std::string GetServiceResult::getPublishTime()const
{
	return publishTime_;
}

std::string GetServiceResult::getVersionName()const
{
	return versionName_;
}

std::string GetServiceResult::getOperationMetadata()const
{
	return operationMetadata_;
}

std::vector<GetServiceResult::Tag> GetServiceResult::getTags()const
{
	return tags_;
}

std::string GetServiceResult::getSupplierUrl()const
{
	return supplierUrl_;
}

std::string GetServiceResult::getServiceDocUrl()const
{
	return serviceDocUrl_;
}

std::string GetServiceResult::getUpgradeMetadata()const
{
	return upgradeMetadata_;
}

std::string GetServiceResult::getStatus()const
{
	return status_;
}

long GetServiceResult::getProgress()const
{
	return progress_;
}

std::string GetServiceResult::getPayFromType()const
{
	return payFromType_;
}

std::string GetServiceResult::getCreateTime()const
{
	return createTime_;
}

std::string GetServiceResult::getRegistrationId()const
{
	return registrationId_;
}

long GetServiceResult::getDuration()const
{
	return duration_;
}

std::string GetServiceResult::getPayType()const
{
	return payType_;
}

std::string GetServiceResult::getTenantType()const
{
	return tenantType_;
}

std::string GetServiceResult::getSupplierName()const
{
	return supplierName_;
}

std::string GetServiceResult::getStatusDetail()const
{
	return statusDetail_;
}

std::vector<GetServiceResult::ServiceInfo> GetServiceResult::getServiceInfos()const
{
	return serviceInfos_;
}

std::string GetServiceResult::getUpdateTime()const
{
	return updateTime_;
}

std::string GetServiceResult::getServiceProductUrl()const
{
	return serviceProductUrl_;
}

std::string GetServiceResult::getAlarmMetadata()const
{
	return alarmMetadata_;
}

std::string GetServiceResult::getShareType()const
{
	return shareType_;
}

