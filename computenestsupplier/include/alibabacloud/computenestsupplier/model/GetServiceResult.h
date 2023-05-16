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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICERESULT_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>

namespace AlibabaCloud
{
	namespace ComputeNestSupplier
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT GetServiceResult : public ServiceResult
			{
			public:
				struct ServiceInfo
				{
					std::string locale;
					std::string image;
					std::string name;
					std::string shortDescription;
				};
				struct CommoditySpecification
				{
					std::string specificationCode;
					std::string templateName;
					std::string predefinedParameterName;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct CommodityEntitiesItem
				{
					std::vector<std::string> entityIds;
					std::string templateName;
					std::string predefinedParameterName;
				};


				GetServiceResult();
				explicit GetServiceResult(const std::string &payload);
				~GetServiceResult();
				std::string getDeployType()const;
				std::string getTestStatus()const;
				bool getIsSupportOperated()const;
				long getDefaultLicenseDays()const;
				std::string getResourceGroupId()const;
				std::vector<CommoditySpecification> getCommoditySpecifications()const;
				std::string getServiceId()const;
				std::string getPolicyNames()const;
				std::vector<CommodityEntitiesItem> getCommodityEntities()const;
				std::string getDeployMetadata()const;
				long getTrialDuration()const;
				std::string getVersion()const;
				std::string getServiceType()const;
				std::string getLicenseMetadata()const;
				std::string getCommodityCode()const;
				std::string getTrialType()const;
				std::string getApprovalType()const;
				std::string getPermission()const;
				std::string getPublishTime()const;
				std::string getVersionName()const;
				std::string getOperationMetadata()const;
				std::vector<Tag> getTags()const;
				std::string getSupplierUrl()const;
				std::string getServiceDocUrl()const;
				std::string getUpgradeMetadata()const;
				std::string getStatus()const;
				long getProgress()const;
				std::string getPayFromType()const;
				std::string getCreateTime()const;
				std::string getRegistrationId()const;
				long getDuration()const;
				std::string getPayType()const;
				std::string getTenantType()const;
				std::string getSupplierName()const;
				std::string getStatusDetail()const;
				std::vector<ServiceInfo> getServiceInfos()const;
				std::string getUpdateTime()const;
				std::string getServiceProductUrl()const;
				std::string getAlarmMetadata()const;
				std::string getShareType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string deployType_;
				std::string testStatus_;
				bool isSupportOperated_;
				long defaultLicenseDays_;
				std::string resourceGroupId_;
				std::vector<CommoditySpecification> commoditySpecifications_;
				std::string serviceId_;
				std::string policyNames_;
				std::vector<CommodityEntitiesItem> commodityEntities_;
				std::string deployMetadata_;
				long trialDuration_;
				std::string version_;
				std::string serviceType_;
				std::string licenseMetadata_;
				std::string commodityCode_;
				std::string trialType_;
				std::string approvalType_;
				std::string permission_;
				std::string publishTime_;
				std::string versionName_;
				std::string operationMetadata_;
				std::vector<Tag> tags_;
				std::string supplierUrl_;
				std::string serviceDocUrl_;
				std::string upgradeMetadata_;
				std::string status_;
				long progress_;
				std::string payFromType_;
				std::string createTime_;
				std::string registrationId_;
				long duration_;
				std::string payType_;
				std::string tenantType_;
				std::string supplierName_;
				std::string statusDetail_;
				std::vector<ServiceInfo> serviceInfos_;
				std::string updateTime_;
				std::string serviceProductUrl_;
				std::string alarmMetadata_;
				std::string shareType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICERESULT_H_